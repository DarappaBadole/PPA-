#include<stdio.h>



int main()
{
char ch = 'A';
int i= 11;
float f  = 3.14;
double d = 9.567;

printf("%c\n",ch);
printf("%d\n",i);
printf("%f\n",f);
printf("%lf\n",d);

printf("size of each variable:%d\n");
printf("size of character:%d\n",sizeof(ch));
printf("size of integer:%d\n",sizeof(i));
printf("size of float:%d\n",sizeof(f));

printf("size of double:%d\n",sizeof(d));

printf("address of each variable\n");
printf("address of ch: %d\n",&ch);
printf("address of  i :%d\n",&i);

printf("address of f:%d\n",&f);
printf("address of d:%d\n",&d);




    return 0;
}