#include<stdio.h>
#include<stdbool.h>

bool strcmpx(char *str1, char *str2)
{  
    while((*str1 !='\0')&&(*str2 !='\0'))  //philic jr false asel asel dusri cheak pn keli jaat nahi.(short cercite evalutation).
    {
     if(*str1 !=*str2)//compare  krnarya sathi  string chya lenght same hvyat.
     {
      break;
            
      }
      str1++;
      str2++;
    }
       if ((*str1 =='\0')&&(*str2 =='\0'))

       {
        return true;

        }
       else
        {
        return false;
        }

    
   
  
}


int main ()
{
    char Arr[20];
    char Brr [20];
    bool bret=false;

    printf("Enter string that you want to stored\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter string that you want to second string stored\n");
    scanf(" %[^'\n']s",Brr);
  

  bret=strcmpx(Arr,Brr);


  if(bret==true)
  {
    printf("both the string is iddenticall\n");

  }
  else
  {
    printf("both the string is not iddenticall\n");
  }


    return 0;
}