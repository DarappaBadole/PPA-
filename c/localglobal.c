#include<stdio.h>

int X=10;

void demo()
{

int B=30;
printf("value of B from demo:%d\n",B);
printf("value of X from demo:%d\n",X);

}
int main()
{

int A=20;
printf("value of A from main:%d\n",A);
printf("value of X from demo:%d\n",X);



demo();

return 0;

}

