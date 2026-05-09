#include<stdio.h>

union Demo 
{
    double d ;
    int i ;
    float f ;
};




int main()
{
    union Demo dobj;
    
    printf("Size of Union %d:   " , sizeof(dobj));

    return 0;
}


// All the concepts of structure is same in union other than memory allocation