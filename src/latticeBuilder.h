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
name: latticeBuilder.h
###########################################

*/

#ifndef LATTICE_BUILDER
#define LATTICE_BUILDER

#include <vector>
#include "node.h"

class latticeBuilder
{
private:
    // [(x,y,z,type)]
    // type key: 0-Bulk, 1-Bounce Back
    std::vector<std::vector<int>> nodeVectors;

    // pairs of posistion vectors for periodic boundary node pairs
    std::vector<std::vector<std::vector<int>>> periodicBoundaryPairs;
    

public:
    template <typename DATA_TYPE>
    std::vector<Node<DATA_TYPE>> build();

    void addBulkBlock(int xMin, int xMax,
                      int yMin, int yMax,
                      int zMin, int zMax);

    void addBounceBackBoundary(int xMin, int xMax,
                               int yMin, int yMax,
                               int zMin, int zMax);
};

#endif