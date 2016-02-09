#include <iostream>
#include <string>
#include "telOp.h"

int TelOp::optellen(int a ,int b )
{
	c = a + b;
	int *cPointer = &c;
  
	return *cPointer;
}
