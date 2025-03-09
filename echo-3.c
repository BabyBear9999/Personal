#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[20], age[10];
	int dAge;
	printf("give me the name of a dog: \n");
	fgets(name, 20, stdin);
	printf("give me the age of that dog in human years: \n");
	fgets(age, 10, stdin);
	dAge = atoi(age)*7;
	printf("name:%s aged (in dog year): %d",name,dAge);
		
	return EXIT_SUCCESS;
};
