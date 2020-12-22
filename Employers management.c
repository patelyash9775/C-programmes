#include<stdio.h>


struct employee
{
    long long int empno;
    char empname[20];
    char depname[20];
    long int salary;
    struct employee *next;
};

typedef struct employee employee;
employee *head=NULL;

int count=0;

employee* createnode()
{
    employee *newnode;
    newnode=(employee*)malloc(sizeof(employee));
    newnode->next=NULL;
    printf("\nEnter a phone number : ");
    scanf("%lld",&(newnode->empno));
    fflush(stdin);
    printf("\nEnter a name : ");
    gets(newnode->empname);
    printf("\nEnter a department name : ");
    gets(newnode->depname);
    printf("\nEnter a salary : ");
    scanf("%ld",&(newnode->salary));
    return(newnode);
}

void insert()
{
    employee *newnode;
    employee *tp;
    newnode=createnode();
    if(head==NULL)
    {
        head=newnode;
    }
    else {
       if(count<=20)
       {
        tp=head;
        while(tp->next!=NULL)
        {
            tp=tp->next;
        }
        tp->next=newnode;
       }
       else{
        printf("\nAlready stored 20 employees data .");
       }
    }
}

void display()
{
    int i=1;
    employee *tp;
    if(head==NULL)
    {
        printf("\nThere is no data");
    }
    else{
        tp=head;
        while(tp!=NULL)
        {
            printf("\n%d .",i++);
            printf("   ");
            printf("%s",tp->empname);
            printf("    ");
            printf("%lld",tp->empno);
            printf("     ");
            printf("%s",tp->depname);
            printf("     ");
            printf("%ld",tp->salary);
            tp=tp->next;

        }
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
        printf(" - - - - - - - - > 1. Enter information < - - - - - - - - - \n");
        printf(" - - - - - - - - > 2. Display data <- - - - - - - - - - - - \n");
        printf(" - - - - - - - - > 3. Exit <- - - - - - - - - - - - - - - - \n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
        printf("\nEnter your choice :- ");
        scanf("%d",&choice);
        switch(choice)
        {
      case 1:
        insert();
        break;
      case 2:
        display();
        break;
      case 3:
        exit(0);
        }
    }
}
