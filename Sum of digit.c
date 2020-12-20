#include<stdio.h>

void sum_of_digit(int num)
{
    static sum;
    if(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
        sum_of_digit(num);
    }
    else
    {
        printf("Sum of digit : %d",sum);
    }
}

int main()
{
 int num;
 printf("Input number : ");
 scanf("%d",&num);
 sum_of_digit(num);
}
