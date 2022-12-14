#include<stdio.h>
int Addition (int iNo1,int iNo2)
{
int iAns=iNo1+iNo2;
return iAns;

}



int main()
{

int ivalue1=0;
int ivalue2=0;
int iRet=0;

printf("Enter First Number\n ");
scanf("%d",&ivalue1);

printf("Enter Second number \n");
scanf("%d",&ivalue2);

iRet=Addition(ivalue1,ivalue2);

printf("the Addition is :%d\n",iRet);


    return 0;

}