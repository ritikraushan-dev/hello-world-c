#include <stdio.h>

int main(){


 int Roll_number;
 int Age;
 int Hindi_Marks;
 int English_Marks;
 int Math_Marks;
 int Sci_Marks;
 int Sst_Marks;



 printf("enter Roll_number :\n :");
 printf("enter Age :\n :");
 printf("enter Hindi_Marks :\n :");
 printf("enter English_Marks :\n :");
 printf("enter Math_Marks :\n :");
 printf("enter Sci_Mark :\n :");
 printf("enter Sst_Marks :\n :");




    scanf(" %d", &Roll_number);
    scanf(" %d", &Age);
    scanf(" %d", &Hindi_Marks);
    scanf(" %d", &English_Marks);
    scanf(" %d", &Math_Marks);
    scanf(" %d", &Sci_Marks);
    scanf(" %d", &Sst_Marks);


    printf("-: Student Report Card :-\n");
  printf("Student Name :- Ritik\n");
  printf("Roll_number is :- %d\n" ,Roll_number );
  printf("Age is :- %d\n" ,Age );
  printf("Hindi_Marks is :- %d\n" ,Hindi_Marks );
  printf("English_Marks is :- %d\n" ,English_Marks );
  printf("Sci_Marks is :- %d\n" ,Sci_Marks );
  printf("Sst_Marks is :- %d\n" ,Sst_Marks );
  printf("Math_Marks is :- %d\n" ,Math_Marks );
 int Total_Marks = Hindi_Marks+English_Marks+Math_Marks+Sci_Marks+Sst_Marks;
 printf("Total Marks %d\n", Total_Marks);
 float percentage = (Total_Marks / 500.0) *100;
 printf("Percentage %.2f\n", percentage);
 

//  int a,b;
//  printf("enter a:\n");
//  scanf("%d", &a);
//  printf("enter b :\n");
//  scanf("%d", &b);

//   int Addition = a+b;
//   printf("Addition is :%d\n", a+b);

//  return 0;


// int a,b; 
//  printf("enter a:\n");
//  scanf("%d", &a);
//  printf("enter b :\n");
//  scanf("%d", &b);

//  int multiplication = a*b;
//  printf("multiplication is :%d\n", a*b);
//  return 0;
// }

// int a,b; 
//  printf("enter a:\n");
//  scanf("%d", &a);
//  printf("enter b :\n");
//  scanf("%d", &b);

//  int subtraction = a-b;
//  printf("subtraction is :%d\n", a-b);

//  return 0;
// }

// int a,b; 
//  printf("enter a:\n");
//  scanf("%d", &a);
//  printf("enter b :\n");
//  scanf("%d", &b);

//  int Remainder = a%b;
//  printf("Remainder is :%d\n", a%b);

  return 0; 
} 