//program in C to check number is Palindrome or not using Functions.
#include<stdio.h>
int reverse(int x)
{
    int rev=0;
    while(x!=0)
    {
      int r=x%10;
      rev=rev*10+r;
      x=x/10;
    }
    return rev;
}
void check(int og,int n)
{
  if(reverse(n)==og)
    {
      printf("Number is palindrome");
    }
    else
    printf("Number is not palindrome");
    return ;
}
int main()
{
    int n;
    printf("ENter the number=");
    scanf("%d",&n);
    int og=n;
    check(og,n);
    return 0;
}