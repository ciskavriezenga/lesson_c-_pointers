#include <iostream>
using namespace std;

void noReference(int value) {
  value = 6;
}

void byReference(int &value)
{
  value = 6;
}

void addOne(int &y) // y is a reference variable
{
  y = y + 1;
} // y is destroyed here


int main () {
  //Test the different functions written above the main function.
  //What is the difference between (int value) and (int &value)?
  
  int value = 5;
  
  //... write your code here
  
  return 0;
}
