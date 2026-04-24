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

Deque::Deque(){
  blockmap = new int[mapSize];
  for(int i=0;i<mapSize;i++){
    blockmap[i] = new int[blockSize];
  }
}

Deque::~Deque(){
  for(int i = 0; i < last_block; i++){
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


