
#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,i,z,space;
printf("enter the number:");
scanf("%d",&a);
for(i=a;i>=1;i-=2)
    {
for(space=z-i;space<=a;space+=2)
 printf(" ");
 for(z=i;z<=a;z++)
  printf("*",z);
printf("\n");


}
    return 0;
}
