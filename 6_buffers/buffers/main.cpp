
#include <iostream>

#include "buffer.h"
#include "dynacBuffer.h"




int main()
{

  //1. ____________ static array ____________
  int staticArraySize = 10;
  float myStaticArray[staticArraySize];
  //fill static array
  for(int i = 0; i < staticArraySize; i++) {
    myStaticArray[i] = 0.1111 + i;
  }
  //print some values of myStaticArray
  std::cout << "1. ____________ static array ____________" << std::endl;
  std::cout << "Value of myStaticArray[2] : " << myStaticArray[2] << std::endl;
  std::cout << "Value of myStaticArray[5] : " << myStaticArray[5] << std::endl;
  std::cout << "Value of myStaticArray[9] : " << myStaticArray[9] << std::endl << std::endl;
  
  
  //2. ____________  static object of class Buffer ____________
  Buffer myStaticBuffer;
  //fill myStaticBuffer
  myStaticBuffer.fillBuffer(0.2222);
  //print some values of myStaticBuffer
  std::cout << "2. ____________  static object of class Buffer ____________" << std::endl;
  std::cout << "Value of myStaticBuffer[2] : " << myStaticBuffer[2] << std::endl;
  std::cout << "Value of myStaticBuffer[5] : " << myStaticBuffer[5] << std::endl;
  std::cout << "Value of myStaticBuffer[12] : " << myStaticBuffer[12] << std::endl << std::endl;
  
  
  //3. ____________ dynamic float array ____________
  int dynamicArraySize = 30;
  float *myDynamicArray = new float[dynamicArraySize];
  for(int i = 0; i < dynamicArraySize; i++) {
    myDynamicArray[i] = 0.3333 + i;
  }
  //print some values of myDynamicArray
  std::cout << "3. ____________ dynamic float array ____________" << std::endl;
  std::cout << "myDynamicArray[0] contains: " << myDynamicArray[0] << std::endl;
  std::cout << "myDynamicArray[2] contains: " << myDynamicArray[2] << std::endl;
  std::cout << "myDynamicArray[5] contains: " << myDynamicArray[5] << std::endl << std::endl;
  delete[] myDynamicArray;
  myDynamicArray = nullptr;

  //4. ____________ static object of class DBuffer
  DBuffer myStaticDBuffer(40);
  //fill myStaticBuffer
  myStaticDBuffer.fillBuffer(0.4444);
  //print some values of myStaticBuffer
  std::cout << "4. ____________ static object of class DBuffer ____________" << std::endl;
  std::cout << "Value of myStaticDBuffer[2] : " << myStaticDBuffer[2] << std::endl;
  std::cout << "Value of myStaticDBuffer[5] : " << myStaticDBuffer[5] << std::endl;
  std::cout << "Value of myStaticDBuffer[12] : " << myStaticDBuffer[12] << std::endl << std::endl;

  
  
  //5 ____________ dynamic object of class DBuffer
  DBuffer* myDynamicDBuffer = new DBuffer(50);
  
  //fill myStaticBuffer
  myDynamicDBuffer->fillBuffer(0.5555);
  //print some values of myStaticBuffer
  std::cout << "5. ____________ static object of class DBuffer ____________" << std::endl;
  std::cout << "Value of myStaticDBuffer[2] : " << (*myDynamicDBuffer)[2] << std::endl;
  std::cout << "Value of myStaticDBuffer[5] : " << (*myDynamicDBuffer)[5] << std::endl;
  std::cout << "Value of myStaticDBuffer[12] : " << (*myDynamicDBuffer)[12] << std::endl << std::endl;

  delete myDynamicDBuffer;
  myDynamicDBuffer = nullptr;
  
  return 0;
}