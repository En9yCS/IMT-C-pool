#include <stdio.h>

int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int n1, n2;
    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    int maximum = findMax(n1, n2);
    
    printf("The maximum number is: %d\n", maximum);
    
    return 0;
}