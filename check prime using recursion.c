#include<stdio.h>

int prime(int a,int i)
{
    if(i==1)
    {
        return(1);
    }
    else{
        if(a%i==0)
        {
            return(0);
        }
        else{
            return(prime(a,i-1));
        }
    }
}


int main()
{
 int a;
 printf("Enter a number : ");
 scanf("%d",&a);
 int c;
 c=prime(a,a/2);
 if(c==1)
 {
   printf("%d is a prime number",a);
 }
 else
 {
    printf("%d is not a prime number",a);
 }
 return(0);
}
