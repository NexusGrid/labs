#ifndef STACK_H
#define STACK_H
#include <stdlib.h>
typedef struct stack_n1 {
        int* inf;
        size_t size;
        unsigned int top;
    } stack;
stack* stackInit_d();
stack* stackInit_c();
void deletestack(stack** pStack);
void resizestack(stack* pStack);
void push_d(stack* pStack, double value);
double pop_d(stack* pStack);
void push_c(stack* pStack, char value);
char pop_c(stack* pStack);
int stackTop(const stack* pStack);
int isEmpty(const stack* pStack);


#endif
