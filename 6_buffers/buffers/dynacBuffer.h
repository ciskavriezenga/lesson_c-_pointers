//
//  dynacBuffer.hpp
//  buffers
//
//  Created by ciskavriezenga on 17-02-16.
//  Copyright © 2016 ciskavriezenga. All rights reserved.
//
#ifndef dynacBuffer_hpp
#define dynacBuffer_hpp


#include <iostream>

class DBuffer {
public:
  DBuffer(int size);
  ~DBuffer();
  
  float &operator[](int x);
  void fillBuffer(float startValue);
  
private:
  int size;
  float *array;
};


#endif /* dynacBuffer_hpp */
