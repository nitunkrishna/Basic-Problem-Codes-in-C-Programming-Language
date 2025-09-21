#include<stdio.h>
int main()
{
    int n, count=0, i, k;
    printf("Enter number: ");
    scanf("%d", &n);
    for(k=2; k<=n; k++)
    {
        count = 0;
        for(i=2; i<k; i++)
        {
            if(k%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        printf("%d\n", k);
    }
}