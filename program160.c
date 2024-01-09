#include<stdio.h>

int strlenX(char str[])
{
    int icoutn=0;
    while (*str != '\0')
    {
       str++;
       icoutn++;
    
    }
    return icoutn;

}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

    iRet = strlenX(Arr);    // strlenX(100);

    printf("Length of string is : %d\n",iRet);
    return 0;
}
//char Arr[10];
