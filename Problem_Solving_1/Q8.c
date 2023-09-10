#include <stdio.h>
/*  Implement the following integer functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all 
Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a neat tabular format that minimizes the number of lines of output while remaining readable. double celsius (double Tf);
double fahrenheit (double Tc); */

int main(){
	int counter = 0;
	double tc=0, tf=32;
	printf("Celsius->Fahrenheit\t\t\t Fahrenheit->Celsius\n");
	for (counter =0; counter < 100; counter ++ ){
		printf ("%lf   -> %lf\t\t\t %lf -> %lf\n",tc,fahrenheit(tc),tf,celsius(tf));
		tc++;
		tf++;
	}
	
}
double celsius (double Tf){
	return ((Tf - 32.0) * 5 / 9.0);
}
double fahrenheit (double Tc){
	return((Tc * 9) / 5.0 + 32.0);
	}
