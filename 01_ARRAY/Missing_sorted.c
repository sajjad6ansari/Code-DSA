#include <stdio.h>

int main()
{
    // missing multiple no from a sequence starting from 1)(sorted array)

    // int arr[8]={1,2,3,4,6,7,8,9};
    // int l=1;
    // int h=9;
    // int n=9;
    // int i ;
    // int  s2=0;
    // int s1=n*(n+1)/2;
    // for(i=0;i<n-1;i++)
    // {
    //     s2=s2+arr[i];
    // }
    // printf("single missing element : %d",s1-s2);




    // missing a single no. from a sequence)(sorted array)

    // int arr[5]={35,36,37,39,40};
    // int l=35;
    // int h=40;
    // int n=5;
    // int diff=l-0;
    // int i;
    // for(i=0;i<n;i++)
    // {
    //     if(diff!=arr[i]-i){
    //         printf(" single missing element : %d",i+diff);
    //         break;//go out of for loop
    //     }
    // }




    // missing multiple no from a sequence)(sorted array)

    // int arr[6]={35,36,38,39,42};
    // int i, l=0;
    // int h=0;
    // int n=6;
    // int diff=arr[0]-0;
    // for(i=0;i<n;i++)
    // {
    //     if(diff!=arr[i]-i)
    //     {
    //         while(diff<arr[i]-i){
    //         printf("missing no : %d \n",diff+i);
    //         diff++;
    //         }
    //     }
    // }



    //printing elements missing from unsorted array of  which contains a sequence
 //basic of hashing is used    
    int arr[8]={1,2,3,4,6,7,8,9};
    int H[10]={0,0,0,0,0,0,0,0,0,0};
    int i;
    for(i=0;i<9;i++)
        H[arr[i]]++;

    for(i=1;i<10;i++)  
    {
        if(H[i]==0)
            printf("%d",i);
    }  

}