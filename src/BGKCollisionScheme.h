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

template <typename DATA_TYPE>
class BGKCollisionScheme : public CollisionScheme<DATA_TYPE> {
    void collide(Node<DATA_TYPE> node, DATA_TYPE omega, DATA_TYPE omegaPrime);
};

#endif