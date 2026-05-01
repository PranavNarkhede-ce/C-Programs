#include<stdio.h>


//Declaration
#pragma pack(1)                     //preprocessor directive symbol  , it is used to disable padding 
struct Demo
{
    int i;          //4
    char ch;       //1  generates padding 
    float f;      //4  

};                //9

int main()
{
    struct Demo dobj;
    printf("%d\n",sizeof(dobj));        //9
    return 0;

}

// here if we dont write pragma pack then the padding occurs and the size of object becomes 12 bytes that causes memory wastage