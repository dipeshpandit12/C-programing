// accept n numbers and arrange sthem in ascending order

#include<stdio.h>
int main() {
    int numbers[100];
    int y,n,z,a;
    printf("how many num you wanna enter \n");
    scanf("%d",&n);
    for(y=0; y<n; y++) {

        scanf("%d",&numbers[y]);

    }
    for(y=0; y<n; y++) {
        for(z=y+1; z<n; z++) {
            if(numbers[y]>numbers[z]) {
            a=numbers[y];
            numbers[y]=numbers[z];
            numbers[z]=a;
            }
        }
    }
     for(y=0; y<n; y++) {

        printf("%d\n",numbers[y]);}


}
