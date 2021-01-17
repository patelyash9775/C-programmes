#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct bankAccount{
  char name[40];
  char phnNo[15];
  char address[100];
  int age;
  char password[20];
  char bod[10];
  float balance;
};


typedef struct bankAccount bank;
bank b;

void createAccount()
{
    printf("\nEnter your name :-  ");
    fgets(b.name,40,stdin);
    fflush(stdin);
    printf("Enter a password :- ");
    gets(b.password);
    while(isNotPasswordDeclaration())
    {
        printf("\nPlease..Enter your password again :- ");
        gets(b.password);
    }
    fflush(stdin);
    printf("Enter your phn No : - ");
    gets(b.phnNo);
    fflush(stdin);
    printf("Enter your age :- ");
    scanf("%d",&b.age);
    fflush(stdin);
    printf("Enter your birth date :- ");
    gets(b.bod);
    printf("Enter your current address :- ");
    fgets(b.address,100,stdin);
}

int isNotPasswordDeclaration()
{
    int l=strlen(b.password);
    int c=0;
    int c1=0;
    for(int i=0;i<l;i++)
    {
        if(b.password[i]=='@' || b.password[i]=='!' || b.password[i]=='#' || b.password[i]=='$')
        {
            c++;
        }
        if(48<=b.password[i] && b.password[i]<=57)
        {
            c1++;
        }

    }
    if(c>=1 && c1>=2 && (l>=8 && l<=18))
    {
        return(0);
    }
    else{
        printf("\nPlease follow some rules for password :- ");
        printf("\n1.require minimum characters 8 to 18");
        printf("\n2.Have minimum 2 integers(Numbers)");
        printf("\n.Have minimum 1 symbol out of these are @ , ! , # and $");
        return(1);

    }
}

void checkProfile()
{

    printf("\nYour name :- %s",b.name);
    printf("password :- %s",b.password);
    printf("\nPhn No :- %s",b.phnNo);
    printf("\nAge :- %d",b.age);
    printf("\nBOD :- %s",b.bod);
    printf("\nAddress:-  %s ",b.address);
}

void deposit()
{
    float a;
    char n[40];
    char p[20];
    printf("\n---------For Confirmation--------");
    printf("\nEnter username :- ");
    fgets(n,40,stdin);
    printf("Enter password :- ");
    gets(p);
    if(strcmp(n,b.name) && strcmp(p,b.password))
    {
        printf("\nYour password and username are wrong.");
    }
    else if(strcmp(n,b.name))
    {
        printf("\nYour username is a wrong");
    }
    else if(strcmp(p,b.password))
    {
        printf("\nYour password is a wrong");
    }
    else
    {
    printf("\nEnter an amount which you want to deposit :- ");
    scanf("%f",&a);
    b.balance=b.balance+a;
    }
}

void withdraw()
{
    float a;
    char n[40];
    char p[20];
    printf("\n---------For Confirmation--------");
    printf("\nEnter username :- ");
    fgets(n,40,stdin);
    printf("Enter password :- ");
    gets(p);
    if(strcmp(n,b.name) && strcmp(p,b.password))
    {
        printf("\nYour password and username are wrong.");
    }
    else if(strcmp(n,b.name))
    {
        printf("\nYour username is a wrong");
    }
    else if(strcmp(p,b.password))
    {
        printf("\nYour password is a wrong");
    }
    else
    {
    printf("\nEnter an amount which you want to withdraw :- ");
    scanf("%f",&a);

    if(a<=b.balance)
    {

        b.balance=b.balance-a;
    }
    else
    {
        printf("\nOops! You can't withdraw entered amount becoz Your balance is a low\n");
    }
    }
}

void checkbalance()
{
    char n[40];
    char p[20];
    printf("\n---------For Confirmation--------");
    printf("\nEnter username :- ");
    fgets(n,40,stdin);
    fflush(stdin);
    printf("Enter password :- ");
    gets(p);
    if(strcmp(n,b.name) && strcmp(p,b.password))
    {
        printf("\nYour password and username are wrong.");
    }
    else if(strcmp(n,b.name))
    {
        printf("\nYour username is a wrong");
    }
    else if(strcmp(p,b.password))
    {
        printf("\nYour password is a wrong");
    }
    else
    {
        printf("Your current balance :- %f",b.balance);
    }

}

void update()
{
    int choice;
    printf("\n----------Select item which we want to update-----------");
    printf("\n                  1. User name                          ");
    printf("\n                  2. Password                           ");
    printf("\n                  3. Phone No.                          ");
    printf("\n                  4. Address                            ");
    printf("\n                  5. Age                                ");
    printf("\n                  6. Birth date                         ");
    printf("\n--------------------------------------------------------");
    printf("\nEnter your choice :- ");
    scanf("%d",&choice);
    fflush(stdin);
    if(choice==1)
    {
        printf("\nEnter an username :- ");
        fgets(b.name,40,stdin);
    }
    else if(choice==2)
    {
        printf("\nEnter a new password :- ");
        gets(b.password);
        while(isNotPasswordDeclaration())
        {
            printf("\nPlease..Enter your password again :- ");
            gets(b.password);
        }
    }
    else if(choice==3)
    {
        printf("\nEnter a new phn. No :- ");
        gets(b.phnNo);
    }
    else if(choice==4)
    {
        printf("\nEnter a new address :- ");
        fgets(b.address,100,stdin);
    }
    else if(choice==5)
    {
        printf("\nEnter an age :- ");
        scanf("%d",&b.age);
    }
    else {
        printf("\nEnter a birth date :- ");
        gets(b.bod);
    }

}

int main()
{

    int choice;
    while(1)
    {
    printf("\n");
    printf("\n----------Select item which we want to do---------------");
    printf("\n                  1. Create Account                     ");
    printf("\n                  2. Display profile                    ");
    printf("\n                  3. Deposit                            ");
    printf("\n                  4. Withdraw                           ");
    printf("\n                  5. Check balance                      ");
    printf("\n                  6. Update Profile                     ");
    printf("\n                  7. Exit                               ");
    printf("\n--------------------------------------------------------");
    printf("\nEnter your choice :- ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        fflush(stdin);
        createAccount();
        break;
    case 2:
        checkProfile();
        break;
    case 3:
        fflush(stdin);
        deposit();
        break;
    case 4:
        fflush(stdin);
        withdraw();
        break;
    case 5:
        fflush(stdin);
        checkbalance();
        break;
    case 6:
        fflush(stdin);
        update();
        break;
    case 7:
        exit(0);

    }
    }

    return(0);
}
