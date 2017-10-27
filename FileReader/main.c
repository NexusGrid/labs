#include <stdio.h>
#include <stdlib.h>

int main(int argv,char* argc[]){
    FILE* pFile;
    char* name;
    char line[256];
    int i = 0;

    name = argc[1];
    pFile = fopen(name, "r");
    while ((line[i] = fgetc (pFile)) != EOF) {
		if (line[i] == '\n') {
			line[i] = '\0';
			printf("%s\n",line);
			i = 0;
		}
		else i++;
	}
	line[i] = '\0';
	printf("%s\n",line);

    return 0;

}
