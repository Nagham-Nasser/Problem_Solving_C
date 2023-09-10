#include <stdio.h>
typedef enum {
	false = 0,
	true 
}bool;
bool checkZeroOnes(char * s);

int main(){
	char s[100];
	printf ("Enter the number : ");
	scanf("%s",s);
	bool z = checkZeroOnes (s);
	printf("%d",z);
}
bool checkZeroOnes(char * s){
	int ones = 0;
	int zeros = 0;
	int l_ones = 0;
	int l_zeros = 0;
	int i = 0;
	char ptr = s[i];
	while ('\0' != ptr){
		if('0' == ptr){
			zeros ++;
			if (l_ones < ones){
				l_ones = ones;
				ones = 0;
			}
		}
		else if('1' == ptr){
			ones ++;
			if (l_zeros < zeros){
				l_zeros = zeros;
				zeros = 0;
			}
		}
		else{}
		
		i++;
		ptr = s[i];
	}
	if (l_ones < ones){
		l_ones = ones;
	}
	
	if (l_zeros < zeros){
		l_zeros = zeros;
	}
	
	if (l_ones > l_zeros){
		return true;
	}
	return false;
}