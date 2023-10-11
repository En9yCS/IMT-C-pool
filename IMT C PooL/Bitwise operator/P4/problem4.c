#include <stdio.h>

int clearNthBit(int num, int n) {
    int mask = ~(1 << n);
    return num & mask;
}

int main() {
    int num, n, result;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    printf("Enter the position of the bit to clear (0-indexed): ");
    scanf("%d", &n);
    
    result = clearNthBit(num, n);
    
    printf("Number after clearing the %dth bit: %d\n", n, result);
    
    return 0;
}
