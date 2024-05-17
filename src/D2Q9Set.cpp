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
name: D2Q9Set.cpp
###########################################

*/

#include "D2Q9Set.h"
#include<iostream>

template <typename DATA_TYPE>
D2Q9VelocitySet<DATA_TYPE>::D2Q9VelocitySet()
{
    this->numDimensions = 2;
    this->numDiscreteVelocities = 9;

    this->addWeight(4.0f/9);
    this->addVelocity({0.0f,0.0f});

    this->addWeight(1.0f/9);
    this->addVelocity({1.0f,0.0f});

    this->addWeight(1.0f/9);
    this->addVelocity({0.0f,1.0f});

    this->addWeight(1.0f/9);
    this->addVelocity({-1.0f,0.0f});

    this->addWeight(1.0f/9);
    this->addVelocity({0.0f,-1.0f});

    this->addWeight(1.0f/36);
    this->addVelocity({1.0f,1.0f});

    this->addWeight(1.0f/36);
    this->addVelocity({-1.0f,1.0f});

    this->addWeight(1.0f/36);
    this->addVelocity({1.0f,-1.0f});

    this->addWeight(1.0f/36);
    this->addVelocity({-1.0f,-1.0f});
};



template class D2Q9VelocitySet<float>;
template class D2Q9VelocitySet<double>;     