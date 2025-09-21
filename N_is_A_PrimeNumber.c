#include<stdio.h>
int main()
{
    int n, count=0, i;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(n==0 || n==1)
    printf("Yor number is %d which is not considered as a Prime number\n", n);
    else if(count==0)
    printf("PRIME\n");
    else
    printf("NOT PRIME\n");
}