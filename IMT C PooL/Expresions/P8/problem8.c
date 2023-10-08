# include <stdio.h>

void main (void){
	float sub1, sub2, sub3, sub4, sub5, Total, Avr, Percentage;
	printf("Enter Marks of Sub1: ");
	scanf("%f", &sub1);
	printf("Enter Marks of Sub2: ");
	scanf("%f", &sub2);
	printf("Enter Marks of Sub3: ");
	scanf("%f", &sub3);
	printf("Enter Marks of Sub4: ");
	scanf("%f", &sub4);
	printf("Enter Marks of Sub5: ");
	scanf("%f", &sub5);
	
	Total = sub1 + sub2 + sub3 + sub4 + sub5;
	printf("Total of all Subjects = %.2f\n", Total);
	
	Avr = Total / 5.0;
	printf("Avrage of all Subjects = %.2f\n", Avr);
	
	Percentage = (Total / 500.0) * 100;
	printf("Percentage of all Subjects = %.2f\n", Percentage);
}