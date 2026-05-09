#include<stdio.h>

int main()
{
    int arr[5];
    int iCount = 0;
    int size = 0 ;

    arr[0] = 10;                                                            // initializing array elements using member by member initialzation technique
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    size = sizeof(arr) / sizeof(arr[0]);                                    // to get size of array  

    // Accessing array elements
    for (iCount = 0 ; iCount < size; iCount++)
    {
        printf("Element at index %d : %d" , iCount ,arr[iCount] );
        printf("\n");
    } 


    return 0;
}