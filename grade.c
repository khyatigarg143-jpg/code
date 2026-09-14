#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d", &marks);
    if(marks >= 91 && marks<=100)
   {
    printf("Grade=O\n");
     }
     else if(marks >= 81 && marks<=90)
     {
        printf("Grade=A+\n");
     }
     else if(marks>=71 && marks<=80)
     {
        printf("Grade=A\n");
     }
      else if(marks>=61 && marks<=70)
     {
        printf("Grade=B+\n");
     }
      else if(marks>=51 && marks<=60)
     {
        printf("Grade=B\n");
     }
      else if(marks>=41 && marks<=50)
     {
        printf("Grade=C\n");
     }
      else if(marks>=35 && marks<=41)
     {
        printf("Grade=D\n");
     }
     else if(marks>=0 && marks<=34)
     {
        printf("Fail\n");
     }
     else
     {
        printf("Invalid marks\n");
     }
return 0;
    } 