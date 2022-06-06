// storing static values in an array and displaying them
#include <conio.h>
#include<stdio.h>
int main() {
    int y,z,row,col;
    
    

    printf("enter no.of rows\t");
    scanf("%d",&row);
    printf("enter no.of col\t");
    scanf("%d",&col);
    printf("enter the element\n");

    int mat1[row][col];
    int mat2[row][col];
    int sum[row][col];
    printf("enter element for first matrix \n");
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            scanf("%d",&mat1[y][z]);
        }
    }
    printf("enter element for second matrix \n");
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            scanf("%d",&mat2[y][z]);
        }
    }

    printf("elements in first matrix form are\n");
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            printf("%d\t",mat1[y][z]);
        }
        printf("\n");

    }
    printf("elements in second matrix form are\n");
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            printf("%d\t",mat2[y][z]);
        }
        printf("\n");

    }
    
    // sum of marix
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            sum[y][z]=mat1[y][z] + mat2[y][z];
        }
        

    }
printf("sum of two matrixare\n");
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            printf("%d\t",sum[y][z]);
        }
        printf("\n");

    }
}