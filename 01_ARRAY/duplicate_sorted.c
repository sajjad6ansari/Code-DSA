#include <stdio.h>

int main()
{
    // Write C code here

    // int a[17] = {1, 2, 2, 2, 3, 4, 5, 6, 7, 8, 8, 8, 9, 9, 10, 11, 14};

// attempt by me sorted array

    // int i=0;
    // while (i < 16)
    // {
    //     if (a[i] < a[i + 1])
    //         i++;
    //     if (a[i] == a[i + 1])
    //     {
    //         int count = 1;
    //         while (a[i] == a[i + 1])
    //         {
    //
    //             count++;
    //             i++;
    //         }
    //         printf("%d %d \n", a[i], count);
    //     }
    // }

// finding duplicate element in sorted array
    //  int lastDuplicate=0;
    //  int i;
    //  for(i=0;i<17-1;i++)
    //  {
    //      if(a[i]==a[i+1] && a[i]!=lastDuplicate)
    //      {
    //          printf("%d\n",a[i]);
    //          lastDuplicate=a[i];
    //      }

    // }

// counting duplicate elements as well
    // for sorted array
    //      int i;
    //  for(i=0;i<17-1;i++)
    //  {
    //      if(a[i]==a[i+1] )
    //      {
    //          int j=i;
    //          while(a[i]==a[j])j++;
    //          printf("%d %d \n", a[i], j-i);
    //          i=j-1;
    //      }
    //  }

    int a[8] = {8, 3, 6, 4, 6, 8, 2, 7};
// for unsorted arrray
    // int i;
    // int n = 8;
    // for (i = 0; i < n; i++)
    // {
    //     if (a[i] != -1)
    //     {
    //         int j;
    //         int count = 1;
    //         for (j = i + 1; j < n; j++)
    //         {

    //             if (a[i] == a[j])
    //             {
    //                 count++;
    //                 a[j] = -1;
    //             }
    //         }
    //         if (count > 1)printf("%d %d\n", a[i], count);
    //     }
    // }



//using hashTable or bit set for both sorted an unsorted where duplicates and printed and counted
    int H[9]={0,0,0,0,0,0,0,0,0};
    int i;
    for(i=0;i<8;i++)
    {
        H[a[i]]++;
    }
    for(i=1;i<9;i++)
    {
        if(H[i]>1)printf("%d %d\n",i,H[i]);
    }
    return 0;
}