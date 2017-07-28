#include<stdio.h>

void main()
{
    int i,j=0;                                          //Declaration
    char str1[50];
    char str2[50];
    char temp[50];
    printf("Enter the first string to be compared: ");
    gets(str1);
    printf("Enter the second string to be compared: ");
    gets(str2);
    if (strlen(str1)>strlen(str2))                      //Swaps strings if the length of the first string is greater than that of the second
    {
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    }
    printf("\nThe first string is: %s\n",str1);
    printf("The second string is: %s\n",str2);
    for (i=0;i<strlen(str1);i++)
    {
    if (str1[i]==str2[i])                               //Checks to see if the strings are in fact the same
    {
        if(i==strlen(str1)-1)
        {
            printf("\nThese strings are the same.");
        }
    }
    if (strlen(str1)!=strlen(str2))
    {
        {
        for(i=0;i<strlen(str1);i++)
        {
            if(str1[i]==str2[i])
                j++;
        }
        for(i=strlen(str1)-1;i<strlen(str2);i++)
        {
            if(str1[i-strlen(str1)]==str2[i])
                j++;
        }
        if (j==strlen(str1))
            printf("The word ""%s"" has all of its characters in the word ""%s""",str1,str2);
        }
    }
    }
    if (j<strlen(str1))
        printf("The word ""%s"" doesn't share all of its characters with the word ""%s""",str1,str2);
}
