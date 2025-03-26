#include<stdio.h>

    // A KI POWER B
    // BY RECURSION
    
int f(int x,int y)
{
    if (y==1)
        return x;
    
    else
        return x*f(x,y-1);
}
int main()
{
   int a,b;
   printf("ENTER A & B : ");
   scanf("%d %d",&a,&b);
   int result=f(a,b);
   printf("%d",result); 
}
