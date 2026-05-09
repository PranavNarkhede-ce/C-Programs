#include<stdio.h>

int main()
{
    int iInput;

    printf("Enter any Number:");
    scanf("%d" , &iInput);

    if(iInput % 2 == 0)
    {
        printf("%d Number is Even" , iInput);
    }
    else
    {
        printf("%d Number is Odd" , iInput);
    }

    return 0 ;
}