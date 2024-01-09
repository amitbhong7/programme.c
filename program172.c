#include<stdio.h>
//#define ERR_NOTFOUND -1

/*int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the chracter : \n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First ocuurance of that character is at : %d\n",iRet);
    }

    return 0;
}
*/
 int firstoccurance(char *str,char cvalue)

 {
    int count=1;
    int ipos=-1;



   while (*str !='\0')
   {
     if(*str==cvalue)
     {
        ipos=count;
        break;
     }
     str++;
     count++;

   }
   return ipos;
 }

 int main()
 {
   int bret=0;
   char Arr[20];
   char ch='\0';

   printf("Enter string \n");
   scanf("%[^'\n']s",Arr);


 printf("Enter they ch you want search \n");
   scanf(" %c",&ch);

   bret=firstoccurance(Arr,ch);

   if(bret==-1)
   {
    printf("There is no such character\n");
   }
   else
   {
      printf("There is such character:%d\n",bret);
   }

    return 0;
 }