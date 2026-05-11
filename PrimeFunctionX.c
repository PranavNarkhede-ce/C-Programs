#include<stdio.h>
#include<stdbool.h>                                     // to use boolean datatype in our program

bool CheckPrimeNumber(int iNo)
{
    int iCounter = 0;

    if(iNo < 2)
    {
        return false;
    }

    for(iCounter = 2 ; iCounter < iNo ; iCounter++)
    {
        if(iNo % iCounter == 0)
        {
            return  false;
            
        }
        
    }

    return true;
}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter number to check prime or not : ");
    scanf("%d" , &iValue);

    iRet = CheckPrimeNumber(iValue);

    if(iRet == false)
    {
        printf("%d Number is not a Prime Number ", iValue);
    }
    else 
    {
        printf("%d Number is a Prime Number ", iValue);
    }

    return 0;
}