#include <stdio.h>

#define PRINTARRAY(array,n) \
do {\
	unsigned int counter;\
	for (counter = 0;counter < n;counter++){\
		printf("%d\n",array[counter]);\
	}\
	}while(0)\


int main(){
	int arr[5]={10,20,30,40,50};
	PRINTARRAY(arr,5);
}