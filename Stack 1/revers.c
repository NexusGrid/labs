/*
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
char* reverse(char* str) {
    int len = strlen(str);
    int i = 0;
    int x = 0;
    for(;i < len /2;i++) {
        char t=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=t;
        }
}
double O;
int x = 0;
char stroka[255];
char* pStroka = stroka;
gets(pStroka);
char* pStroka1 = reverse(pStroka);
char stroka1[255] = *pStroka1;
for (;x < strlen(stroka) ; x++){
       if (isdigit(stroka[x])){
           O = strtod( pStroka, &pStroka);
            printf("%f", x);
       }else if(!isspace(stroka[x])){
           printf("%c", x);
        }

}
return 0;
}
*/
/*

    char str[100];
    char* pStr = str;
    str[0]='\0';
    char u[255] = "12";
    char r[255] = "23";
    strcat( pStr, u);
    strcat( pStr, r);
    double k = strtod(pStr,&pStr);
    int i =0;
    for(;i<strlen(str); i++){
        printf("", str[i]);
    }
    printf("/n%f", k);
*/
