/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "Test.h"

int main()
{
	Queue q;
	//Test t1;

	//std::cout << q.peekFront() << '\n';
	//std::cout << q.isEmpty() << '\n';



	//q.dequeue();
	try {
    q.dequeue();
  }
  catch (exception& e) {
    std::cout << e.what() << "\n";
  }


	return(0);
}
