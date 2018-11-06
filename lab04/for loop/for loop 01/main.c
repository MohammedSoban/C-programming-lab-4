#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,space,ass,b=0,a;
    printf("enter the number of rows:");
    scanf("%d",&a);
    for(rows=a;rows>=1;rows--)
    {
        for(space=1;space<=(rows-a);space++){
            printf(" ");
    }
    for(ass=1;ass<=b;ass++)
    {
        printf("*");
    }
    printf("\n");
    b=b+2;
    }
}
