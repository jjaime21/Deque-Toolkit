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

  Deque myBlockmap;
  cout << "Automated tests here" << endl;
  cout << "Deque is empty: " << myBlockmap.empty() << endl;
  
  cout << "push_front test" << endl;

  for (int i = 0; i <= 1000; i++) {
    myBlockmap.push_front(i);
  }
  cout << "Test complete" << endl;
  cout << "Current size: " << myBlockmap.size() << endl;
  cout << "First element: " << myBlockmap.front() << "  Last element: " << myBlockmap.back() << endl << endl;
  cout << "Deque is empty: " << myBlockmap.empty() << endl;

  cout << "push_back test" << endl;

  for (int i = 0; i < 1000; i++) {
    myBlockmap.push_back(i);
  }
  cout << "push_back complete" << endl;

  cout << "Current size: " << myBlockmap.size() << endl;
  cout << "First element: " << myBlockmap.front() << "  Last element: " << myBlockmap.back() << endl << endl;
  cout << "Deque is empty: " << myBlockmap.empty() << endl;

  cout << "pop_front test" << endl;
  for (int i = 0; i < 1000; i++) {
    myBlockmap.pop_front();
  }

   cout << "Current size: " << myBlockmap.size() << endl;
   cout << "First element: " << myBlockmap.front() << "  Last element: " << myBlockmap.back() << endl << endl;
   cout << "Deque is empty: " << myBlockmap.empty() << endl;

   cout << "pop_back test" << endl;

   for (int i = 0; i < 500; i++) {
     myBlockmap.pop_back();
   }

    cout << "Current size: " << myBlockmap.size() << endl;
    cout << "First element: " << myBlockmap.front() << "  Last element: " << myBlockmap.back() << endl << endl;
    cout << "Deque is empty: " << myBlockmap.empty() << endl;

    cout << "End of testing" << endl;
    
  return 0;

}
