
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc == 2)
	{
		double temp = atof(argv[1]);
		printf("%.2f %s", temp, " C:\n");
		printf("%.2f %s", temp + 273.15, " K\n");
		printf("%.2f %s", 9 * (temp + 32) / 5, " F\n\n");

		printf("%.2f %s", temp, " K:\n");
		printf("%.2f %s", temp - 273.15, " C\n");
		printf("%.2f %s", 9 * (temp - 273.15) / 5 + 32, " F\n\n");

		printf("%.2f %s", temp, " F:\n");
		printf("%.2f %s", 5 * (temp - 32) / 9, " C\n");
		printf("%.2f %s", 5 * (temp - 32) / 9 + 273.15, " K\n\n");

	}
	else if(argc == 3)
	{
		double temp = atof(argv[1]);
		char scale = *argv[2];
		switch (scale)
		{
		case 'C':
			printf("%.2f %s", temp, " C:\n");
			printf("%.2f %s", temp + 273.15, " K\n");
			printf("%.2f %s", 9 * (temp + 32) / 5, "F\n\n");
			break;
		case 'K':
			printf("%.2f %s", temp, " K:\n");
			printf("%.2f %s", temp - 273.15, " C\n");
			printf("%.2f %s", 9 * (temp - 273.15) / 5 + 32, " F\n\n");
			break;
		case 'F':
			printf("%.2f %s", temp, " F:\n");
			printf("%.2f %s", 5 * (temp - 32) / 9, " C\n");
			printf("%.2f %s", 5 * (temp - 32) / 9 + 273.15, " K\n");
			break;
		}
	}else {
		printf("Invalid Input!");
	}
	
	return 0;
}

