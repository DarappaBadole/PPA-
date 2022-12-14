#include<stdio.h>

extern int i;
extern int j;
extern int x;
extern int y=151;
void gun();
extern void fun();
int main()

{

printf("inside main");
fun();
gun();
return 0;
int i=21;
void gun()
{
    printf("inside gun ");
    
}

}