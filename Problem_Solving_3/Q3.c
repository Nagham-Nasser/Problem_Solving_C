#include <stdio.h>
#include <string.h>
/* The website considers a password to be strong if it satisfies the following criteria:
• Its length is at least 6 digits. 
• It contains at least one digit. 
• It contains at least one lowercase English character. 
• It contains at least one uppercase English character. 
• It contains at least one special character. The special characters are: !@#$%^&*()-+
 Given the string, can you find the minimum number of characters she must add to make her password strong?
	*/

typedef enum{
	false = 0,
	true
}bool; 

int minimumNumber(int n, char* password);
bool search (char x, char *y);

int main(){
	int x =minimumNumber(3,"Ab1");
	printf("%d",x);
}
int minimumNumber(int n, char* password){

	char *numbers = "0123456789";
	char *lower_case = "abcdefghijklmnopqrstuvwxyz";
	char *upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
	char *special_characters = "!@#$%^&*()-+";
	bool oneNum = false;
    bool oneLower = false;
    bool oneUpper = false;
    bool oneSpecial = false;
    int res=0;
	while('\0' != *password){
		oneNum |= search(*password , numbers );
		oneLower |= search(*password,lower_case);
		oneUpper |= search(*password,upper_case);
		oneSpecial |= search(*password,special_characters);
		password++;
	}
	 if(0 == oneNum){
        res+=1;
    }
    if(0 == oneLower){
        res+=1;
    }
    if(0 == oneUpper){
        res+=1;
    }
    if(0 == oneSpecial){
        res+=1;
    }
	res +=(6 - (res + n));
	return res;
}
bool search (char x, char *y){
	int len = strlen(y);
	int i;
	for(i = 0;i < len; i++){
		if (x == y[i]){
			return true;
		}
	}
	return false;
}
