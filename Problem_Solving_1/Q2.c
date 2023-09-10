#include<stdio.h>

int main(){
	/* (Calculating the Product of Odd Integers) 
	Write a program that calculates and prints the 
	product of the odd integers from 1 to 15 */ 
	unsigned char x;
	unsigned int prod = 1;
	for(x = 1; x <= 15; x++){
		if ((x % 2) == 1)
			prod *= x;
	}
	printf("The product = %d", prod);
	
}