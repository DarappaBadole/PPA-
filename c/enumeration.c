#include<stdio.h>

enum  days { monday=2,tuesday,wednsday,thursday};



int main()
{
enum days obj;


int salary[]={200,450,250,700};
printf("the size of enum is: %d\n",sizeof(obj));
printf("monday :%d\n",monday);


printf("tuesday :%d\n",tuesday);
printf("wednsay  :%d\n",wednsday);
printf("thursday :%d\n",thursday);
printf("my salary on wednsday is:%d\n",salary[2]);
printf("my salary on wednsay is :%d\n",salary[wednsday]);

//monday++;
//printf("the address of monday:%d\n",&monday); invalid aahe because 
//enum cha address nighat nahi 

    return 0;

}