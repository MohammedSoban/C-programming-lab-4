#include <stdio.h>
#include <conio.h>

int main()
{
int a,b=0,c=0,d=0;
printf("enter a number:");
scanf("%d",&a);

do{
    if(b%2==0)
    {
         c=c+b;
       // printf("%d\n",b);
    }else
    {
        d=d+b;
       // printf("%d\n",b);
    }

    b++;
}
while(b<=a);
printf("sum of even number:%d\n",c);
printf("sum of odd number:%d\n",d);
    return 0;
}
