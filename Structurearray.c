#include<stdio.h>

struct Hello
{
    float f;                //4
    int arr[3];             //12

}hobj;                      //  16  ,global object



int main()
{
   
    printf("size of object is :%lu\n",sizeof(hobj));
    return 0;

}