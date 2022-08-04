#include <stdio.h>
#include <stdlib.h>
nsquare(int);
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Sum of first %d square number is %d",n,nsquare(n));
    return 0;
}
nsquare(int x)
{
    int sum;
    if(x==1) return 1;
    sum=x*x+nsquare(x-1);
    return sum;
}
