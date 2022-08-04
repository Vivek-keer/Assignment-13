#include <stdio.h>
#include <stdlib.h>
int fact(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Factorial is %d",fact(num));
    return 0;
}
int fact(int f)
{
    if(f==1) return 1;
    return f*fact(f-1);
}
