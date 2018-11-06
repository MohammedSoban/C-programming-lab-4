#include <stdio.h>
int main()
{
    int j, i;

    printf("Enter a positive integer: ");
    scanf("%d",&j);

    for(i=2; i<=j/2; ++i)

break;
        if(j%i==0)
           printf("its not a prime number %d:",j);
           else
            printf("its a prime number :%d",j);





    return 0;
}
