#include <stdio.h>
int main()
{
    char s[78];
    gets(s);

    int i;

//for finding length of string    
    // for(i=0;s[i]!='\0';i++){};
    // printf("%d",i);


//for ignoring spaces
    //    for(i=0;s[i]!='\0';i++ )
    //    {
    //         if(s[i]!=' ')
    //             s[i]=s[i]+32;
    //    }
    //    printf("%s",s);


//for toggle case
    // for (i = 0; s[i] != '\0'; i++)
    // {
    //     if (s[i] >= 65 && s[i] <= 90)
    //         s[i] += 32;
    //     else if (s[i] >= 97 && s[i] <= 122)
    //         s[i] -= 32;
    // }
    // printf("%s", s);


//for counting vowel and consonent
//    int count=0;
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         if (s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' )
//             count++;
        
//     }
//     printf("%d",count );   


///for counting no.of words
    // int count=1;
    // for(i=0;s[i]!='\0';i++)
    // {
    //     if(s[i]==' ' && s[i-1]!=' ')
    //         count++;
    // }
    // printf("%d",count ); 



//validating a sting i.e pwd contains of ony lower case alphabet and digits 0 to 9
    for(i=0;s[i]!='\0';i++)
    {
        if(!((s[i]>=97 && s[i]<=122)|| (s[i]>=48 && s[i]<=57)))
        {
            printf("invalid pwd\n");
            break;
        }     
    }
    if(s[i]=='\0')
        printf("valid pwd");
    return 0;   
}