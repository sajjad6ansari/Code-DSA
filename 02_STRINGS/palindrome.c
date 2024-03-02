#include<stdio.h>
int main()
{
 char s[]="malayalam";
 int i;
    for(i=0;s[i]!='\0';i++)
{
    

}
printf("%d\n",i);
i=i-1;
int j=0;
for(j=0;j<i;j++,i--)
{
    if(s[j]!=s[i])
    {
        printf("not palindrome");
        break;
    }
}
if(j==i || j>i )
 printf("palindrome");
 ///we can also chec by comparing the original sttrig with the  its reversed one through copying or swapping
}