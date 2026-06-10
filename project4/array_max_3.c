main() {
    int r, c, i, j, sum = 0;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    
    int a[r][c];
    
    printf("\nEnter array's elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
    }
    
    printf("\nThe sum of all elements of the array: %d\n", sum);
    
}
