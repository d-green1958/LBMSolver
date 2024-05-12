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
name: velocitySet.cpp
###########################################

*/

#include"velocitySet.h"
template <typename DATA_TYPE>
std::vector<DATA_TYPE> velocitySet<DATA_TYPE>::discreteVelocities;

template <typename DATA_TYPE>
std::vector<DATA_TYPE>* velocitySet<DATA_TYPE>::getPtr()
{
    return &discreteVelocities;
};