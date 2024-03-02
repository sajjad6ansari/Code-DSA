#include<stdio.h>

int C(int n, int r)
{
    if(r==0||n==r)
       return 1;
    return C(n-1,r-1)+C(n-1,r);   
}

int fact(int n)
{
    if(n==1||n==0)
    return 1;
    return fact(n-1)*n;
}

int c(int n,int r)
{
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);

}
int main()
{
   printf("%d\n",C(10,2));
   printf("%d\n",c(10,2));
}