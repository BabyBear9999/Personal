#include <stdio.h>
int main(){
	printf("hello world\n");
	int a,b; 
	a = 1;
	b = 2;
	for (int i = 0; i < 4; i++){
		printf("a:%d\tb:%d\n", a,b);
		a += i;
		b += i;
	}

}
