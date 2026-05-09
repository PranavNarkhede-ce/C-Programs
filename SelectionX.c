#include<stdio.h>

int main()
{
    int iNum = 0;
    int prime = 1;
    int iCount = 0;

    printf("Enter a number to check prime or not :");
    scanf("%d",&iNum);

    if(iNum <=1)
    {
        prime = 0 ;
    }
 
    for (iCount = 2 ; iCount < iNum ; iCount++)
    {
        if (iNum % iCount == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime == 0)
    {
        printf("The %d number is not prime ", iNum);
    }
    else 
    {
        printf("The %d number is  prime ", iNum);
    }

    return 0 ;
}