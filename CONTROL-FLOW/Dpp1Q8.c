#include<stdio.h>

    // CONTROL FLOW DPP 1: Q8
     
int main()
{
    int a=0,b=0;
    a=(a=4)||(b=1);

    if (a && b) 
        printf("C PROGRAMMING");

    else 
        printf("PANKAJ SHARMA");

    printf("%d",b);

    return 0;
}
