/*
->	:::        :::::::::  ::::    ::::   <-
->	:+:        :+:    :+: +:+:+: :+:+:+  <-
->	+:+        +:+    +:+ +:+ +:+:+ +:+  <-
->	+#+        +#++:++#+  +#+  +:+  +#+  <-
->	+#+        +#+    +#+ +#+       +#+  <-
->	#+#        #+#    #+# #+#       #+#  <-
->	########## #########  ###       ###  <-

###########################################
filetype: source
name: simulation.h
###########################################

*/

#ifndef SIMULATION
#define SIMULATION

#include<vector>
#include"lattice.h"

class Simulation {
private:
    // simulation paramters
    float tau;
    float nu;

    // simulation
    unsigned iterNum;
    float time;
    float dtime;
    float tMax;

    Lattice *latticePtr;

public:
    // run simulation
    void run();

    // set simulation paramters
    void defineParamters();

    // constructor
    Simulation();

    // destructor
    ~Simulation();

};

#endif