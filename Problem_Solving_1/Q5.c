#include <stdio.h>

int main(){
	/* Write a program that
prints a table of the binary, octal and 
hexadecimal equivalents of the decimal 
numbers in the range 1 through 255*/
	unsigned int binary=0 ,hexa=0 ,octal=0 ,i=1 ,x=1,temp;
	printf("Binary \t\tOctal\t\tHexa\n");
	for(x = 1; x<=255; x++){
		temp = x;
		i=1;
		binary=0;
		while (temp != 0){
			binary += ((temp % 2)* i);			
			temp = temp/ 2;
			i*=10;
		}
		temp = x;
		i=1;
		octal=0;
		while (temp != 0){
			octal += ((temp % 8)* i);			
			temp = temp/ 8;
			i*=10;
		}
		printf ("%d\t\t%d\t\t%x\n",binary,octal,x);
		
	}


	
}