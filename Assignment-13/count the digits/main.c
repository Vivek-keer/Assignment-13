#include <stdio.h>
#include <stdlib.h>
int count(int);
int c=0;
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Number of digit is %d",count(x));
    return 0;
}
count(int y)
{
    if(y==0) return c;
    c++;
    count(y/10);
}
