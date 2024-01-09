#include<stdio.h>
#include<string.h>


int smallcount(char *str)

{
    int icount =0;
    
 if(*str!='\0')
 {
   str++;
   icount++;
 }
 return icount;
}
int main()
{
    char Arr[200];
   int iret=0;
   printf("Enter string that you want to store\n");
   scanf(" %[^'\n']s",Arr);
   
   iret=smallcount(Arr);

   printf ("Count of charectors are:%d",iret);

    return 0;

}