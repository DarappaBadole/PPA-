#include<stdio.h>
extern int no1;
extern int no2;
extern void demo();
int main(){
demo();
printf("the value of first number is:%d \n",no1);
printf("the value of second number is:%d \n",no2);
return 0;
}