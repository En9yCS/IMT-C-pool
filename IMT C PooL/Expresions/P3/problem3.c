#include<stdio.h>
void main(void){
	int num1, num2, Temp;
	printf("Enter The First Number: ");
	scanf("%d", &num1);
	printf("Enter The Second Number: ");
	scanf("%d", &num2);
	
	printf("The Frist Number %d\n", num1);
	printf("The Second Number %d\n", num2);
	
	Temp = num1;
	num1 = num2;
	num2 = Temp;
	
	printf("\n-------------After Swaping-------------\n");
	printf("The Frist Number %d\n", num1);
	printf("The Second Number %d\n", num2);
	
	
}