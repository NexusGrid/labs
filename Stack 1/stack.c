#include "STACK.h"
#define START_SIZE 10
#define ADDER 10

    stack* stackInit_d() {
        stack* mem = NULL;
        mem = malloc(sizeof(mem));
        if(mem == NULL) {
            exit(0);
            }
        mem->size = START_SIZE;
        mem->inf = malloc(mem->size * sizeof(double));
        if(mem->inf == NULL) {
            free(mem);
            exit(0);
            }
        mem->top = 0;
        return mem;
    }

     stack* stackInit_c() {
        stack* mem = NULL;
        mem = malloc(sizeof(mem));
        if(mem == NULL) {
            exit(0);
            }
        mem->size = START_SIZE;
        mem->inf = malloc(mem->size * sizeof(char));
        if(mem->inf == NULL) {
            free(mem);
            exit(0);
            }
        mem->top = 0;
        return mem;
    }

    void deletestack(stack** pStack) {
        free((*pStack)->inf);
        free(*pStack);
        *pStack = NULL;

    }

    void resizestack(stack* pStack) {
        pStack->size += ADDER;
        pStack->inf = realloc(pStack->inf, pStack->size * sizeof(double));
        if(pStack->inf == NULL) {
            exit(0);
        }
    }

    void push_d(stack* pStack, double value) {
        if (pStack->top >= pStack->size) {
            resizestack(pStack);
        }
        pStack->top++;
        pStack->inf[pStack->top] = value;

    }

    void push_c(stack* pStack, char value) {
        if (pStack->top >= pStack->size) {
            resizestack(pStack);
        }
        pStack->top++;
        pStack->inf[pStack->top] = value;

    }


    double pop_d(stack* pStack) {
        if (pStack->top == 0) {
            exit(0);
        }
        return pStack->inf[pStack->top--];

    }

    char pop_c(stack* pStack) {
        if (pStack->top == 0) {
            exit(0);
        }
        return pStack->inf[pStack->top--];

    }

    int stackTop(const stack* pStack) {
        if (pStack->top == 0) {
            exit(0);
        }
        return(pStack->inf[pStack->top]);
    }

    int isEmpty(const stack* pStack) {
        if(pStack->top == 0){
            return 1;
        }else {
            return 0;
        }
    }
