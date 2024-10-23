// date: 23/10/24

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>



struct Student

{

char name [20];

int age;

char grade [5];

};



main ()

{

struct Student std;


printf("Enter the student details: \n");

printf("Enter the name of the student: \n");

scanf("%s", std.name);



printf("Enter age: \n");

scanf("%d", &std.age);

printf("Enter grade: \n");

scanf("%s", &std.grade);



}

display(struct Student *s)
{

printf("\nStudent Details: \n");

printf("Student name: %s \n",s->name);

printf("Student age: %d \n",s->age); printf("Student grade: %s \n",s->grade);

return(0);

}
