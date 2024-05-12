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
name: D2Q9.cpp
###########################################

*/

#include "D2Q9Set.h"
#include<iostream>

template <typename DATA_TYPE>
D2Q9Set<DATA_TYPE>::D2Q9Set()
{
    std::cout << "CONTRUCTED D2Q9" <<std::endl; // then need to explicity change things here
};



template class D2Q9Set<float>;
template class D2Q9Set<double>;