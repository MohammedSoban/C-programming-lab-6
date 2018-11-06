#include <stdio.h>
#include <stdlib.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int x,int y)
{
    //int x,y;
    printf("before swapping x=%d\n",x);
    printf("before swapping y=%d\n",y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping x=%d\n",x);
    printf("after swapping y=%d\n",y);

    return 0;

}
