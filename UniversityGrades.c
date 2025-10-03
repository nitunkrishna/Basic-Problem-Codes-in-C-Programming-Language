#include<stdio.h>

int main()
{
   float marks;
   printf("Enter the value\n");
   scanf("%f", &marks);
   if(marks>100 || marks<00)
       printf("INVALID INPUT!!!\nPLEASE CHECK AGAIN\n");
   else if(marks>=80)
       printf("A+\n");
   else if(marks>=75)
        printf("A\n");
   else if(marks>=70)
        printf("A-\n");
   else if(marks>=65)
        printf("B+\n");
   else if(marks>=60)
        printf("B\n");
   else if(marks>=55)
        printf("B-\n");
   else if(marks>=50)
        printf("C\n");
   else if(marks>=45)
        printf("D\n");
   else
        printf("Fail\n");
   return 0;
}