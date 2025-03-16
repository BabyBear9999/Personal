#include <stdio.h>
#include <stdlib.h>

/*leap year happens on multiples of 4, 
 * except years divisible byt 100 but not 400 */


int main(){
	char year[4], curr;
	int yr, i = 0;
	
	printf("enter a year: ");	
	while ((curr = getchar()) != '\n'){
		year[i] = curr;
		i ++;
		//curr = getchar();
	}
	yr = atoi(year);
	/*isleap = (yr % 4 == 0 &&!(yr % 400 != 0 &&   ))*/
	if (yr % 4 == 0){
		//printf("hi");
		if (yr % 100 == 0 && yr % 400 != 0) printf("%d is not a leap year\n", yr);
		else printf("%d is a leap year\n", yr);	
	
	}
	else printf("%d is not a leap year \n", yr);
	
	return EXIT_SUCCESS;
}
