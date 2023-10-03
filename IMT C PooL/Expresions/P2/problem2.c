#include<stdio.h>
void main(void){
	int a, b;
	printf("Enter Number1: ");
	scanf("%d", &a);
	printf("Enter Number2: ");
	scanf("%d", &b);
	printf("The Division of Two Numbers is: %d\n", a/ b);
	
	printf("The Reminder of Two Numbers is: %d", a% b);
}