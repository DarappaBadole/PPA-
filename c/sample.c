#include<stdio.h>


void demo()
{
printf("this is add of function\n");
}
   int  add(int value1,int value2)
 {
    int ans=0;
 ans=value1+value2;
return ans;
 }


int main()
{

int no1=10;
int no2=11;

int ret=0;

ret=add(no1,no2);

demo();
printf("the addition is:%d\n",ret);

return 0;
}