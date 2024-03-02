#include<stdio.h>

int fun(int n)
{ 
    //by me
    // if(n>0)
    // return fun(n-1)+n;
    // else 
    // return 0;

    //by sir
    if(n==0)
    return 0;
    else return fun(n-1)+n;
}
int main()
{
    printf("%d",fun(100));
}