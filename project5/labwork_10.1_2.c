#include <stdio.h>

void checkDivisibility(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The given number is divisible by both 3 & 5.\n");
    } else {
        printf("The given number is not divisible by both 3 & 5.\n");
    }
}

int main() {
    int n;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    checkDivisibility(n);
    
}
