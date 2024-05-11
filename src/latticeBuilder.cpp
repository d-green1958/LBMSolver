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
name: latticeBuilder.cpp
###########################################

*/

#include "latticeBuilder.h"
#include <iostream>

void latticeBuilder::addBulkBlock(int xMin, int xMax,
                                  int yMin, int yMax,
                                  int zMin, int zMax)
{
    int nx = xMax + 1 - xMin;
    int ny = yMax + 1 - yMin;
    int nz = zMax + 1 - zMin;

    unsigned counter = 0;
    // bulk nodes
    for (int x = xMin; x <= xMax; x++)
    {
        for (int y = yMin; y <= yMax; y++)
        {
            for (int z = zMin; z <= zMax; z++)
            {
                nodeVectors.push_back(std::vector<int>{x, y, z, 0});
                counter++;
            }
        }
    }

    std::cout << "added " << counter << std::endl;
    std::cout << "nx:" << nx << std::endl;
    std::cout << "ny:" << ny << std::endl;
    std::cout << "nz:" << nz << std::endl;
};

void latticeBuilder::addBounceBackBoundary(int xMin, int xMax,
                                           int yMin, int yMax,
                                           int zMin, int zMax)
{

    unsigned counter = 0;
    // bulk nodes
    for (int x = xMin; x <= xMax; x++)
    {
        for (int y = yMin; y <= yMax; y++)
        {
            for (int z = zMin; z <= zMax; z++)
            {
                nodeVectors.push_back(std::vector<int>{x, y, z, 1});
                counter++;
            }
        }
    }
};