#include<stdio.h>

int CheckPrimeNumber(int iNo)
{
    int iCounter = 0;

    if(iNo < 2)
    {
        return 0;
    }

    for(iCounter = 2 ; iCounter < iNo ; iCounter++)
    {
        if(iNo % iCounter == 0)
        {
            return  0;
            
        }
        
    }

    return 1;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number to check prime or not : ");
    scanf("%d" , &iValue);

    iRet = CheckPrimeNumber(iValue);

    if(iRet == 0)
    {
        printf("%d Number is not a Prime Number ", iValue);
    }
    else 
    {
        printf("%d Number is a Prime Number ", iValue);
    }

    return 0;
}