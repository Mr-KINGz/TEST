#include<stdio.h>
#include<math.h> 

int main ()
{
    int a=264;
    int b=838;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d,%d",a,b);
    return 0;
}