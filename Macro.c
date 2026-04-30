// Demonstration of preprocessor 

/*
    Pre placement activity 
    22 April 2026

*/

// learn the concept of preprocessor and and how Macro is used in programming 

#include<stdio.h>
#define PI 3.14             // user defined Macro 

int main()
{
    // Area of Circle

    float area = 0.0f ;

    area = 10.5f *10.5f *PI ;               // here the preprocessor blindly replace the PI with 3.14 

    printf("Area of circle is : %f\n", area );

    return 0 ;
}