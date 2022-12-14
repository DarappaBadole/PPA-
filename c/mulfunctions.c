#include<stdio.h>

int multiplication(int no1,int no2)
{
int ans=0;
ans=no1*no2;
 
 return ans;


}

int main()
{
int no1=10;
int no2=20;

int ret=0;
ret=multiplication(no1,no2);

printf("the multiplication is:%d",ret);


return 0;
}