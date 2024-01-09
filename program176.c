#include<stdio.h>

void EditString(char *str) // call by address:- jar tumhi ekada parametor tumhi function la patvla ani patvlela parametor
                                 // ha call by address ya padhtine patvla asel tr function ne tyachya parametors mdhe kelel bddal ha jyane patvla tychya direct memory hoto
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    EditString(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}