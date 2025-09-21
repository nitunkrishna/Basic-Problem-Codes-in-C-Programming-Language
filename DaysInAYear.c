#include<stdio.h>

int main()
{
    int Y;
    printf("Enter any year: ");
    scanf("%d", &Y);
    if(Y%4==0)
    {
        if(Y%100==0)
        {
            if(Y%400==0) printf("366\n");
            else printf("365\n");
        }
        else printf("366\n");
    }
    else printf("365\n");
    return 0;
}