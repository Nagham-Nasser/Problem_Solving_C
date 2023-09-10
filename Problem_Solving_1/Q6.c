#include <stdio.h>
char multiple (unsigned int x, unsigned int y);

int main(){
	printf("%c",multiple(5,25));
	
}
char multiple (unsigned int x, unsigned int y){
	if ((y % x) == 0)
		return '1';
	return '0';
}