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
void velocitySet<DATA_TYPE>::addVelocity(std::vector<double> velocities)
{
    std::vector<DATA_TYPE> temp;
    for (double vel : velocities)
    {
        temp.push_back(DATA_TYPE(vel));
    }
    this->discreteVelocities.push_back(temp);
};

template <typename DATA_TYPE>
void velocitySet<DATA_TYPE>::addWeight(double weight)
{
    this->weights.push_back(DATA_TYPE(weight));
};





template struct velocitySet<double>;
template struct velocitySet<float>;