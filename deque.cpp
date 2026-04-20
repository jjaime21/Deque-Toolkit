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


