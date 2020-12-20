#include<stdio.h>

int LCM(int a,int b)
{
    static int i=1;
    if(i%a==0 && i%b==0)
    {
        return(i);
    }
    else
    {
        i++;
        LCM(a,b);
        return(i);
    }
}

int main()
{
 int a,b;
 printf("Input first number : ");
 scanf("%d",&a);
 printf("Input second number : ");
 scanf("%d",&b);
 int l;
 l=LCM(a,b);
 printf("LCM of %d and %d = %d",a,b,l);
 return(0);
}
