#include<stdio.h>

void main()
{
    int n,i,j,k,l;                      //Declaration
    printf("Enter the value for n: ");
    scanf("%d",&n);
    char names[n][25];
    char orig[n][25];
    char temp[25];

    printf("Enter %d name(s)\n",n);     //Builds a second array of strings to house the original input
    for(i=0;i<n;i++)
    {
        scanf("%s",names[i]);
        strcpy(orig[i],names[i]);
    }

    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (strcmp(names[i],names[j])==0)       //If the strings for i and j are the same it moves on to the next iteration
            continue;

            for (k=0;k<k+1;k)
            {
                while(names[i][k]==names[j][k])     //Compares each letter of the two strings
                {
                    k++;
                }
                if(names[i][k]<names[j][k])         //Swaps the order of the words if necessary
                {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
                }
                break;
            }

        }
    }
    printf("\nOriginal Input:");                    //Prints original input
    for (i=0;i<n;i++)
    {
        printf("\n%s",orig[i]);
    }
    printf("\n\nSorted Output:");                   //Prints sorted output
    for (i=0;i<n;i++)
    {
        printf("\n%s",names[i]);
    }
    getch();
}
