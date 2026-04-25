Pathfinding Pioneers - Isaac McKnew and Jose Jaime
We shared the work by reviewing each others code as we updated the repository.

The custom deque class (double-ended queue) is an indexed sequence container that allows fast insertion and deletion at the begining and end.

Challenges faced:
main.cpp:(.text+0xd9): undefined reference to `Deque::push_front(int)'
/usr/bin/ld: main.cpp:(.text+0x253): undefined reference to `Deque::push_back(int)'
/usr/bin/ld: main.cpp:(.text+0x3c8): undefined reference to `Deque::pop_front()'
/usr/bin/ld: main.cpp:(.text+0x515): undefined reference to `Deque::pop_back()'
collect2: error: ld returned 1 exit status
make: *** [Makefile:21: test] Error 1

We were not able to complete the project and we uploaded what we had.

Functions not completed:
pops (front/back)
pushes (front/back)




