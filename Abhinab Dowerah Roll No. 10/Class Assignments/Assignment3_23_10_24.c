date: 23/10/24

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>


struct Student

{

char name[15];

int math;

int science;

int english;

};

struct TotalMarks

{ 

int totalMarks;

}

main ()

{

struct Student std;

int total_score;

printf("Enter the student details: \n"); printf("Enter the name of the student: \n");

scanf("%s", std.name); // fgets(std.name);

printf("Enter the marks scored in Maths: \n");

scanf("%d", &std.math);

printf("Enter the marks scored in Science: \n");

scanf("%d", &std.science);

printf("Enter the marks scored in English: \n");

scanf("%d", &std.english);

total_score = total(&std);

printf("\n %s scored %d out of 300. \n", std.name, total_score);

}

total(struct Student "s, struct TotalMarks *t)

{

t->totalMarks s->maths->sciences->english;

return (t->totalMarks);

}
