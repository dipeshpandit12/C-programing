#include<stdio.h>
int main() {
    int marks[]= {0,56,78,68,78};


    marks[1]=5;
    scanf("%d",&marks[1]);

    printf("%d",marks[1]);
}