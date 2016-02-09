#include <iostream>
#include "telOp.h"
int main (int argc, char * const argv[])
{
  
  //An example with bad some practice, something dirty is going on
  //can you find the spot?
  
	TelOp myTelOp;

	int x;
	int z;

	int *xPointer = &x;
	int *zPointer = &z;


	std::cout << "\nVoer het eerste getal in voor de optelling.\n";
	std::cin >> x;
	std::cout << "\nVoer het tweede getal in voor de optelling.\n";
	std::cin >> z;

	std::cout << "\n\nde pointer xPointer bevat het adres:\n";
	std::cout << reinterpret_cast<unsigned long>(xPointer) << "\n";

	std::cout << "dit is gelijk aan het adres van x:\n";
	std::cout << reinterpret_cast<unsigned long>(&x) << "\n\n";


	std::cout << "de pointer xPointer staat zelf op het adres:\n";
	std::cout << reinterpret_cast<unsigned long>(&xPointer) << "\n\n";

	std::cout << "de pointer xPointer wijst naar de waarde:\n";
	std::cout << *xPointer << "\n";

	std::cout << "dit is gelijk aan de waarde van x:\n";
	std::cout << x << "\n";


  std::cout << "\n de twee getallen samen zijn:\n";
	std::cout << (myTelOp.optellen(*xPointer, *zPointer));
	std::cout << "\n";

  return 0;

}
