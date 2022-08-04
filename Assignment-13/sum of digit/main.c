#include <stdio.h>
#include <stdlib.h>
int digitsum(int);
int count(int);
int main()
{
    int dec;
    printf("Enter the number: ");
    scanf("%d",&dec);
    printf(" sum of digit is: %d",digitsum(dec));

    return 0;
}
int digitsum(int r)
{
    if(r==0) return 0;
    return r%10+digitsum(r/10);
}



