#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = n; i > 0; i--) {
        result += i; 
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);
    
    return 0;
}