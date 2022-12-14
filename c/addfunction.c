#include<stdio.h>

int Addition(int ivalue1,int ivalue2)
{
    int iOutput =0;
    
    iOutput=ivalue1+ivalue2;

    return iOutput;



}

int main()
{


int iNo1=10;
int iNo2=11;
int iANS=0;


iANS=Addition(iNo1,iNo2);

printf("Addition is : %d \n",iANS);
return 0;
}