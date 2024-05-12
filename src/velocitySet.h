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
name: velocitySet.h
###########################################

*/

#ifndef VELOCITY_SETS
#define VELOCITY_SETS

#include<vector>

template <typename DATA_TYPE>
class velocitySet
{
public:
    static std::vector<DATA_TYPE> discreteVelocities;
    std::vector<DATA_TYPE>* getPtr();
};

#endif