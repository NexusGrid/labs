#ifndef STACK_H
#define STACK_H
#include <stdlib.h>
typedef struct stack_n1 {
        int* inf;
        size_t size;
        unsigned int top;
    } stack;
stack* stackInit();
void deletestack(stack** pStack);
void resizestack(stack* pStack);
void push(stack* pStack, double value);
double pop(stack* pStack);
int stackTop(const stack* pStack);
int isEmpty(const stack* pStack);


#endif
