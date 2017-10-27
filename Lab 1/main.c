#include <stdio.h>
#include <stdlib.h>

    double CtoK(double x){
        double z = x + 273.15;
        return z;
    }
    double CtoF(double x){
        double z = 9 * (x + 32) / 5;
        return z;
    }
    double KtoC(double x){
        double z = x - 273.15;
        return z;
    }
    double KtoF(double x){
        double z = 9 * (x - 273.15) / 5 + 32;
        return z;
    }
    double FtoC(double x){
        double z = 5 * (x - 32) / 9;
        return z;
    }
    double FtoK(double x){
        double z = 5 * (x - 32) / 9 + 273.15;
        return z;
    }

int main(int argv; char* argc[]){



    return 0;
}
