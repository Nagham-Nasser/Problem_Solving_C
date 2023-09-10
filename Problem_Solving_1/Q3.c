#include<stdio.h>

/* Print these patterens
*		**********	********** 	         *
**		*********	 *********		**
***		********	  ********	       ***
****		*******		   *******	      ****
*****		******		    ******	     *****
******		*****		     *****	    ******
*******		****		      ****	   *******
********	***		       ***	  ********
*********	**			**	 *********
**********	*			 *	**********
*/


int main(){
	unsigned char x,y,z;
	for (x = 1; x <= 10; x++){
		for (y = 1; y <= x; y++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	for (x = 1; x <= 10; x++){
		for (y = 10; y >= x; y--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	for (x = 1; x <= 10; x++){
		for (z = 1; z < x; z++){
			printf(" ");
		}
		for (y = 10; y >= x; y--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	for (x = 1; x <= 10; x++){
		for (z = 10; z > x; z--){
			printf(" ");
		}
		for (y = 1; y <= x; y++){
			printf("*");
		}
		printf("\n");
	}
}
