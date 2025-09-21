#include<stdio.h>

int main()
{
    int n, a=0, b=1, t, fibo;
    scanf("%d", &n);
    for(t=1; t<=n; t++)
    {
        printf("%d ", a);
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return 0;
}