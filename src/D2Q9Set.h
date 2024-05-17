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
name: D2Q9Set.h
###########################################

*/

#ifndef D2Q9SET
#define D2Q9SET

#include "velocitySet.h"

template<typename DATA_TYPE>
struct D2Q9VelocitySet : velocitySet<DATA_TYPE>
{
    D2Q9VelocitySet();
};

#endif