#include<stdio.h>


//function defination

void fun()

{

printf("inside fun\n");

}

int main()
{


    fun();
void (*fptr)();
/* fptr i sa pointer which 
   points to the function 
   that function accepts nothing 
   and that function returns nothing 
*/


fptr=fun;

fptr();

    return 0;
}