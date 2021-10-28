#include "Test.h"
#include <iostream>


Test::Test() {
  Queue q;
  newQEmpty(q);
  addQNotEmpty(q);
  checkEnqueue1(q);
  checkEnqueue2(q);
  checkDequeue(q);
  checkDequeueResult(q);
  checkPeekFront1(q);
  checkPeekFront2(q);
  checkDequeueExcept(q);


}

bool Test::newQEmpty(Queue q) {
  std::cout << "Test 1: Newly created queue is empty: ";
  if(q.isEmpty() == true)
  {
    std::cout << "PASS" << '\n';
  }
  else
  {
    std::cout << "FAIL" << '\n';
  }
}

bool Test::addQNotEmpty(Queue q) {
  std::cout << "Test 2: Enqueing a value makes the queue not empty: ";
  q.enqueue(5);
  if(q.isEmpty() == true)
  {
    std::cout << "FAIL" << '\n';
  }
  else
  {
    std::cout << "PASS" << '\n';
  }

}

bool Test::checkEnqueue1(Queue q){
  std::cout << "Test 3: Enqueue 6 on an empty queue returns 6: ";
  q.enqueue(6);
  if(q.peekFront() == 6)
  {
    std::cout << "PASS" << '\n';
  }
  else
  {
    std::cout << "FAIL" << '\n';
  }
}

bool Test::checkEnqueue2(Queue q){
  std::cout << "Test 4: Enqueue adds to back of queue: ";
  q.enqueue(6);
  q.enqueue(7);
  q.enqueue(8);
  if(q.peekFront() == 6)
  {
    std::cout << "PASS" << '\n';
  }
  else
  {
    std::cout << "FAIL" << '\n';
  }
}

bool Test::checkDequeue(Queue q) {
  std::cout << "Test 5: Dequeue removes from front: ";
  q.enqueue(6);
  q.enqueue(7);
  q.enqueue(8);
  q.enqueue(9);
  q.dequeue();
  if(q.peekFront() == 8)
  {
    q.dequeue();
    if(q.peekFront() == 7) {
      std::cout << "PASS" << '\n';
    }
    else {
      std::cout << "FAIL" << '\n';
    }
  }
  else
  {
    std::cout << "FAIL" << '\n';
  }
}

bool Test::checkDequeueResult(Queue q) {
  std::cout << "Test 6: Dequeue returns value it removed: ";
  int res=0;
  if (res == 6) {
    std::cout << "PASS" << '\n';
  }
  else {
    std::cout << "FAIL" << '\n';
  }
}

bool Test::checkPeekFront1(Queue q) {
  std::cout << "Test 7: peekFront returns correct value on queue with one: " << '\n';
  q.enqueue(5);

  if(q.peekFront() == 5)
  {
    std::cout << "PASS" << '\n';
  }
  else
  {
    std::cout << "FAIL" << '\n';
  }
}

bool Test::checkPeekFront2(Queue q) {
  std::cout << "Test 8: peekFront returns correct value on queue with many: " << '\n';
  for (int i=1; i <= 13; i=i+2) {
		q.enqueue(i);
	}
  if (q.peekFront() == 13) {
    q.dequeue();
    if (q.peekFront() == 11) {
      std::cout << "PASS" << '\n';
    }
    else {
      std::cout << "FAIL" << '\n';
    }
  }
  else {
    std::cout << "FAIL" << '\n';
  }
}

bool Test::checkDequeueExcept(Queue q) {

}
