#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2,sum;
    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);
    sum = num1+num2;
    printf("Sum of %d and %d is %d",num1,num2,sum);
    getch();
}
