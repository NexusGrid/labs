#include <stdio.h>
#include <stdlib.h>

typedef struct struct_date{
    int month;
    int year;
    int day;
}struct_date;

int what_day(const struct struct_date* pDate){
    int a=(14 - pDate->month)/12;
    int y=pDate->year-a;
    int m=pDate->month+12*a-2;
    return (7000+(pDate->day+y+y/4-y/100+y/400+(31*m)/12))%7;
}

int main(){
    char *weeks[] ={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    struct_date date;

    printf("\nEnter the day: ");
    scanf("%d", &date.day);

    printf("\nEnter the month:");
    scanf("%d", &date.month);

    printf("\nEnter year:");
    scanf("%d", &date.year);

    int d;
    if(date.month > 0 && date.month <13){
        if(date.day > 0 && date.day < 32){
            if(date.day>30 && date.month == 2){
               return 0;
            }
            d =  what_day(&date);
            printf("\n%s", weeks[d]);
        }
    }
    return 0;
}
