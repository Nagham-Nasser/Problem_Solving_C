#include <stdio.h>

short qualityPoints (short avg );

int main(){
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