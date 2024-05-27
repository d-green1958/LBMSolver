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


// header for different collision schemes
template <typename DATA_TYPE>
class CollisionScheme{
public:
    virtual void collide();
    
};

#endif