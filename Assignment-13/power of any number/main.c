#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,p;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power of number: ");
    scanf("%d",&p);
    printf("Enter the power of number: %d",power(num,p));
    return 0;
}
power(int x,int pow)
{
    if(pow==1) return x;
    return x*power(x,pow-1);
}
