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

template <typename DATA_TYPE>
void BGKCollisionScheme<DATA_TYPE>::collide(Node<DATA_TYPE> node,
                                            DATA_TYPE omega,
                                            DATA_TYPE omegaPrime)
{
    for (unsigned alpha = 0; alpha < (*node.numSetDirectionsPtr); alpha++)
    {
        node.densityFunc[alpha] = omegaPrime * node.streamedDensityFunc[alpha] +
                                  omega * node.equilibDensityFunc[alpha];
    }
};