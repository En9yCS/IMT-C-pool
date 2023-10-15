#include <stdio.h>

int findHighestOrderBit(int num) {
    int position = -1;
    
    while (num != 0) {
        num = num >> 1;
        position++;
    }
    
    return position;
}

int main() {
    int num, position;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    position = findHighestOrderBit(num);
    
    if (position >= 0)
        printf("The highest order bit is at position %d\n", position);
    else
        printf("No set bits found in the number.\n");
    
    return 0;
}