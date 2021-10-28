#ifndef TEST_H
#define TEST_H
#include "Queue.h"

class Test
{
  public:
    Test();

    bool newQEmpty(Queue q);

    bool addQNotEmpty(Queue q);

    bool checkEnqueue1(Queue q);

    bool checkEnqueue2(Queue q);

    bool checkDequeue(Queue q);

    bool checkDequeueResult(Queue q);

    bool checkPeekFront1(Queue q);

    bool checkPeekFront2(Queue q);

    bool checkDequeueExcept(Queue q);
};
#endif
