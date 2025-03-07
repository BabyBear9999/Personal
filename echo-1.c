#include <stdio.h>
#include <stdlib.h>

int main(){
	char string[64];
	char * check;
	//printf("hi");
	check = fgets(string, 64, stdin);
	while(check != NULL){
		printf("%s", string);
		check = fgets(string, 64, stdin);
	}
	return EXIT_SUCCESS;
}
