#include<stdio.h>

int main()
{
char a[]="Painter";
char b[]="Painting";
int i=0;
int j=0;
for(;a[i]!='\0' && b[i]!='\0';i++)
 {
    if(a[i]!=b[i])
    {
        break;
    }
 }
 if(a[i]==b[i]){
 printf("equal");
 }else if(a[i]>b[i]){
 printf("grater");
 }else{
 printf("smaller");
 }

}