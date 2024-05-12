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
name: D2Q9.h
###########################################

*/

#ifndef D2Q9SET
#define D2Q9SET

#include "velocitySet.h"

template <typename DATA_TYPE>
class D2Q9Set : public velocitySet<DATA_TYPE> {
public:
    D2Q9Set();
};

#endif