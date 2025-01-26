#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) // Base case: 0! = 1! = 1
        return 1;
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    return 0;
}