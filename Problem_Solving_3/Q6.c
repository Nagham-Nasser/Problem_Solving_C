#include <stdio.h>

/* There is a function that returns:
• 1 if x is positive.
• -1 if x is negative.
• 0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums. Find the sign of the product 
*/

int arraySign(char* nums, int numsSize);


int main(){
	char n[5]={1,2,3,4,5};
	int x = arraySign(n,5);
	printf("%d",x);
}
int arraySign(char* nums, int numsSize){
	signed int res = 1;
	int i = 0;
	for(i = 0; i<numsSize;i++){
		res *=(signed int) nums[i];
	}
	if (res < 0){
		return -1;
	}
	else if (res > 0){
		return 1;
	}
	else{
		return 0;
	}
}
