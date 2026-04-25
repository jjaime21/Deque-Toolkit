/**
 * @file deque.cpp
 * @author Isaac McKnew and Jose Jaime
 * @date 2026-04-13
 * @brief Deque class
 * 
 * Implementation of the Deque class
 */

#include "deque.h"
#include <iostream>

using namespace std;

//We got help from the Deque Data Structure videos on Canvas.

int& Deque::operator[](int index) {
  //Finding row from index
  int row = first_block + ((first_element + index) / blockSize);

  //Finding column from index
  int col = (first_element + index) % blockSize;

  return blockmap[row][col];
}

Deque::Deque() {
  mapSize = 4000;
  blockmap = new int*[mapSize];
  for (int i = 0; i < mapSize; i++) {
    blockmap[i] = new int[blockSize];
  }
  
  currentSize = 0;
  first_block = mapSize / 2;
  last_block = first_block;
  first_element = 0;
  last_element = 0;
}

Deque::~Deque() {
  for (int i = 0; i < mapSize; i++) {
    delete[] blockmap[i];
  }

  delete[] blockmap;
}

int Deque::front() {
  if(currentSize > 0) {
    return blockmap[first_block][first_element];
  } else {
    return -1;
  }
}

int Deque::back() {
  if(currentSize > 0) {
    return blockmap[last_block][last_element];
  } else {
    return -1;
  }
}

bool Deque::empty() {
  if(currentSize == 0) {
    return true;
  } else {
    return false;
  }
}

int Deque::size() {
  if(currentSize > 0) {
    return currentSize;
  } else {
    return 0;
  }
}


