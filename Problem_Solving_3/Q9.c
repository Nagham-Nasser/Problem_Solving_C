#include <stdio.h>
#include <string.h>
#include <math.h>
int hexToDecimal(char * hex);

int main(){
	int x =hexToDecimal("1A");
	printf("%d",x);
}
int hexToDecimal(char * hex){
	int res = 0,C=(strlen(hex)-1);
	while('\0' != *hex){
		switch (*hex){
			case '0' :
				res +=0;
				break;
			case '1' :
				res +=(pow(16,C));
				break;
			case '2' :
				res +=(2*(pow(16,C)));
				break;
			case '3' :
				res +=(3*(pow(16,C)));
				break;
			case '4' :
				res +=(4*(pow(16,C)));
				break;
			case '5' :
				res +=(5*(pow(16,C)));
				break;
			case '6' :
				res +=(6*(pow(16,C)));
				break;
			case '7' :
				res +=(7*(pow(16,C)));
				break;
			case '8' :
				res +=(8*(pow(16,C)));
				break;
			case '9' :
				res +=(9*(pow(16,C)));
				break;
			case 'A' :
				res +=(10*(pow(16,C)));
				break;
			case 'B' :
				res +=(11*(pow(16,C)));
				break;
			case 'C' :
				res +=(12*(pow(16,C)));
				break;
			case 'D' :
				res +=(13*(pow(16,C)));
				break;
			case 'E' :
				res +=(14*(pow(16,C)));
				break;
			case 'F' :
				res +=(15*(pow(16,C)));
				break;
			default:
				break;
		}
		C--;
		hex++;
	}
	return res;
}
