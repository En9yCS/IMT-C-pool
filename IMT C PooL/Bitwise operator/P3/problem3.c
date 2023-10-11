#include <stdio.h>

int setNthBit(int num, int n) {
    int mask = 1 << n;
    return num | mask;
}

int main() {
    int num, n, result;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    printf("Enter the position of the bit to set (0-indexed): ");
    scanf("%d", &n);
    
    result = setNthBit(num, n);
    
    printf("Number after setting the %dth bit: %d\n", n, result);
    
    return 0;
}
