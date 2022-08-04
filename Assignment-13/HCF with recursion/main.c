#include <stdio.h>
#include <stdlib.h>
int hcf(int,int);
int main()
{
    int n,m;
    printf("Enter the number: ");
    scanf("%d%d",&m,&n);
    printf("HCF is  %d",hcf(m,n));
    return 0;
}
int hcf(int x,int y)
{
    int min,max,r;
    min=x<y?x:y;max=x>y?x:y;
    r=max%min;
    if(r==0) return min;
    hcf(r,min);

}

