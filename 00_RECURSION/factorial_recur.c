#include<stdio.h>

int fun(int n)
{ 
    if(n==0)//o!=1
    return 1;
    else return fun(n-1)*n;
}

int fact(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
    {
        p*=i;
    }

    return p;


}
int main()
{
    printf("%d\n",fun(4));
    printf("%d",fact(4));

}