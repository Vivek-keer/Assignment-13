#include <stdio.h>
#include <stdlib.h>
nevensum(int);
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Sum of first %d even number is %d",n,nevensum(n));
    return 0;
}
nevensum(int x)
{
    int sum;
    if(x==1) return 2;
    sum=2*x+nevensum(x-1);
    return sum;
}
