#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;//copy  kel jail *dest mdhe 
        src++;       
        dest++;
    }
    *dest = '\0';//shevti '\0 'add krava lagel that indicate end of string.
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strcpy(Arr,Brr);

    printf("String after copy is : %s\n",Brr);

    return 0;
}