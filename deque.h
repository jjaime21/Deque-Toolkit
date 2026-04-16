/**
 * @file deque.h
 * @author Isaac McKnew and Jose Jaime
 * @date 2026-04-13
 * @brief Deque class
 * 
 * Header file for the Deque class
 */

#ifndef DEQUE_H
#define DEQUE_H


/**
 * The deque class for implementing a deque.
 *
 * @class Deque deque.h "deque/deque.h"
 * @brief This class implements a deque using a dynamic double array.
 *
 */
class Deque {
private:
  int** blockmap;
  int currentSize;
  int mapSize;
  const static int blockSize = 4096;
  int first_block;
  int first_element;
  int last_block;
  int last_element;

public:

/**
 * Default constructor
 *
 * @pre None
 * @post A new empty deque object is created.
 * 
 */
  Deque();

/**
 * Default destructor
 *
 * @pre An instance of the deque class exists.
 * @post The deque object is destroyed and all dynamically
 *       allocated memory is released.
 */
  ~Deque();

/**
 * Adds a new element to the front of the deque
 *
 * @param int value The integer value to be added
 * @pre The deque is initialized
 * @return void None
 * @post The integer value is added to the front of the deque.
 * 
 */
  void push_front(int value);

/**
 * Removes the first element from the deque
 *
 * @pre The deque is not empty
 * @return void None
 * @post The first element is removed from the deque.
 * 
 */
  void pop_front();

/**
 * Adds a new element to the back of the deque
 *
 * @param int value The integer value to be added
 * @pre The deque is initialized
 * @return void None
 * @post The integer value is added to the back of the deque.
 * 
 */
  void push_back(int value);

/**
 * Removes the last element from the deque
 *
 * @pre The deque is not empty
 * @return void None
 * @post The last element is removed from the deque.
 * 
 */
  void pop_back();

/**
 * Returns a copy of the value of the first element
 *
 * @pre The deque is not empty
 * @return int The value of the first element in the deque
 * @post The deque is not changed.
 * 
 */
  int front();

/**
 * Returns a copy of the value of the last element
 *
 * @pre The deque is not empty
 * @return int The value of the last element in the deque
 * @post The deque is not changed.
 * 
 */
  int back();

/**
 * Returns a Boolean describing whether the deque is empty
 *
 * @pre None
 * @return bool True if the deque is empty; false otherwise
 * @post The deque is not changed.
 * 
 */
  bool empty();

/**
 * Returns the size of the deque
 *
 * @pre None
 * @return int The current size of the deque
 * @post The deque is not changed.
 * 
 */
  int size();

/**
 * Gives access to the element at a specific index
 *
 * @param int index The position of the element
 * @pre The index is within the valid range.
 * @return int& A reference to the element at a specific index
 * @post The deque is not changed.
 * 
 */
  int& operator[](int index);

  
};

#endif //DEQUE_H
