#include<stdio.h>
int main()
{
    void pattern_1();
    void pattern_2();
    int n;
    printf("ENter a number=");
    scanf("%d",&n);
    pattern_1(n);
    pattern_2(n);
    return 0;
}
void pattern_1(int x)
{
     for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return;
}
void pattern_2(int x)
{
     for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return;
}