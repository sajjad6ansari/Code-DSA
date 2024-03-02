#include<stdio.h>
int main()
{


//for sorted array         
    // int a[10]={1,3,4,5,6,8,9,10,12,14};
    // int i=0,j=9;
    // int k=10;//pair sum
    // while(i<j)
    // {
    //     if(a[i]+a[j]==k)
    //     {
    //         printf("%d %d\n",a[i],a[j]);
    //             i++;
    //             j--;
                
    //     }
    //     else if(a[i]+a[j]<k)
    //         i++;
    //     else   
    //         j--;
        
    // }




//for unsorted array using nested loop
    // int a[10]={6,3,8,10,16,7,5,2,9,14};
    // int i,j;
    // int k=10;
    // for(i=0;i<10;i++)
    // {
    //     for(j=i+1;j<10;j++)
    //     {
    //         if(a[i]+a[j]==k)
    //             printf("%d %d\n",a[i],a[j]);
    //     }
    // } 


//for unsorted array using hashtable  
    int a[10]={6,3,8,10,16,7,5,2,9,14};
    int H[17]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i;
    int k=10;
    for(i=0;i<10;i++)
    {
        if(k-a[i]>0)
        {
            if(H[k-a[i]]>0)
        {
            printf("%d %d\n",a[i],k-a[i]);
        }
        H[a[i]]++;

        }

    }

    
    return 0;

}