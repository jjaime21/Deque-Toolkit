/**
 * @file main.cpp
 * @author Isaac McKnew and Jose Jaime
 * @date 2026-04-13
 * @brief Deque Toolkit project
 * 
 * This project implements a custom Deque class and runs automated tests.
 */

#include "deque.h"
#include <iostream>

using namespace std;

int main() {

  deque blockmap;
  cout << "Automated tests here" << endl;
  cout << "push_front test" << endl;

  for(int i=0;i<=1000;i++){
    blockmap.push_front(i);
  }
  cout << "Test complete" << endl;
 cout << "Current size: " << blockmap.size() << endl;
 cout << "First element: " << blockmap.front() << "  Last element: " << blockmap.last() << endl << endl;

  cout << "push_back test" << endl;

  for (int i=0;i<1000;i++){
    blockmap.push_back(i);
  }
  cout << "push_back complete" << endl;

  cout << "Current size: " << blockmap.size() << endl;
  cout << "First element: " << blockmap.front() << "  Last element: " << blockmap.last() << endl << endl;

  cout << "pop_front test" << endl;
  for(int i=0;i<1000;i++){
    blockmap.pop_front();
  }

   cout << "Current size: " << blockmap.size() << endl;
   cout << "First element: " << blockmap.front() << "  Last element: " << blockmap.last() << endl << endl;

   cout << "pop_back test" << endl;

   for(int i=0;i<500;i++){
     blockmap.pop_back();
   }

    cout << "Current size: " << blockmap.size() << endl;
    cout << "First element: " << blockmap.front() << "  Last element: " << blockmap.last() << endl << endl;

    cout << "End of testing" << endl;
    
  return 0;

}
