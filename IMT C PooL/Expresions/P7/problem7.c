#include <stdio.h>
#include<math.h> //using pow() function
void main(void){
	double Base, Exponant, Power;
	printf("Enter Base: ");
	scanf("%lf", &Base);
	
	//'%lf' is used in the 'scanf' function to read a 'double'
	
	printf("Enter Exponant: ");
	scanf("%lf", &Exponant);
	
	Power = pow(Base, Exponant);
	
	//'%lf' is used in the 'printf' function to print the value of the variable as a 'double'
	
	printf("%.2lf ^ %.2lf = %.2lf", Base, Exponant, Power);
	
}