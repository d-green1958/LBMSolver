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
name: BGKCollisionSchemes.cpp
###########################################

*/

#include "BGKCollisionScheme.h"

template<typename DATA_TYPE>
DATA_TYPE BGKCollisionScheme<DATA_TYPE>::tau;

template<typename DATA_TYPE>
DATA_TYPE BGKCollisionScheme<DATA_TYPE>::omega;

template<typename DATA_TYPE>
DATA_TYPE BGKCollisionScheme<DATA_TYPE>::omegaPrime;


template<typename DATA_TYPE>
void BGKCollisionScheme<DATA_TYPE>::setParams(DATA_TYPE tau,
                                                     DATA_TYPE deltaT)
{
    // this can be optimised since this only needs to be called once.
    this->tau = tau;
    this->omega = deltaT/tau;
    this->omegaPrime = 1 - this->omega;
};

template<typename DATA_TYPE>
BGKCollisionScheme<DATA_TYPE>::BGKCollisionScheme(std::vector<DATA_TYPE> *_equilibDensityFuncPtr,
                       std::vector<DATA_TYPE> *_densityFuncPtr,
                       std::vector<DATA_TYPE> *_streamedDensityFuncPtr,
                       unsigned* _numSetDirectionsPtr)
                       : equilibDensityFuncPtr(_equilibDensityFuncPtr),
                       densityFuncPtr(_densityFuncPtr),
                       streamedDensityFuncPtr(_streamedDensityFuncPtr),
                       numSetDirectionsPtr(_numSetDirectionsPtr)
{
    // empty
};


template <typename DATA_TYPE>
void BGKCollisionScheme<DATA_TYPE>::collide()
{
    for (unsigned alpha = 0; alpha < (*numSetDirectionsPtr); alpha++)
    {
        (*densityFuncPtr)[alpha] = omegaPrime * (*streamedDensityFuncPtr)[alpha] +
                                  omega * (*equilibDensityFuncPtr)[alpha];
    }
};



template class BGKCollisionScheme<float>;
template class BGKCollisionScheme<double>;


