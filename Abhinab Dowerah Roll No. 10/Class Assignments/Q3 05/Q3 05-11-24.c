#include <stdio.h>

union Data {
    int stud_id;
    char grade;
    float cgpa;
};

int main() {
    union Data data;
    
    data.stud_id = 101;
    printf("Student ID = %d\n",data.stud_id);

    data.grade = 'A';
    printf("Grade = %c\n", data.grade);

    data.cgpa = 6.5;
    printf("CGPA = %.2f\n", data.cgpa);

    return 0;
}
