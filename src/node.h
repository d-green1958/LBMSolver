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
name: node.h
###########################################
*/

#ifndef NODE
#define NODE

#include <vector>
#include <iostream>
#include "collisionSchemes.h"

template <typename DATA_TYPE>
class Node
{
public:
    // position within lattice
    std::vector<int> position;

    // pointers to sister nodes
    std::vector<Node<DATA_TYPE> *> sisterNodePtrs;

    // macroscopic quantities
    std::vector<DATA_TYPE> velocity;
    DATA_TYPE pressure;
    DATA_TYPE density;

    // density functions
    std::vector<DATA_TYPE> equilibDensityFunc;
    std::vector<DATA_TYPE> densityFunc;
    std::vector<DATA_TYPE> streamedDensityFunc;

    // static member variables
    static std::vector<std::vector<DATA_TYPE>> *velocitySetPtr;
    static std::vector<DATA_TYPE> *weightSetPtr;
    static DATA_TYPE *speedSoundPtr;
    static DATA_TYPE *speedSoundSquaredPtr;

    static unsigned *numSetDirectionsPtr;
    static unsigned *numDimensionsPtr;

    CollisionScheme<DATA_TYPE> *collisionScheme;

public:
    // constructor and destructor
    Node();
    ~Node();

    // helper functions for macroscopic quantities
    std::vector<DATA_TYPE> getVelocity() const;
    DATA_TYPE getPressure() const;
    DATA_TYPE getDensity() const;

    // set the macroscopic values
    void setVelocity(std::vector<DATA_TYPE> newVelocity);
    void setPressure(DATA_TYPE newPressure);

    // function to se the velocity set
    void setVelocitySetPtr(std::vector<std::vector<DATA_TYPE>> *setPtr);

    // calculate equilibrium density function
    void calcEquilibDensityFunc();

    // calculate the macroscopic variables
    void calcVelocityAndDensity();

    void addSisterNode(Node<DATA_TYPE>* nodePtr, unsigned latticeDirection);

    void assignCollisionScheme(CollisionScheme<DATA_TYPE> *collisionSchemePtr);
};

#endif