#include <stdio.h>
#include <string.h>

char  AUTHOR[30][30],price[20][20], SHELFNO[30][30], URL[30][30];
char name[100], email[100], phoneNumber[20];
char name1[100], email1[100], phoneNumber1[20];


int length = 8;
int n = 0,p=0,l=0;
int k, day;

char book[10][100] = {"The C Programming Language", "C++ Primer", "Computer Science Distilled", "Data Structures and Algorithms in C++",
                      "Effective C++: 55 Specific Ways to Improve Your Programs and Designs", "Introduction to Algorithms",
                      "Programming in C", "Head First Design Patterns: A Brain-Friendly Guide"};

char books[10][100] = {"the c programming language", "c++ primer", "computer science distilled", "data structures and algorithms in c++",
                       "effective c++: 55 specific ways to improve your programs and designs", "introduction to algorithms",
                       "programming in c", "head first design patterns: a brain-friendly guide"};

char user[] = "admin";
char pass[] = "FTCcoders";

void add();
void readBook();
void changePassword();
void addBook();
void bookAction(int choice);
int valid_days(int x);

int main()
{
     printf("--------------------------------- L I B R A R Y  M A N A G E M E N T  S Y S T E M --------------------------------------\n");
    printf("************************************************************************************************************************\n");
    printf("                                         Enter 1 for user or 2 for admin \n");

    int choice;
    scanf("%d%*c", &choice);

    switch (choice)
    {
    case 1:
        readBook();
        break;
    case 2:
        addBook();
        break;
    default:
        printf("Invalid choice. Please enter 1 or 2.\n");
        break;
    }

    return 0;
}

void displayBookDetails(int n)
{
    int userChoice;
    switch (n)
    {
    case 1:
        printf("BOOK = The C Programming Language\n");
        printf("AUTHOR = Brian Kernighan and Dennis Ritchie\n");
        printf("SHELF NO = 1 \n");
        printf("price = 36$\n");
        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
        break;
    case 2:
        printf("BOOK = C++ Primer\n");
        printf("AUTHOR = Stanley B.Lippman, Jos�e Lajoie, and Barbara E. Moo\n");
        printf("SHELF NO = 1 \n");
        printf("price = 34$\n");

        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
        break;

    case 3:
        printf("BOOK = Computer Science Distilled\n");
        printf("AUTHOR = Wladston Ferreira Filho\n");
        printf("SHELF NO = 1 \n");
        printf("price = 36$\n");

        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n\n  2: borrow\n\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
        break;
    case 4:
        printf("BOOK = Data Structures and Algorithms in C++\n");
        printf("AUTHOR = Michael T. Goodrich, Roberto Tamassia, and David M. Mount\n");
        printf("SHELF NO = 2\n");
        printf("price = 26$\n");
        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);

        break;
    case 5:
        printf("BOOK = Effective C++: 55 Specific Ways to Improve Your Programs and Designs\n");
        printf("AUTHOR = Scott Meyers\n");
        printf("SHELF NO = 2\n");
        printf("price = 17$\n");

        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
        break;
    case 6:
        printf("BOOK = Introduction to Algorithms\n");
        printf("AUTHOR = Thomas H.Cormen, Charles E.Leiserson, Ronald L.Rivest, and Clifford Stein\n");
        printf("SHELF NO = 2\n");
        printf("price = 36$\n");

        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
        break;
    case 7:
        printf("BOOK = Programming in C\n");
        printf("AUTHOR = Stephen G.Kochan\n");
        printf("SHELF NO = 2\n");
        printf("price = 49$\n");

        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
    case 8:
        printf("BOOK = Head First Design Patterns: A Brain-Friendly Guide\n");
        printf("AUTHOR = Brian\n");
        printf("SHELF NO = 2\n");
        printf("price = 49$\n");

        printf("URL = https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628\n\n");
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
    case 9:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);

        printf("URL = %s\n\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
    case 10:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);

        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
    case 11:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);

        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
     case 12:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
     case 13:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[n]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 14:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 15:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 16:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 17:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 18:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 19:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 20:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 21:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 22:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 23:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 24:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
         case 25:
        printf("BOOK = %s\n", book[k]);
        printf("AUTHOR = %s\n", AUTHOR[k]);
        printf("SHELf NO =  %s\n", SHELFNO[k]);
        printf("price = %s\n",price[k]);
        printf("URL = %s\n", URL[k]);
        printf("Enter your choice\n  1: read \n  2: borrow\n  3: buy \n\n ");
        scanf("%d", &userChoice);
        bookAction(userChoice);
    default:
          printf("\n                                                     BOOK NOT FOUND   \n");
            printf("                                                  ___________________\n\n");
        break;
    }
}
void add()
{
    printf("Enter how many number of books data you want to store: ");
    int numBooks;
    scanf("%d", &numBooks);
    scanf("%*c");
    printf("Enter the following Data\n");
    for (int i = 0; i < numBooks; i++)
    {
        printf("Book : ");
        gets(book[length]);
        printf("Author : ");
        gets(AUTHOR[length]);
        printf("SHELF NO : ");
        gets(SHELFNO[length]);
        printf("PRICE : ");
        gets(price[length]);
        printf("URL : ");
        gets(URL[length]);
        printf("SUCCESSFULLY STORED\n");
        length++;
    }

    int h;
    printf("Do you want to go to user interface press: 1?\n");
    scanf("%d", &h);
    switch (h)
    {
    case 1:
        system("cls");
        return main();
    }
}

void readBook()
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("     The book %d : %s                 \n ", i + 1, book[i]);
        printf("\n");
    }
    printf("------------------------------------------------------------------------------------------------------------------------\n");

    printf("\n");
    printf("Enter the book name : ");
    char bk[100];
    fgets(bk, sizeof(bk), stdin);
    bk[strcspn(bk, "\n")] = '\0';
    n=0;
    for ( k = 0; k < length; k++)
    {
        n += 1;
        if (strcmp(bk, book[k]) == 0 || strcmp(bk, books[k]) == 0 )
        {
            printf("\n                                                     BOOK FOUND   \n");
            printf("                                                  ________________\n\n");
            displayBookDetails(n);
            break;
        }
    }printf("\n  Book Not Found  \n");
    printf("Do you want to go back press: 1?\n");
    scanf("%d", &p);
    switch (p)
    {
    case 1:
        system("cls");
       return main();
    }
}

void changePassword()
{
    char old[100], newpass[100], re[100];

    int h;
    do
    {
        printf("Enter Old Password: ");
        scanf("%s", old);
    } while (strcmp(old, pass) != 0);

    do
    {
        printf("Enter New Password: ");
        scanf("%s", newpass);
        printf("Re-Enter New Password: ");
        scanf("%s", re);
    } while (strcmp(newpass, re) != 0);

    strcpy(pass, newpass);
    printf("PASSWORD CHANGED SUCCESSFULLY \n\n");
    printf("Do you want to go back press: 1?\n");
    scanf("%d", &h);
    switch (h)
    {
    case 1:
        system("cls");
       return main();
    }
}

void addBook()
{
    printf("    First you need to login\n");
    char username[20], password[20];
    int k,s;

    printf("    Enter your username: ");
    fgets(username, sizeof(username), stdin);
    printf("    Enter your password: ");
    fgets(password, sizeof(password), stdin);
    username[strcspn(username, "\n")] = '\0';
    password[strcspn(password, "\n")] = '\0';
    if (strcmp(username, user) == 0 && strcmp(password, pass) == 0)
    {
    printf("\n\n        LOGIN SUCCESSFUL \n");
        printf("        ________________ \n\n\n");
        printf("   WELCOME ADMIN !\n\n");
        printf("   1: Add the book \n\n   2: Change password\n\n   3: Borrowers detail \n\n   4: Sale Book detail\n\n");
        scanf("%d%*c", &k);
        printf("\n\n\n\n");
        int q;

        switch(k)
        {
        case 1:
            add(k);
            break;
        case 2:
            changePassword();
            break ;
        case 3:
         if(p == 0){
                printf("Not borrowed.\n");
         }
         else{
            printf("Name :%s\n",name);
            printf("Email :%s\n",email);
            printf("phone number : %s\n",phoneNumber);
            printf("days : %d\n",day);
            printf("\n\n");
         }
            printf("Do you want to go back press 1?\n");
            scanf("%d",&s);
            switch(s)
            {
            case 1:
                system("cls");
                 main();
            }
            printf("*********************** \n");
            printf("* Thanks You So Much  *\n");
            printf("*********************** \n\n\n");

            case 4:
                if(l==0){
                    printf("Not saled \n");
                }else{
            printf("Name :%s\n",name1);
            printf("Email :%s\n",email1);
            printf("phone number : %s\n\n",phoneNumber1);}
            printf("Do you want to go back press 1?\n");
            scanf("%d",&q);
            switch(q)
            {
            case 1:
                system("cls");
                return  main();
            }
            printf("*********************** \n");
            printf("* Thanks You So Much  *\n");
            printf("*********************** \n\n\n");
            return 0;
        }
    }
    else
    {
        printf("LOGIN UNSUCCESSFULL\n");
        return main();
    }
}

void bookAction(int choice)
{

    switch (choice)
    {
    case 1:
        printf(" Enjoy the book!\n\n");
        printf("*********************\n");
        printf(" THANK YOU SO MUCH!\n");
        printf("*********************\n\n");
        printf("if you want to go back press: 1 \n");
        int c;

        scanf("%d",&c);
        switch(c)
        {
        case 1 :
            system("cls");
            return main();
            break;
        }
        break;

    case 2:
        p=1;
        printf("Enter the following Data\n");
        printf("Name: ");
        scanf("%s", name);
        printf("E-mail: ");
        scanf("%s", email);
      do {  printf("Phone number: ");
        scanf("%s", phoneNumber);}
         while(!valid_phone_number(phoneNumber));



        printf("Days: ");
        do
        {
            printf("For How Many Days You Want To Borrow The Book\n");
            scanf("%d",&day);
        }
        while(!(valid_days(day)));
        printf("\n*********************\n");
        printf(" THANK YOU SO MUCH!\n");
        printf("*********************\n\n");
        printf("if you want to back press: 1 \n");
        int z;

        scanf("%d",&z);
        switch(z)
        {
        case 1 :
            return main();
            break;
        }
    case 3:
        l=1;
printf("Enter the following Data\n");
        printf("Name: ");
        scanf("%s", name1);
        printf("E-mail: ");
        scanf("%s", email1);
  do {  printf("Phone number: ");
        scanf("%s", phoneNumber1);}
         while(!valid_phone_number(phoneNumber1));

        printf("Go To The Counter \n\n");
        printf("*********************\n");
        printf(" THANK YOU SO MUCH!\n");
        printf("*********************\n\n");
        printf("if you want to back press: 1 \n");
         int b;

        scanf("%d",&b);
        switch(b)
        {
        case 1 :
            system("cls");
            return main();
            break;
       }
        break;

    default:
        printf("Invalid choice\nHAVE A GOOD DAY SIR !");
    }
}
int valid_days(int x)
{
    int valid = 1;
    if(x > 15)
    {
        printf("Maximum Limit Is 15 Days\n");
        valid = 0;
    }
    return valid;
}
int valid_phone_number(char* phoneNumber)
{
    int valid = 1;
    int len = strlen(phoneNumber);

    if(len != 11)
    {
        printf("Phone number should have 11 digits\n");
        valid = 0;
    }
    return valid;
}
