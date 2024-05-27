#include <iostream>
#include "latticeBuilder.h"
#include "D2Q9Set.h"
#include "BGKCollisionScheme.h"
#include<typeinfo>
#include<iomanip>

int main()
{
	latticeBuilder builder;
	std::cout << std::fixed << std::setprecision(20);

	builder.addBulkBlock(0,10,0,10,0,10);
	D2Q9VelocitySet<double> set;


}
