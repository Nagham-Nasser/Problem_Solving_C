#include <stdio.h>
#include "string.h"
char *truncateSentence(char * s, int k);

int main(){
	char *s="Hell vog jfo fkjd fjfk";
	char res[3] = truncateSentence(s,3);
}
char *truncateSentence(char * s, int k){
	char res[k];
	int n = k, start =0, end =0,i=0,c=0;
	while (n > 0){
		while(s[end] != ' '){
			end++;
		}
		for (i = start; i< end; i++){
			res[c] = strcat(res[c],s[i]);
		}
		c++;
		start = end + 1;
		end++;
		n--;
	}
	return res;
	
}