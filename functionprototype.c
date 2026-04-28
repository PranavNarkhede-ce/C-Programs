#include<stdio.h>

int add(int , int );  // function prototype that tells compiler about function and its argument 

int main()
{
    int ans =0, a=0,b=0;

    printf("Enter first number:\n");
    scanf("%d",&a);

    printf("Enter second number:\n");
    scanf("%d",&b);
    ans=add(a , b);
    printf("Additon is :%d",ans);

    return 0;
}