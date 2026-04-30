#include<stdio.h>
#include<stdlib.h>


int main()
{

    int size = 0 ; 
    float *marks = NULL;
    int i = 0 ;                     // loop counter 

    printf("Enter number of elements :\n");
    scanf("%d" , &size);

    // Dynamic memory allocation 

    marks = (float * )calloc(size , sizeof(float));
    
    printf("Enter your marks : \n");

    // Iteration 

    //     1       2      3
    for (i = 0 ; i < size ; i++)
    {
        scanf("%f", &marks[i]);     //4
    }    
   

    printf("Entered marks are :\n");

   //     1       2      3
    for (i = 0 ; i < size ; i++)
    {
        printf("%f\n",marks[i]);     //4
    }  

    free(marks);                // free the memory 

    return 0 ;
}