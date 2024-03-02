#include<stdio.h>
int power(int x,int n)// this has n number of multiplications (process)
{
    if(n==0)
     return 1;
    return power(x,n-1)*x; 
}

int pow1(int x,int n)/// this has  number of multiplications (process) less than n
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return pow1(x*x,n/2);
    }
    else 
    {
        return x*pow1(x*x,(n-1)/2);
    }
}
int expo(int x,int n)
{   int p=1,i;
    for(i=1;i<=n;i++)
    {
        p=p*x;
    }
    return p;
}


int main()
{
    printf("%d\n",power(2,9));
    printf("%d\n",pow1(2,9));
    printf("%d\n",expo(2,9));


}