#include <iostream>
using namespace std;

int main (int argc, char * const argv[]) {
  
  int* myPointer1 = new int;
  *myPointer1 = 10;
  
  cout<< "\nThe memory myPointer1 points to contains " << *myPointer1;

  //free memory
  delete myPointer1;
  
  cout<< "\nAfter deleting the pointer the memory myPointer1 points to contains " << *myPointer1;
  myPointer1 = NULL;
  
  //code below will not work
  //cout<< "\nA pointer that points at NULL is not usable " << *myPointer1;
  
  int x = 100;
  
  //direct myPointer2 to point to int x
  int *myPointer2 = &x;
  cout<< "\n\n The memory myPointer2 points to contains " << *myPointer2 << endl;
  
  //*myPointer2 -> no need to free memory
  myPointer2 = NULL;
 
  return 0;
}
