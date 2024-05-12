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
name: collisionSchemes.h
###########################################

*/

#ifndef COLLISION_SCHEMES
#define COLLISION_SCHEMES

#include "node.h"

// header for different collision schemes
template <typename DATA_TYPE>
class CollisionScheme{
    virtual void collide(Node<DATA_TYPE> node);
};

#endif