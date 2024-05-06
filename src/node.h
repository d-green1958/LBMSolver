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
name: node.h
###########################################
*/

#ifndef NODE
#define NODE

#include<vector>
#include<iostream>

class Node {
private:
    std::vector<float> densityFunction; 
    std::vector<float> position; 
    std::vector<float> velocity; 

    float pressure;

public:
    // constructor
    Node(unsigned dimensions);

    // destructor
    ~Node();
};

#endif