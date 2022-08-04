#include <stdio.h>
#include <stdlib.h>
int count=0;
void fibo(int,int,int);
int main()
{
    int f=0,s=1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
     printf("%d %d ",f,s);
    fibo(f,s,n);
    return 0;
}
fibo(int pre,int cur,int n)
   {
       int next;
       if(count==n-2) return;
       next=pre+cur;
       printf("%d  ",next); count++;
       fibo(cur,next,n);
   }
