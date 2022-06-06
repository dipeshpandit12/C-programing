#include <stdio.h>
int main(){
int k;
char c1[20]="Nijgadh";
char c2[20]=" Nepal";
//char c[]={'a','b','c','d','\0'};
//scanf("%s",&c);
strcat(c1,c2);
k=strlen(c1);
printf(" value is %s\n",c1);
int re = strcmp(c1,c2);
if(re==1)printf("equal");
else printf("not equal\n");
//strcpy(c1,c2);
printf(" value is %s\n",c1);
//printf(" \nvalue is %s",strrev(c1));
strupr(c1);
printf("%s\n",c1);
}
 