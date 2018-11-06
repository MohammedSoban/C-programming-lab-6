#include <stdio.h>
#include <stdlib.h>
void odd(int a,int b);
int main()
{
    int a,b;
    printf("enter starting number:");
    scanf("%d",&a);
    printf("enter ending number:");
    scanf("%d",&b);
    odd(a,b);
    return 0;
}
void odd(int x,int y)
{
    int i,sum=1;
    for(i=x;i<=y;i++){
    if(i%2!=0)
        {
     sum=sum+i;
    }

    }
printf("%d",sum);
}
