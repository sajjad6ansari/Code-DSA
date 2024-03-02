#include<stdio.h>

double e1(int x,int n)
{
    static double s=1;
    int i;
    for(;i<n;i++)
    {
        s=1+(x/n)*s;
    }
}

double e2(int x,int n)
{
    static double s=1;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e2(x,n-1);    
    
}
int main()
{
    printf("%lf\n",e1(1,10));
    printf("%lf",e2(1,10));

    return 0;

}