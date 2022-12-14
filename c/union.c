#include<stdio.h>
struct demo
{
 int i;
 float f;
 double d;
};

union hello 
{
 int i;
float f;
double d;

};

int main()
{
struct demo dobj;
union hello hobj ;

printf("the size of the union:%d\n",sizeof(hobj));
printf("the size of the structure:%d\n",sizeof(dobj));


dobj.i=11;
dobj.f=90.80;
dobj.d =90.5;

hobj.d=90.4;

printf("the value of hobj is:%f\n",hobj.f);
printf("the value of hobj.d :%f\n",hobj.d);







    return 0;

}