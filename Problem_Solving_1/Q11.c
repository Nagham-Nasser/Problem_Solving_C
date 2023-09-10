#include <stdio.h>

short qualityPoints (short avg );

int main(){
/* Write a function qualityPoints that inputs a student’s average and returns :
	4 if a student's average is 90–100, 
	3 if the average is 80–89,
	2 if the average is 70–79, 
	1 if the average is 60–69, 
	0 if the average is lower than 60.
*/
	short x;
	printf("Enter Your Average : ");
	scanf("%d", &x);
	printf ("The result = %d",(qualityPoints(x)));
}
short qualityPoints (short avg ){
	if ((avg <= 100) && (avg >= 90))
		return 4;
	else if ((avg <= 89) && (avg >= 80))
		return 3;
	else if ((avg <= 79) && (avg >= 70))
		return 2;
	else if ((avg <= 69) && (avg >= 60))
		return 1;
	else if (avg < 60)
		return 0;
	else 
		return -1; // means error
}
