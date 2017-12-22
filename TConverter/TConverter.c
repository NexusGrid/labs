#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

	double CtoFK (double x){
        if(x >= -273.15){
            printf("%.2f %s", x," C:\n");
            double a,b;
            a = 9 * (x + 32) / 5;
            b = x + 273.15;
            if(a >= -459.67){
                printf("%.2f %s", a," F\n");
            }else printf("Invalid input!");
            if(b >= 0){
                printf("%.2f %s", b ," K\n\n");
            }else {printf("Invalid input!");}
        }else {printf("Invalid input!");}
	}
    double FtoCK(double x){
        if(x >= -459.67){
            printf("%.2f %s", x," F:\n");
            double a,b;
            a = 5 * (x - 32) / 9;
            b = 5 * (x - 32) / 9 + 273.15;
            if(a >= -273.15){
                printf("%.2f %s", a," C\n");
            }else {printf("Invalid input!");}
            if(b  >= 0){
                printf("%.2f %s", b," K\n\n");
            }else {printf("Invalid input!");}
        }else {printf("Invalid input!");}
    }
    double KtoCF(double x){
        if(x >= 0){
            printf("%.2f %s", x," K:\n");
            double a,b;
            a = x - 273.15;
            b = 9 * (x - 273.15) / 5 + 32;
            if(a >= -273.15){
                printf("%.2f %s", a," C\n");
            }else {printf("Invalid input!");}
            if(b >= -459.67){
                printf("%.2f %s", b ," F\n\n");
            }else {printf("Invalid input!");}
        }else {printf("Invalid input!");}
    }

int main(int argc, char* argv[]){
	if(argc == 2){
        double temp = atof(argv[1]);
        CtoFK(temp);
        FtoCK(temp);
        KtoCF(temp);
	} else if (argc == 3){
        double temp = atof(argv[1]);
        char scale = *argv[2];
        scale = tolower(scale);

        switch(scale){
        case 'c':
            CtoFK(temp);
            break;
        case 'k':
            KtoCF(temp);
            break;
        case 'f':
            FtoCK(temp);
            break;
        }


	}else {printf("Invalid input!");}
	return 0;
}
