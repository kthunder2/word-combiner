//code for combining two words together.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *str1, *str2, *combined;
    int str1len, str2len, max; //lengths of strings
    int i, j=0;

    str1=(char*)malloc(sizeof(char)*20);
    str2=(char*)malloc(sizeof(char)*20);

    printf("Enter first word:");
    gets(str1); //reading string

    printf("\nEnter second word:");
    gets(str2);

    str1len=strlen(str1);
    str2len=strlen(str2);

    combined =(char*)malloc(sizeof(char)*(str1len+str2len));

    if(str1len>str2len)
    {
        max=str1len;
    }
    else
    {
        max=str2len;
    }

    for(i=0; i<max; i++)
    {
        if(i<str1len)
        {
            combined[j]=str1[i];
            j++;
        }
        //using two if statements since we want to check both of the strings for merging them.
        if(i<str2len)
        {
            combined[j]=str2[i];
            j++;
        }

    }
    combined[j]='\0';
    printf("%s", combined);

    free(str1);
    free(str2);
    free(combined);


    return 0;
}
