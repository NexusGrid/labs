#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "Stack.h"

double calc(double t,double z, char oper) {
    switch (oper){
        case '*':
            return t * z;
        case '+':
            return t + z;
        case '-':
            return t - z;
        case '/':
            return t / z;
        default:
            return 0;
    }
}


int main(){
    char line[256];
    char* pLine = line;
    printf("Enter numbers\n");
    fgets(pLine, 256, stdin);

    stack* s1 = stackInit();

    while(*pLine){
        if(isdigit(*pLine)){
            double number = strtod(pLine,&pLine);
            push(s1,number);
        }else if(!isspace(*pLine)){
            double number1 = pop(s1);
            double number2 = pop(s1);
            char sign = *(pLine++);
            double result = calc(number2, number1, sign);
            push(s1,result);
        } else {
            pLine++;
        }
    }

    printf("%.3f\n", pop(s1));

    return 0;
}




