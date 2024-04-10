//Matrix Operation 
#include <stdio.h> 
void matrix(int row, int col, int arr[row][col]) { 
 printf("Enter the elements of the matrix row wise:\n"); 
 for(int i = 0; i < row; i++) { 
 for (int j = 0; j < col; j++) { 
 scanf("%d", &arr[i][j]); 
 } 
 } 
} 
void mul(int row1, int col1, 
 int row2, int col2,int arr1[row1][col1], int arr2[row2][col2]) { 
 if (col1 != row2) { 
 printf("Matrices cannot be multiplied \n"); 
 return; 
 } 
 int result[row1][col2]; 
 for(int i = 0; i < row1; i++) { 
 for(int j = 0; j < col2; j++) { 
 result[i][j] = 0; 
 for(int k = 0; k < col1; k++) { 
 result[i][j] += arr1[i][k] * arr2[k][j]; 
 } 
 printf("%d ", result[i][j]); 
 } 
 printf("\n"); 
 } 
} 
void fact(int n){ 
 int fact=1; 
 for(int i=1;i<=n;i++) 
 fact*=i; 
 printf("The factorial of %d is %d",n,fact); 
} 
int main() { 
 int row1, col1, row2, col2; 
 printf("Enter the dimensions of the first matrix (row col): "); 
 scanf("%d %d", &row1, &col1); 
 int arr1[row1][col1]; 
 matrix(row1, col1, arr1); 
 printf("\nEnter the dimensions of the second matrix (row col): "); 
 scanf("%d %d", &row2, &col2); 
 int arr2[row2][col2]; 
 matrix(row2, col2, arr2); 
 printf("\nResult of matrix multiplication:\n"); 
 mul(row1, col1, row2, col2, arr1,arr2); 
 int n; 
 printf("\nEnter the number : "); 
 scanf("%d",&n); 
 fact(n); 
 return 0; 
} 
/*
I/O: 
Enter the dimensions of the first matrix (row col): 2 2 
Enter the elements of the matrix row wise: 
1 3 
3 5 
Enter the dimensions of the second matrix (row col): 2 3 
Enter the elements of the matrix row wise: 
1 3 5 
5 3 13 
Result of matrix multiplication: 
16 12 44 
28 24 80 
Enter the number : 5 
The factorial of 5 is 120
+/