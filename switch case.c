#include<stdio.h>

int main()
{
 int choice;
 printf("Enter a number :- ");
 scanf("%d",&choice);
 switch(choice)
 {
  case 0:
     printf("Entered number that is in the list");
     break;
  case 1:
     printf("Entered number that is in the list");
     break;
  default:
     printf("Entered number that is not in the list");
     break;
 }
 return(0);
}
