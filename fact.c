#program to find factorial of number using recursion
#include<stdio.h>
int factorial(int x)
{
    if (x==0) return 1 ;
    int a=x*factorial(x-1);
    return a;
}
int main ()
{  
    int n;
    printf("ENter n=");
    scanf("%d",&n);
    int a=factorial(n);
    printf("%d",a);
    return 0;
}
