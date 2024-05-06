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
name: lattice.h
###########################################

*/

#ifndef LATTICE
#define LATTICE

#include<vector>
#include "node.h"

class Lattice {
private:
	std::vector<Node*> nodes;

public:
	// constructor
	Lattice();

	// destructor
	~Lattice();
};


#endif
