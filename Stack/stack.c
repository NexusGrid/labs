#include <stdlib.h>
#include "Stack.h"
#define START_SIZE 10
#define ADDER 10
#define O double
int main()
{
    stack* stackInit() {
        stack* mem = NULL;
        mem = malloc(sizeof(mem));
        if(mem == NULL) {
            exit(0);
            }
        mem->size = START_SIZE;
        mem->inf = malloc(mem->size * sizeof(O));
        if(mem->inf == NULL) {
            free(mem);
            exit(0);
            }
        mem->top = 0;
        return mem;
    }

    void deleteStack(stack** rStack) {
        free((*rStack)->inf);
        free(*rStack);
        *rStack = NULL;

    }

    void resizeStack(stack* rStack) {
        rStack->size += ADDER;
        rStack->inf = realloc(rStack->inf, rStack->size * sizeof(O));
        if(rStack->inf == NULL) {
            exit(0);
        }
    }

    void push(stack* rStack, O value) {
        if (rStack->top >= rStack->size) {
            resizeStack(rStack);
        }
        rStack->top++;
        rStack->inf[rStack->top] = value;

    }

    O pop(stack* rStack) {
        if (rStack->top == 0) {
            exit(0);
        }
        rStack->top--;
        return rStack->inf[rStack->top];
    }

    O peek(const stack* rStack) {
        if (rStack->top == 0) {
            exit(0);
        }
        return(rStack->inf[rStack->top]);
    }
    return 0;
}
