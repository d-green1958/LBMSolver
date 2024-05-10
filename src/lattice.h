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

template <typename DATA_TYPE>
class Lattice {
private:
	std::vector<Node<DATA_TYPE>*> nodes;

public:
	// constructor
	Lattice();

	// destructor
	~Lattice();
};


#endif
