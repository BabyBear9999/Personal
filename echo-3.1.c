#include <stdio.h>
#include <stdlib.h>

int main(){
	char curr, name[64], age[10];
	int i, dAge;
	i = 0;
	curr = getchar();	
		//get line
	while (curr != '\n'){
		name[i] = curr;
		curr = getchar();
		i += 1;	
	}
	curr = getchar();
	i = 0;
	while (curr != '\n'){
		age[i] = curr;
		curr = getchar();
		i += 1;
	}
	dAge = atoi(age)*7;
	
	printf("name:%.10s\tname:%d", name, dAge);
}
