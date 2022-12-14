#include<stdio.h>

void demo()
{
 
 auto int A = 10;
 A++;
 printf("value from demo is : %d\n", A);




}
 void abhya()
 {

    static int B = 10;
    B++;
    printf("value from abhya is :%d \n",B);
 }




int main()
{

demo();
demo();
abhya();
abhya();

return 0 ;
}