#include<stdio.h>
//loop se
int fib1(int n)
{
  if(n<=1)
    return n;
  int a=0,b=1,s=0,i;
  for(i=2;i<=n;i++)
{
    s=a+b;
    a=b;
    b=s;
} 
return s;   
}

static int F[10];
//excessive recursion
int fib2(int n)
{
    if(n<=1)
        return n;
    return fib2(n-2)+fib2(n-1);    
}
//memoization
int fib3(int n)
{
   if(n<=1)
   {
     F[n]=n;
     return n;
   }
       
   else  
   {
    if(F[n-1]==-1)
    {
        F[n-1]=fib3(n-1);
    }
    if(F[n-2]==-1)
    {
        F[n-2]=fib3(n-2);
    }
    F[n]=F[n-2]+F[n-1];
    return F[n-2]+F[n-1];
   }      
}

int main()
{
    
    
    int i;
    for(i=0;i<=10;i++)
    {
        F[i]=-1;
    }
    printf("%d\n",fib1(10));
    printf("%d\n",fib2(10));
    printf("%d\n",fib3(10));

}