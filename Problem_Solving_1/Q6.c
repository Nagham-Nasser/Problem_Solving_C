#include <stdio.h>
/*  Write a function multiple that determines for a pair of integers whether the second integer is a multiple of the first.
The function should take two integer arguments and return 1 (true) if the second is a multiple of the first, and 0 (false) otherwise */

char multiple (unsigned int x, unsigned int y);

int main(){
	printf("%c",multiple(5,25));
	
}
char multiple (unsigned int x, unsigned int y){
	if ((y % x) == 0)
		return '1';
	return '0';
}
