#ifndef STACK_H
#define STACK_H

typedef struct stack_n {
        int* inf;
        size_t size;
        unsigned int top;
    } stack;
void deleteStack(stack** rStack);
void resizeStack(stack* rStack);
void push(stack* rStack, int value);
int pop(stack* rStack);
int peek(const stack* rStack);



#endif
