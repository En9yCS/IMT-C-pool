#include <stdio.h>

int main() {
    unsigned int num;  
    unsigned int msb = 1 << ((sizeof(unsigned int) * 8) - 1);
	printf("Enter number: ");
    scanf("%d", &num);

    if (num & msb) {
        printf("The MSB of %u is 1.\n", num);
    } else {
        printf("The MSB of %u is 0.\n", num);
    }

    return 0;
}