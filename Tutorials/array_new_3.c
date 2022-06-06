//program to find average of n numbers
#include <stdio.h>
int main() {

    int numbers[100];
    int n,y,av,sum;
    printf("how many nbers you wanna store\n");
    scanf("%d",&n);

    for(y=0; y<n; y++) {

        scanf("%d",&numbers[y]);
        sum=sum+numbers[y];

    }
    av=sum/n;
    printf("average is %d \n",av);


}