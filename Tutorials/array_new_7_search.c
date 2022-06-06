// accept n numbers and arrange sthem in ascending order

#include<stdio.h>
int main() {
    int numbers[100];
    int y,n,num,found;
    printf("how many num you wanna enter \n");
    scanf("%d",&n);
    for(y=0; y<n; y++) {

        scanf("%d",&numbers[y]);

    }
    printf("enter num you wanna search\n");
    scanf("%d",&num);
     for(y=0; y<n; y++) {

        if(numbers[y]==num){
        found=1;}}
        
if(found==1){
printf("number found\n");}
else printf("not found");

}
