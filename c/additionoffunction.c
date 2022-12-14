#include<stdio.h>
int addition(int value1,int value2)
{

int output=0;
output=value1+value2;
return output;

}




int main()
{

int no1=10;
int no2=11;

int ans=0;

ans=addition(no1,no2);

printf("the addition is:%d\n",ans);

    return 0;
}