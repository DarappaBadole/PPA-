#include<stdio.h>

int multiplication(int value1 , int value2)
{
int solution=0;
solution = value1*value2;
return solution;
}


int main()

{

int A= 10;
int B=11;
int Ans =0;

Ans=multiplication(A,B);

printf("multiplication is:%d\n",Ans);



return 0;

}