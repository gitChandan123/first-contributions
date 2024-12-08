// #include <stdio.h>
// #include <string.h>
// struct Book
// {
//     int bookid;
//     char title[20];
//     float price;
// };
// void display(struct Book);
// struct Book input();
// int main()
// {
//     struct Book b1 = {1,"php bible",450.5};
//     struct Book b2, b3;
//     b2.bookid = 2;
//     b3 = input();
//     strcpy(b2.title, "java");
//     b2.price = 200.0;
//     display(b1);
//     display(b2);
//     display(b3);
// }
// void display(struct Book b)
// {
//     printf("\n%d %s %f", b.bookid, b.title, b.price);
// }
// struct Book input()
// {
//     struct Book b;
//     printf("\nenter bookid,title and price respectively :");
//     scanf("%d", &b.bookid);
//     fflush(stdin);
//     gets(b.title);
//     scanf("%f", &b.price);
//     return b;
// }
// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     int RollNo;
//     char name[30];
//     float marks;
// };
// struct Student input();
// void display(struct Student);
// int main()
// {
//     struct Student s1 = {01, "Chandan kumar", 99.9};
//     struct Student s2, s3;
//     s2.RollNo = 02;
//     strcpy(s2.name, "Gopal kumar");
//     s2.marks = 100.0;
//     s3 = input();
//     display(s1);
//     display(s2);
//     display(s3);
// }
// struct Student input()
// {
//     struct Student s;
//     printf("\nEnter RollNo,name and marks respectively:");
//     scanf("%d", &s.RollNo);
//     fflush(stdin);
//     gets(s.name);
//     scanf("%f", &s.marks);
//     return s;
// }
// void display(struct Student s)
// {
//     printf("\n%d %s %f ", s.RollNo, s.name, s.marks);
// }
// #include<stdio.h>
// #include<string.h>
// struct Account
// {
//     int customerid;
//     char name[30];
//     float balance;
// };
// struct Account input();
// void display(struct Account a);
// int main()
// {
//     struct Account a1 = {1, "Ramesh kumar", 2000.0};
//     struct Account a2,a3;
//     a2.customerid = 3;
//     strcpy(a2.name, "Prem chandra sah");
//     a2.balance = 13000.5;
//     a3=input();
//     display(a1);
//     display(a2);
//     display(a3);
// }
// struct Account input()
// {
//     struct Account a;
//     printf("\nEnter your customerid,name and balance respectively:");
//     scanf("%d", &a.customerid);
//     fflush(stdin);
//     gets(a.name);
//     scanf("%f", &a.balance);
//     return a;
// }
// void display(struct Account a)
// {
//     printf("\n%d %s %f", a.customerid, a.name, a.balance);
// }
// #include<stdio.h>
// #include<string.h>
// struct Book
// {
//     int bookid;
//     char title[20];
//     float price;
// };
// void input(struct Book *);
// void SortByPrice(struct Book *, int);
// void display(struct Book);
// int main()
// {
//     struct Book b[5];
//     printf("\nenter data for five books:");
//     int i;
//     for (i = 0; i <= 4;i++)
//     {
//         input(&b[i]);
//     }
//     SortByPrice(b, 5);
//     for (i = 0; i <= 4;i++)
//     {
//         display(b[i]);
//     }
// }
// void SortByPrice(struct Book *p,int size)
// {
//     int i, r;
//     struct Book temp;
//     for (r = 1; r < size;r++)
//     {
//         for (i = 0; i <= size - r - 1;i++)
//         {
//             if((p+i)->price>(p+i+1)->price)
//             {
//                 temp = *(p + i);
//                 *(p + i) = *(p + i + 1);
//                 *(p + i + 1) = temp;
//                 //swap(*(p + i), *(p + i + 1));
//             }
//         }
//     }
// }
// void input( struct Book *p)
// {
//     printf("\nenter bookid,title and price:");
//     scanf("%d", &p->bookid);
//     fflush(stdin);
//     gets(p->title);
//     scanf("%f", &p->price);
// }
// void display(struct Book b)
// {
//     printf("\n%d %s %f", b.bookid, b.title, b.price);
// }
// #include <stdio.h>
// #include <string.h>
// struct Salary
// {
//     int empid;
//     char name[20];
//     float balance;
// };
// void display(struct Salary);
// void Sort_by_Salary(struct Salary *, int);
// void input(struct Salary *);
// int main()
// {
//     struct Salary s[5];
//     printf("enter data of five employee:");
//     int i;
//     for (i = 0; i <= 4; i++)
//     {
//         input(&s[i]);
//     }
//     Sort_by_Salary(s, 5);
//     for (i = 0; i <= 4; i++)
//     {
//         display(s[i]);
//     }
// }
// void Sort_by_Salary(struct Salary *p, int size)
// {
//     int i, r;
//     struct Salary temp;
//     for (r = 1; r < size; r++)
//     {
//         for (i = 0; i <= size - 1 - r; i++)
//         {
//             if ((p + i)->balance > (p + i + 1)->balance)
//             {
//                 temp = *(p + i);
//                 *(p + i) = *(p + i + 1);
//                 *(p + i + 1) = temp;
//             }
//         }
//     }
// }

// void input(struct Salary *p)
// {
//     printf("\nenter your emid,name and salary: ");
//     scanf("%d", &p->empid);
//     fflush(stdin);
//     gets(p->name);
//     scanf("%f", &p->balance);
// }
// void display(struct Salary s)
// {
//     printf("\n%d %s %0.2f", s.empid, s.name, s.balance);
// }
// #include‹stdio.h›
// int main()
// {
//     struct site
//     {
//         char name[] = "GeeksQuiz";
//         int no_of_pages = 200;
//     };
//     struct site *ptr;
//     printf("%d ", ptr->no_of_pages);
//     printf("%s", ptr->name);
//     getchar();
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     float age, ageInSeconds;
//     int value;
//     printf("Enter your age : ");
//     value = scanf("%f", &age);
//     if (value == 0)
//     {
//         printf("\nYour age is not valid");
//     }
//     ageInSeconds = 365 * 24 * 60 * 60 * age;
//     printf("\nYou have lived for %f seconds", ageInSeconds);
// }
// #include"stdio.h"
// int main()
// {
//     struct tree
//     {
//         int h;
//         int w;
//     };
//     struct tree tree1={10};
//     printf("%d ",tree1.w);
//     printf("%d",tree1.h);
//     return 0;
// }
// #include <stdio.h>

// // create Employee structure
// struct Employee
// {
//     // define the member of the structure
//     char name[30];
//     int id;
//     int age;
//     char gender[30];
//     char city[40];
// };

// // define the variables of the Structure with pointers
// struct Employee emp1, emp2, *ptr1, *ptr2;

// int main()
// {
//     // store the address of the emp1 and emp2 structure variable
//     ptr1 = &emp1;
//     ptr2 = &emp2;

//     printf(" Enter the name of the Employee (emp1): ");
//     scanf(" %s", &ptr1->name);

//     printf(" Enter the id of the Employee (emp1): ");
//     scanf(" %d", &ptr1->id);
//     printf(" Enter the age of the Employee (emp1): ");
//     scanf(" %d", &ptr1->age);
//     printf(" Enter the gender of the Employee (emp1): ");
//     scanf(" %s", &ptr1->gender);
//     printf(" Enter the city of the Employee (emp1): ");
//     scanf(" %s", &ptr1->city);

//     printf(" \n Second Employee: \n");
//     printf(" Enter the name of the Employee (emp2): ");
//     scanf(" %s", &ptr2->name);

//     printf(" Enter the id of the Employee (emp2): ");
//     scanf(" %d", &ptr2->id);
//     printf(" Enter the age of the Employee (emp2): ");
//     scanf(" %d", &ptr2->age);
//     printf(" Enter the gender of the Employee (emp2): ");
//     scanf(" %s", &ptr2->gender);
//     printf(" Enter the city of the Employee (emp2): ");
//     scanf(" %s", &ptr2->city);

//     printf("\n Display the Details of the Employee using Structure Pointer");
//     printf("\n Details of the Employee (emp1) \n");
//     printf(" Name: %s\n", ptr1->name);
//     printf(" Id: %d\n", ptr1->id);
//     printf(" Age: %d\n", ptr1->age);
//     printf(" Gender: %s\n", ptr1->gender);
//     printf(" City: %s\n", ptr1->city);

//     printf("\n Details of the Employee (emp2) \n");
//     printf(" Name: %s\n", ptr2->name);
//     printf(" Id: %d\n", ptr2->id);
//     printf(" Age: %d\n", ptr2->age);
//     printf(" Gender: %s\n", ptr2->gender);
//     printf(" City: %s\n", ptr2->city);
//     return 0;
// }
#include<stdio.h>
struct Student
{
    int id;
    char name[20];
    int age;
    char city[20];
    char gender[10];
};
int main()
{
    struct Student stu1,stu2,*ptr1,*ptr2;
    ptr1 = &stu1;
    ptr2 = &stu2;

}