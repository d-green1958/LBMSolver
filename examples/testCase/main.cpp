#include <iostream>
#include "latticeBuilder.h"
#include "D2Q9Set.h"

int main()
{
	latticeBuilder builder;

	builder.addBulkBlock(0,10,0,10,0,10);
	D2Q9Set<double> set;

}
