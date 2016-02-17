//
//  buffer.hpp
//  buffers
//
//  Created by ciskavriezenga on 16-02-16.
//  Copyright © 2016 ciskavriezenga. All rights reserved.
//

#ifndef buffer_h
#define buffer_h

#include <iostream>

#pragma once

#define SIZE 20

class Buffer {
public:
  Buffer();
  ~Buffer();
  void fillBuffer(float startValue);
  float& operator[](int x);
private:
  float array[SIZE];
};






#endif /* buffer_hpp */
