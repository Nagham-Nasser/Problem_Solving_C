#include <stdio.h>

/* Write a C function that returns the count of the longest consecutive occurrence of a given number in an array . */


int FindLongest(int size, int * arr, int number); 

int main(){
	int arr[13] =  {1,2,2,3,3,3,3,4,4,4,3,3,1};
	int num = 3;
	int x = FindLongest(13,arr,num);
	printf("%d",x);
}
int FindLongest(int size, int * arr, int number){
	int temp = 0;
	int longest = 0;
	for(int i = 0; i < size; i++){
		if (number == arr[i]){
			temp++;
		}
		else{
			if(longest < temp){
				longest = temp;
			}
			temp=0;
		}
	}
	return longest;
}
