/*

$$\       $$$$$$$\                      
$$ |      $$  __$$\    $$\       $$\    
$$ |      $$ |  $$ |   $$ |      $$ |   
$$ |      $$$$$$$\ |$$$$$$$$\ $$$$$$$$\ 
$$ |      $$  __$$\ \__$$  __|\__$$  __|
$$ |      $$ |  $$ |   $$ |      $$ |   
$$$$$$$$\ $$$$$$$  |   \__|      \__|   
\________|\_______/                     
                                        
                                        
###########################################
filetype: source
name: node.cpp
###########################################

*/

#include "node.h"
#include <iostream>
// Define static member variables with nullptrs
template <typename DATA_TYPE>
std::vector<std::vector<DATA_TYPE>> *Node<DATA_TYPE>::velocitySetPtr = nullptr;
template <typename DATA_TYPE>
std::vector<DATA_TYPE> *Node<DATA_TYPE>::weightSetPtr = nullptr;
template <typename DATA_TYPE>
unsigned *Node<DATA_TYPE>::numSetDirectionsPtr = nullptr;
template <typename DATA_TYPE>
unsigned *Node<DATA_TYPE>::numDimensionsPtr = nullptr;
template <typename DATA_TYPE>
DATA_TYPE *Node<DATA_TYPE>::speedSoundPtr = nullptr;
template <typename DATA_TYPE>
DATA_TYPE *Node<DATA_TYPE>::speedSoundSquaredPtr = nullptr;

// constructor and destructor
template <typename DATA_TYPE>
Node<DATA_TYPE>::Node()
{
    std::cout << "NODE CONTRUCTED" << "\n";
}
template <typename DATA_TYPE>
Node<DATA_TYPE>::~Node(){};

template <typename DATA_TYPE>
std::vector<DATA_TYPE> Node<DATA_TYPE>::getVelocity() const
{
    return velocity;
}

template <typename DATA_TYPE>
DATA_TYPE Node<DATA_TYPE>::getPressure() const
{
    return pressure;
}

template <typename DATA_TYPE>
DATA_TYPE Node<DATA_TYPE>::getDensity() const
{
    return density;
}

template <typename DATA_TYPE>
void Node<DATA_TYPE>::setVelocitySetPtr(std::vector<std::vector<DATA_TYPE>>
                                            *set)
{
    velocitySetPtr = set;
}

template <typename DATA_TYPE>
void Node<DATA_TYPE>::setVelocity(std::vector<DATA_TYPE> newVelocity)
{
    velocity = newVelocity;
}

template <typename DATA_TYPE>
void Node<DATA_TYPE>::setPressure(DATA_TYPE newPressure)
{
    pressure = newPressure;
}

template <typename DATA_TYPE>
void Node<DATA_TYPE>::calcVelocityAndDensity()
{
    // zero the density and velocity
    density = 0;
    for (unsigned d = 0; d < (*numDimensionsPtr); d++)
    {
        velocity[d] = 0;
    }

    // sum the zeroth and first moments
    for (unsigned alpha = 0; alpha < (*numSetDirectionsPtr); alpha++)
    {
        density += densityFunc[alpha];
        for (unsigned d = 0; d < (*numDimensionsPtr); d++)
        {
            velocity[d] = (*velocitySetPtr)[alpha][d] * densityFunc[alpha];
        }
    }

    // divide first moment to get velocity
    for (unsigned d = 0; d < (*numDimensionsPtr); d++)
    {
        velocity[d] /= density;
    }
}

template <typename DATA_TYPE>
void Node<DATA_TYPE>::calcEquilibDensityFunc()
{
    DATA_TYPE uu, uc;

    // for each component of the velocity set
    for (unsigned i = 0; i < (*numSetDirectionsPtr); i++)
    {
        uc = 0;
        uu = 0;

        for (unsigned a = 0; a < (*numDimensionsPtr); a++)
        {
            uc += velocity[a] * (*velocitySetPtr)[i][a];
            uu += velocity[a] * velocity[a];
        }
        uc /= (*speedSoundSquaredPtr);
        uu /= (*speedSoundSquaredPtr);
        uu /= 2;

        equilibDensityFunc[i] = (*weightSetPtr)[i] * density *
                                (1 + uc + (uc * uc / 2) - uu);
    }
}

template <typename DATA_TYPE>
void Node<DATA_TYPE>::addSisterNode(Node<DATA_TYPE>* nodePtr, unsigned latticeDirection) 
{
    sisterNodePtrs[latticeDirection] = nodePtr;
}

// Explicit instantiation for float and double
template class Node<float>;
template class Node<double>;
