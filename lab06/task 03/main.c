#include <stdio.h>
#include <stdlib.h>
void prime(int a);
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    prime(a);
    getch();
    return 0;
}

void prime(int x)
{
    int i,result=0;
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        {
            result=1;
        }
    }
    if(result==1)
        printf("not prime:");
    else
        printf("prime number:");
}
