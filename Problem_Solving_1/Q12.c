#include <stdio.h>

int maximumNumOfConsecutiveOnes (int *arr, int size);

int main(){
	int arr [17]= {1,1,1,0,1,0,1,1,1,1,0,1,1,1,1,1};
	int x = maximumNumOfConsecutiveOnes(arr,17);
	printf("%d",x);
}
int maximumNumOfConsecutiveOnes (int *arr, int size){
	int temp = 0;
	int longest = 0;
	for(int i = 0;i < size; i++){
		if(1 == arr[i]){
			temp++;
		}
		else{
			if(longest < temp){
				longest = temp;
			}
			temp = 0;
		}
	}
	return longest;
}