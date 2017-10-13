#include "Stack.h"
#include <stdlib.h>

void input(double x);
char oper (char x);
double funk (stack* rStack, char x);

stack* stack1 = stackInit();

void input (double x){
    if(x != '*' || '/' || '+' || '-'){
        s->push(stack1,x);
    }else{
    char y = oper(x);
    funk(y);
    }
}
char oper (char x){
    switch (x){
    case '+':
        return '+';
        break;
    case '-':
        return '-';
        break;
    case '*':
        return '*';
        break;
    case '/':
        return '/';
        break;
    }
}

