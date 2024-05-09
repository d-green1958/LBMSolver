/*
->	:::        :::::::::  ::::    ::::   <-
->	:+:        :+:    :+: +:+:+: :+:+:+  <-
->	+:+        +:+    +:+ +:+ +:+:+ +:+  <-
->	+#+        +#++:++#+  +#+  +:+  +#+  <-
->	+#+        +#+    +#+ +#+       +#+  <-
->	#+#        #+#    #+# #+#       #+#  <-
->	########## #########  ###       ###  <-

###########################################
filetype: source
name: node.cpp
###########################################

*/

#include "node.h"

// constructor
template <typename DATA_TYPE>
Node<DATA_TYPE>::Node(unsigned numDimensions)
{
    densityFunc.resize(numDimensions);
    printf("dimensions: %u\n", numDimensions);
};

// destructor
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
void Node<DATA_TYPE>::calcEquilibDensityFunc()
{
    DATA_TYPE term1;
    DATA_TYPE term2;
    DATA_TYPE term3;

    // for each component of the velocity set
    for (int i = 0; i < (*numSetDirectionsPtr); i++)
    {
        term1 = 0;
        term2 = 0;

        for (int a = 0; a < (*numDimensionsPtr); a++)
        {
            term1 += velocity[a] * (*velocitySetPtr)[i][a];
            term2 += velocity[a] * velocity[a];
        }
        term1 /= (*speedSoundSquaredPtr);
        term2 /= (*speedSoundSquaredPtr);
        term2 /= 2;

        equilibDensityFunc[i] = (*weightSetPtr[i]) * density *
                                (1 + term1 + term1 * term1 - term2);
    }
}
