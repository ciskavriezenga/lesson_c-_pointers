#include <iostream>

int main (int argc, char * const argv[]) {
  
  int myVar = 10000;
  std::cout << "The integer myVar contains " << myVar << "\n";
  std::cout << "The adress of myVar is " << &myVar << "\n";
  
  //address is of type unsigned long, casting it to unsigned long
  std::cout << "The adress of myVar in ints is " << (unsigned long) &myVar << "\n";
  
  int *myPointer = &myVar;
  std::cout << "The adress of myPointer in ints is " << (unsigned long) &myPointer << "\n";
  std::cout << "myPointer contains the value  " << (unsigned long) myPointer << "\n";
  
  return 0;
}
