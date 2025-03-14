/*to find grade of a student with given marks*/

#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks); 

    if(marks>=90 && marks<=100){
        printf("your grade is 'A'\n");
    }

    else if(marks>=80 && marks<=90){
        printf("your grade is 'B'\n");
    }

    else if(marks>=70 && marks<=80){
        printf("your grade is 'C'\n");
    }

    else if(marks>=60 && marks<=70){
        printf("your grade is 'D'\n");
    }

    else if(marks>=50 && marks<=60){
        printf("your grade is 'E'\n");
    }
    
    else{
        printf("fail");
    }
    return 0;
}