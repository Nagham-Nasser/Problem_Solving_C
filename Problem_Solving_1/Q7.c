#include <stdio.h>

void PrintChar (unsigned int x);

int main(){
	unsigned int x;
	printf("Enter tne number : ");
	scanf("%i",&x);
	PrintChar(x);
}

void PrintChar (unsigned int x){
	unsigned int c1 ,c2;
	for(c1 = 0; c1 < x; c1++){
		for(c2 = 0; c2 < x; c2++){
			printf("#");
		}
		printf("\n");
	}
}