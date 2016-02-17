//
//  dynacBuffer.cpp
//  buffers
//
//  Created by ciskavriezenga on 17-02-16.
//  Copyright © 2016 ciskavriezenga. All rights reserved.
//

#include "dynacBuffer.h"

DBuffer::DBuffer(int size) {
  std::cout << "---- DBuffer - constructor" << std::endl;
  array = new float[size];
  this->size = size;
}

DBuffer::~DBuffer() {
  std::cout << "---- DBuffer - destructor" << std::endl;
  delete[] array;
  array = nullptr;
}

float& DBuffer::operator[](int x) {
  std::cout << "---- DBuffer - fillBuffer" << std::endl;
  if( x >= size || x < 0) {
    std::cout << "Index out of bounds" << std::endl;
    //return first element
    return array[0];
  }
  return array[x];
}

void DBuffer::fillBuffer(float startValue) {
  std::cout << "---- DBuffer - [] operator" << std::endl;
  std::cout << "---- DBuffer - fillBuffer" << std::endl;
  for(int i = 0; i < size; i++)
  {
    array[i] = startValue + i;
  }
}