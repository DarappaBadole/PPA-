#include<stdio.h>

int Addition(int iValue1, int iValue2)
{ 
int iOutput = 0;
iOutput = iValue1 + iValue2;
return iOutput;
}

int main()
{
int iNO1 = 10;
int iNO2 = 11;
int iAns = 0;

 iAns = Addition( iNO1,iNO2);

printf("Addition is : %d\n",iAns); 

return 0;

}









}