#include <stdio.h>
#include "string.h"
/* Given a sentence, print each word of the sentence in a new line. */


void SentenceToWords (char *s);
int main(){
	char *s="Hellow Everyone I am Nagham";
	SentenceToWords(s);
}
void SentenceToWords (char *s){
	while('\0' != *s){
		if (' '==*s){
			printf("\n");
		}
		else{
			printf("%c",*s);
		}
		s++;
	}
}
