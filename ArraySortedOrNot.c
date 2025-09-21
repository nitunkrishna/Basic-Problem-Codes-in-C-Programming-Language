#include<stdio.h>

int main()
{
    int n, count=0;
    printf("Enter the total numbers you want: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]<arr[i+1]) count++;
    }

    if(count==n-1) printf("Array is sorted\n");
    else printf("Array is not sorted\n");
    
    return 0;
}