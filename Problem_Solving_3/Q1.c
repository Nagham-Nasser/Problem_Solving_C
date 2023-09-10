#include <stdio.h>
#include <stdlib.h>

void swapVariables (int* first, int* second);

int main()
{
	int x,y;
	printf("Enter The First Number : ");
	scanf("%d",&x);
	printf("Enter The Secound Number : ");
	scanf("%d",&y);
	swapVariables(&x,&y);
	printf("*************************\n");
	printf("The First Number : %d\n",x);
	printf("The Secound Number : %d\n",y);
	
}
void swapVariables (int* first, int* second){
	*first = *first + *second;
	*second = *first - *second;
	*first = *first - *second;
}
