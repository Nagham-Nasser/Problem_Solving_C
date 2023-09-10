#include <stdio.h>
/* Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive) */

int countOdds(int low, int high);

int main(){
	int x = countOdds(1,10);
	printf("%d",x);
}
int countOdds(int low, int high){
	int c=0;
	for(int i = low;i<=high;i++){
		if((i % 2) == 1){
			c++;
		}
		else{}
	}
	return c;
}
