#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};
int bs_loop(struct array arr,int key)
{  
    int l,h;
    l=0;
    h=arr.length;
    int mid=(l+h)/2;
  while(l<=h)
  {
    if(arr.A[mid]==key)
    return mid;
    else if(arr.A[mid]>key)
     h=mid-1;
    else
     l=mid+1; 
  }
  return -1;
}

int bs_recursion(struct array arr,int l,int h,int key)
{
    
   
    int mid=(l+h)/2;
  while(l<=h)
  {
    if(arr.A[mid]==key)
    return mid;
    else if(arr.A[mid]>key)
    return bs_recursion( arr, l, mid-1,key);
    else
    return bs_recursion( arr,mid+1,h,key);
      
  }
  return -1;
}

int main()
{
    struct array arr={{1,3,5,6,9,45,78,98,456,567},10,10};
   printf("%d\n",bs_loop(arr,567));
   printf("%d\n",bs_recursion(arr,0,9,4)); 
   return 0;
} 