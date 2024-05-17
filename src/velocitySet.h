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
struct velocitySet
{
    std::vector<std::vector<DATA_TYPE>> discreteVelocities;
    std::vector<DATA_TYPE> weights;
    unsigned numDimensions;
    unsigned numDiscreteVelocities;

    void addVelocity(std::vector<double> velocities);
    void addWeight(double weight);
};

#endif