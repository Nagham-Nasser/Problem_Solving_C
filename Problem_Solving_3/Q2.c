#include <stdio.h>
/* Write a C function that counts the number of 1`s in an unsigned 32-bit number. */

int countOnes(unsigned int n);

int main(){
	int x = countOnes(2314207523);
	printf("%d",x);
}
int countOnes(unsigned int n){
	int counter = 0;
	while (n != 0){
		if(1 == n%2){
			counter++;
		}
		else{}
		n /=2;
	}
	return counter;
}
