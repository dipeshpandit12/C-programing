// enter num and find smallest and largest element

#include<stdio.h>
int main(){
int numbers[100];
int y,n,small,large;
printf("how many num you wanna enter \n");
scanf("%d",&n);
for(y=0;y<n;y++){

scanf("%d",&numbers[y]);

}
for(y=0;y<n;y++){

if(numbers[y]>=numbers[0])
large=numbers[y];
if(numbers[y]<=numbers[0])
small=numbers[y];

}
printf("largest num is %d\n",large);
printf("smallest num is %d\n",small);

}