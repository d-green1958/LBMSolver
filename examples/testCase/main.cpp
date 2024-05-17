#include <iostream>
#include "latticeBuilder.h"
#include "D2Q9Set.h"
#include<typeinfo>
#include<iomanip>

int main()
{
	latticeBuilder builder;
	std::cout << std::fixed << std::setprecision(20);

	builder.addBulkBlock(0,10,0,10,0,10);
	D2Q9VelocitySet<float> set;

	for (auto i : set.discreteVelocities)
	{
		std::cout << "[";
		for (auto j : i)
		{
			std::cout << j << ",";
		}
		std::cout << "]" << std::endl;
	}

	for (auto w : set.weights)
	{
		std::cout << w << std::endl;
	}


}
