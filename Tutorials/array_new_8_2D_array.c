// storing static values in an array and displaying them
#include <conio.h>
#include<stdio.h>
int main(){
int y,z;
int mat[2][2]={12,34,23,72};
printf("elements in matrix form are\n");
for(y=0;y<2;y++){
for(z=0;z<2;z++){
printf("%d\t",mat[y][z]);
}
printf("\n");
}


}
