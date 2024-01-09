#include<stdio.h>

int main()
{
    char Arr[10];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);   //%[^'\n']s -> jo pryant tumaha enter milat nahi to pryant input ghyet rha.
    

    printf("Your name is : %s\n",Arr);

    return 0;
}