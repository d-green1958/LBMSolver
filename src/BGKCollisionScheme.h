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
name: BGKCollisionSchemes.h
###########################################

*/

#ifndef BGK_OPERATOR
#define BGK_OPEARTOR

#include "collisionSchemes.h"
#include <vector>

template <typename DATA_TYPE>
class BGKCollisionScheme : public CollisionScheme<DATA_TYPE>
{
public:
    static DATA_TYPE tau;
    static DATA_TYPE omega;
    static DATA_TYPE omegaPrime;

    std::vector<DATA_TYPE> *equilibDensityFuncPtr;
    std::vector<DATA_TYPE> *densityFuncPtr;
    std::vector<DATA_TYPE> *streamedDensityFuncPtr;
    unsigned *numSetDirectionsPtr;

    BGKCollisionScheme(std::vector<DATA_TYPE> *equilibDensityFuncPtr,
                       std::vector<DATA_TYPE> *densityFuncPtr,
                       std::vector<DATA_TYPE> *streamedDensityFuncPtr,
                       unsigned *numSetDirectionsPtr);
    void setParams(DATA_TYPE tau, DATA_TYPE deltaT);
    void collide();
};

#endif