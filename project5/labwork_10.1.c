#include <stdio.h>
findCube(int num) {
    return num * num * num;
}

int main() {
    int n, result;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    result = findCube(n);
    
    printf("Cube is: %d\n", result);
    
}
