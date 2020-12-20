#include<stdio.h>

int main()
{
 int **p,i,j;
 int r,c;
 p=(int**)malloc(3*sizeof(int*));
 for(i=0;i<3;i++)
 {
     *(p+i)=(int*)malloc(3*sizeof(int));
 }
 printf("Input elements in the matrix : \n");
 int sum=0;
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         printf("element - [%d][%d] : ",i,j);
         scanf("%d",*(p+i)+j);
         sum=sum+(*(*(p+i)+j));
     }

 }
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         printf("%d ",*(*(p+i)+j));
     }
     printf("\n");
 }
 printf("\nSum of all diagonal elements = %d",sum);
}
