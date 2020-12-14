#include<stdio.h>

int main()
{
 int r,c;
 printf("Enter a row : ");
 scanf("%d",&r);
 int i,j,k;
 for(i=1;i<=r;i++)
 {
     k=0;
     for(j=1;j<=2*i;j++)
     {
         if(k==0)
         {
             printf("%d",k++);
         }
         else
         {
             printf("%d",k--);
         }
     }
     printf("\n");
 }
 return(0);
}
