#include<stdio.h>

int main()
{
    // char s[100];
    // gets(s);
//     int i=0;
//     for(;s[i]!='\0';i++)
//     {
//         int j=i+1;
//         int count=1;
//         for(;s[j]!='\0';j++)
//         {
//             if(s[i]==s[j] && s[i]!=' ')
//             {
//                 count++;
//                 s[j]=' ';
//             }

//         }
//         if( count>1)
//         printf("%c %d \n",s[i],count);

//     }


//using hashTable
// char s[100];
//     gets(s);
// int i;
// int H[27]={0};//if it only contains small alphabet
//     for(i=0;s[i]!='\0';i++)
//         H[s[i]-97]++;
        
//  for(i=0;i<27;i++)
//  {
//     if(H[i]>1)
//     printf(" %c %d\n",i+97,H[i])   ; 
//  }  


char s[100];
gets(s);
int i;
int count=0;
int H=0;
int x;
for(i=0;s[i]!='\0';i++)
{
  
  x=1;
  x=x<<(s[i]-97);
  if((x&H)>0)//precendence of > is more than bitwise &
  {
    count++;
    printf("%c is duplicate \n",s[i]);
  }
  else
  {
    H=x|H;
  }
}
if(count<1)
{
  printf("no duplicate");
}


return 0;


}