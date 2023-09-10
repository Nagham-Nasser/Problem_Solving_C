#include <stdio.h>
unsigned int GCD (unsigned int x, unsigned int y);
int main(){
	unsigned int x , y;
	printf ("Enter the first number : ");
	scanf ("%i",&x);
	printf ("Enter the secound number : ");
	scanf ("%i",&y);
	printf("The Greatest Common Divisor%i",GCD(x,y));
}
unsigned int GCD (unsigned int x, unsigned int y){
	unsigned int counter , max = 1;
	for (counter = 1; counter <= 10000; counter++){
		if (((x % counter) == 0) && ((y % counter) == 0)){
			max = counter;
		}
	}
	return max;
}