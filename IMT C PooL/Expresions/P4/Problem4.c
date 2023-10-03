#include<stdio.h>
void main(void){
	int num1, num2, Temp;
	printf("Enter The First Number: ");
	scanf("%d", &num1);
	printf("Enter The Second Number: ");
	scanf("%d", &num2);
	
	printf("The Frist Number %d\n", num1);
	printf("The Second Number %d\n", num2);
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("\n-------------Swaping without Third Number-------------\n");
	printf("The Frist Number %d\n", num1);
	printf("The Second Number %d\n", num2);	
	
}
	