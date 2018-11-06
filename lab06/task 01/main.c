#include <stdio.h>
#include <stdlib.h>
void fact(int a);
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    fact(a);
  return 0;
}

void fact(int x)
{
    int r,c=1;
    for(r=1;r<=x;r++)
        {
        c=r*c;
        }
          printf("fact=%d",c);

}
