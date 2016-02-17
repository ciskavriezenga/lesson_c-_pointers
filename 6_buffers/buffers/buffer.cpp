//
//  buffer.cpp
//  buffers
//
//  Created by ciskavriezenga on 16-02-16.
//  Copyright © 2016 ciskavriezenga. All rights reserved.
//

#include "buffer.h"

Buffer::Buffer(){
  std::cout << "---- Buffer - constructor" << std::endl;
}

Buffer::~Buffer(){
  std::cout << "---- Buffer - destructor" << std::endl;
}

void Buffer::fillBuffer(float startValue) {
  std::cout << "---- Buffer - fillBuffer" << std::endl;
  for(int i = 0; i < SIZE; i++)
  {
    array[i] = startValue + i;
  }
}


float& Buffer::operator[](int x) {
  std::cout << "---- Buffer - [] operator" << std::endl;
  if( x >= SIZE || x < 0) {
    std::cout << "Index out of bounds" << std::endl;
    //return first element
    return array[0];
  }
  return array[x];
}