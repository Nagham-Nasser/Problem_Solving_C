#include<stdio.h>

int main(){
	/* Calculating the Sum of Even Integers) Write a 
	program that calculates and prints the sum of 	
	the even integers from 2 to 30.	*/
	unsigned char x, sum=0;
	for (x = 2; x <= 30; x++){
		if ((x % 2) == 0)
			sum += x;
	}
	printf("The result = %d", sum);
	
}