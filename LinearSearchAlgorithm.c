#include <stdio.h>

int main()
{
    int arr[5]={2, 4, 6, 8, 1};
    int tgt;
    scanf("%d", &tgt);
    int count=0;
    for(int i=0; i<5; i++)
    {
        if(arr[i]==tgt)
        {
            count=i;
            count++;
            break;
        }
    }
    if(count==0) printf("Given number not found\n");
    else printf("The given number is in %dth index\n", count-1);
    return 0;
}