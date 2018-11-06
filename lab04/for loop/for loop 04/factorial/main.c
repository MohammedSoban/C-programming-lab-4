#include <stdio.h>
#include <stdlib.h>

int main()
{
int f=1,a,i;
printf("enter the number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
f=i*f;
}
    printf("the factorial is:%d",f);


    return 0;

}
