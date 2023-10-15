#include <stdio.h>

int getLowestSetBit(int num) {
    if (num == 0) {
        return -1; // No set bits in the number
    }
    
    int bitPos = 0;
    
    while ((num & 1) == 0) {
        num = num >> 1;
        bitPos++;
    }
    
    return bitPos;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int lowestSetBit = getLowestSetBit(number);
    
    if (lowestSetBit == -1) {
        printf("No set bits in the number.\n");
    } else {
        printf("Lowest order set bit position: %d\n", lowestSetBit);
    }
    
    return 0;
}