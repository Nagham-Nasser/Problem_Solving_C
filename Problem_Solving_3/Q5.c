#include <stdio.h>
#include "string.h"
typedef enum{
	false = 0,
	true
}bool;

bool isPowerOfTwo(int n);

int main(){
	int num;
	printf ("Enter the Number : ");
	scanf("%d",&num);
	bool res = isPowerOfTwo(num); 
	if(true == res){
		printf ("The result is true \n");
	}
	else{
		printf ("The result is false \n");
	}
}
bool isPowerOfTwo(int n){
	int rem = 0;
	while (n > 1){
		rem = n % 2;
		if (1 == rem){
			return false;
		}
		n /= 2;
	}
	return true;
}