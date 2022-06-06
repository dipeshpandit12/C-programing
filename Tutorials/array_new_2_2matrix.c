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
    
    int mat[row][col];
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            scanf("%d",&mat[y][z]);
        }
    }

    printf("elements in matrix form are\n");
    for(y=0; y<row; y++) {
        for(z=0; z<col; z++) {
            printf("%d\t",mat[y][z]);
        }
        printf("\n");

    }
}