#include<stdio.h>
#include<stdbool.h>


//%  Mod 
//==  Equality
 bool checkEven(int iNo)
{
   if ((iNo %2)==0)

     {
    return true;
   }
   else 
{

    return false;
}
}




int main()
{



int ivalue=0;
bool bRet;

printf("enter A enumber ");
scanf("%d",&ivalue);

bRet= checkEven(ivalue);

bRet=checkEven(ivalue);
if(bRet==true)
{

printf("It is Even number \n");

}
  else
{

    printf("It is odd number\n");
}





return 0;
}


