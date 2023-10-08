#include <stdio.h>
void main(void){
	float Length, Width, Perimeter;
	printf("Plz Enter the Length: ");
	scanf("%f", &Length);
	printf("Plz Enter the Width: ");
	scanf("%f", &Width);
	Perimeter = 2 * (Length + Width);
	printf("Perimeter of the Rectangle = %.2fcm", Perimeter);
}