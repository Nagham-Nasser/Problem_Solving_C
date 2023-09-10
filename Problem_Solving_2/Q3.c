#include <stdio.h>
int romanToInt ( char * s);


int main(){
	unsigned int z= romanToInt("MCMXCIV\0");
	printf("%d",z);
}
int romanToInt ( char * s){	
	unsigned int i = 1, res = 0;
	unsigned char *prev = &s[0];
	unsigned char *current = &s[i];
	while (*prev !='\0'){
		if (('I' == *prev) && ('X' == *current)){
			res += 9;
			prev = current;
			i++;
			current = &s[i];
		}
		else if (('I' == *prev) && ('V' == *current)){
			res += 4;
			prev = current;
			i++;
			current = &s[i];
		}
		else if (('X' == *prev) && ('L' == *current)){
			res += 40;
			prev = current;
			i++;
			current = &s[i];
		}
		else if (('X' == *prev) && ('C' == *current)){
			res += 90;
			prev = current;
			i++;
			current = &s[i];
		}
		else if (('C' == *prev) && ('M' == *current)){
			res += 900;
			prev = current;
			i++;
			current = &s[i];
		}
		else if (('C' == *prev) && ('D' == *current)){
			res += 400;
			prev = current;
			i++;
			current = &s[i];
		}
		else{
			switch (*prev){
				case 'I':
					res += 1;
					break;
				case 'V':
					res += 5;
					break;
				case 'X':
					res += 10;
					break;
				case 'L':
					res += 50;
					break;
				case 'C':
					res += 100;
					break;
				case 'D':
					res += 500;
					break;
				case 'M':
					res += 1000;
					break;
				default :
					//printf("Error\n");
					break;
			}
			
		}
		prev = current;
		i++;
		current = &s[i];
	}
	return res;
}