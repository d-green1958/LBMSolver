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
name: node.cpp
###########################################

*/

#include "node.h"

Node::Node(unsigned numDimensions) {
    densityFunction.resize(numDimensions);
    printf("dimensions: %u\n", numDimensions);
};

Node::~Node() {};