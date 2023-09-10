#include <stdio.h>
#include <stdlib.h>
/* Write a program that defines and uses macro MINIMUM3 to determine the smallest of three numeric values. */

#define MINIMUM3(n1,n2,n3) do{\
                    if((n1<n2)&&(n1<n3)){\
                        printf("min is: %d",n1);\
                    }else if((n2<n1)&&(n2<n3)){\
                        printf("min is: %d",n2);\
                    }else{\
                        printf("min is: %d",n3);\
                    }\
                    }while(0)

int main()
{
	int x, y, z;
	printf("Enter the First Number : ");
	scanf("%d",&x);
	printf("Enter the Second Number : ");
	scanf("%d",&y);
	printf("Enter the Third Number : ");
	scanf("%d",&z);
    MINIMUM3(x,y,z);

}

