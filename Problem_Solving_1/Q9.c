#include <stdio.h>
/*  Write a function perfect that determines if parameter number is a perfect number. */

int PerfectNum(unsigned int x);
int main(){
	unsigned int counter = 0,res,counter2,result=0;
	for (counter = 0; counter <= 100; counter ++){
		res = PerfectNum(counter);
		if (res == 1){
			printf ("\n%i is a perfect number \t\t Its factors are ",counter);
			for(counter2 = 1; counter2 < counter; counter2 ++){
				if ((counter % counter2) == 0){
					result += counter2 ; 
					printf ("%i\t",counter2);
					if (result == counter){
						break;
					}
				}
			}
		}
	}
}
int PerfectNum(unsigned int x){
	unsigned int counter,result = 0;
	int flag =0;
	for(counter = 1; counter < x; counter ++){
		if ((x % counter) == 0){
			result += counter ; 
			if (result == x){
				flag = 1;
				break;
			}
		}
	}
	return flag;
}
