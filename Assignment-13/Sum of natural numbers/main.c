#include <stdio.h>
#include <stdlib.h>
nsum(int);
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Sum of first %d natural number is %d",n,nsum(n));
    return 0;
}
nsum(int x)
{
    int sum;
    if(x==1) return 1;
    sum=x+nsum(x-1);
    return sum;
}
