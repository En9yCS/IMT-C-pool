#include <stdio.h>

int getNthBit(unsigned int num, int n) {
    unsigned int mask = 1 << n;
    return (num & mask) ? 1 : 0;
}

int main() {
    unsigned int num;  
	printf("Enter number: ");
    scanf("%d", &num);
    int bitPosition;
	printf("Enter bitPosition: ");
	scanf("%d", &bitPosition);
    int bitValue = getNthBit(num, bitPosition);

    printf("The %dth bit of %u is %d.\n", bitPosition, num, bitValue);

    return 0;
}