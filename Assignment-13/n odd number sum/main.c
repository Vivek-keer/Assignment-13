#include <stdio.h>
#include <stdlib.h>
noddsum(int);
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Sum of first %d odd number is %d",n,noddsum(n));
    return 0;
}
noddsum(int x)
{
    int sum;
    if(x==1) return 1;
    sum=2*x-1+noddsum(x-1);
    return sum;
}
