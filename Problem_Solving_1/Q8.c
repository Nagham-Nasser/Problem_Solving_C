#include <stdio.h>

double celsius (double Tf);
double fahrenheit (double Tc);

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