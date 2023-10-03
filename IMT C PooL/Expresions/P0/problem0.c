# include<stdio.h>
void main (void){
	int a, b, c, d;
	float ratio;
	printf("Enter Number1: ");
	scanf("%d", &a);
	printf("Enter Number2: ");
	scanf("%d", &b);
	printf("Enter Number3: ");
	scanf("%d", &c);
	printf("Enter Number4: ");
	scanf("%d", &d);
	if (c-d != 0){
		ratio = ( float)( a+ b) / ( float)( c- d);
		printf("Ratio = %f\n", ratio);
	}
}