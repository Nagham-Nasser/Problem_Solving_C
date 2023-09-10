#include<stdio.h>

/* An online retailer sells five different products whose retail prices are
	Product_ID 		Price
 	 1			2.98
   	 2			4.5
     	 3			9.98
       	 4			4.49
	 5			6.87
  */

int main(){
	/* (Calculating Sales) An online retailer sells five 
	different products whose retail prices are 
	shown in the following table */
	unsigned char counter;
	unsigned int id, quan;
	float retail = 1.0, total = 0.0;
	for(counter = 0; counter < 5; counter++){
		printf("Please Enter The Product Number : ");
		scanf("%d",&id);
		printf("Please Enter The Quantity sold for one day : ");
		scanf("%d",&quan);
		retail = 1.0;
		switch (id){
			case 1:
				retail = quan * 2.98;
				break;
			case 2:
				retail = quan * 4.50;
				break;
			case 3:
				retail = quan * 9.98;
				break;
			case 4:
				retail = quan * 4.45;
				break;
			case 5:
				retail = quan * 6.78;
				break;
			default:
				printf("Enter a valid id");
		}
		printf ("The retail price for %d for one week = %f\n",id, (7 * retail));
		total += (7 * retail);
	}
	printf("The total retail price for one week = %f",total);
}
