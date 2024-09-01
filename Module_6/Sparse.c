#include<stdio.h>

int main(){
    int rows, cols, i, j, zeroCout = 0;
    int matrix[100][100];
    printf("Enter the number of rows :");
    scanf("%d", &rows);
    printf("Enter the number of cols :");
    scanf("%d", &cols);
    printf("Enter the elements of the Matrix :");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j]==0){
                zeroCout++;
            }
        }
    }
    int totalElements = rows * cols;
    if(zeroCout>totalElements / 2){
        printf("Matrix is Sparse");
    }else{
        printf("Matrix is not Sparse");
    }
    return 0;
}