#include<stdio.h>
#pragma pack(1) // preprocessor tells to compiler , allocate 1 byte of 
                // memory to each element 
struct demo
{
int i;
char ch;  //memory allocated for all char is bytes 

float f;
float d;



};




int main()
{

struct demo dobj;

printf("size of th estructure is:%d\n",sizeof(dobj));




    return 0;

}
