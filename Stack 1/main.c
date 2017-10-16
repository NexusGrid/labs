#include "STACK.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* reverse(char* str) {
    int len = strlen(str);
    int i = 0;
    for(;i < len /2;i++) {
        char t=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=t;
        }
    return 0;
}

double* reverse_d(double* str) {
    int len = strlen(str);
    int i = 0;
    for(;i < len /2;i++) {
        char t=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=t;
        }
    return 0;
}



double calc(double t,double z, char oper) {
    switch (oper){
        case '*':
            return t*z;
            break;
        case '+':
            return t+z;
            break;
        case '-':
            return t-z;
            break;
        case '/':
            return t/z;
            break;
    }
    return 0;
}

int main(){
    int i = 0;
    double x, y, L;

    stack* s1 = stackInit_d();
    stack* s2 = stackInit_c();

    unsigned char line[128] = {0};
    unsigned char *pointer= line;





    printf("\nEnter a postfix mathematical problem\n");
    gets(pointer);
    reverse(pointer);

    for(; i < strlen(pointer);i++) {
        if(ispunct(line[i])) {
           push_c(s2, line[i]);
           }else if(!isspace(line[i])){
               L = strtod(pointer, &pointer);
                    if(pointer - 1 == (char *) '-'){
                        L *= -1;
                    }
                    reverse_d(&L);
                    push_d(s1, L);
                    printf("%f", pop_d(s1));
               }
           }




    return 0;
}




