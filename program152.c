#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("ASCII\tTable\tHexa\n");
    
    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c\t%d\t%x\n",iCnt,iCnt,iCnt);
    }

    return 0;
}