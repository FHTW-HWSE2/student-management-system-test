#ifndef STUDENT_H
#define STUDENT_H


typedef struct {
    int semester;
    float grades[10]; // A student can have up to 10 grades per semester
} semester_grades;

typedef struct {
    char first_name[50];
    char last_name[50];
    char birthdate[11]; // Format: YYYY-MM-DD
    char email[100];
    int id;
    int enrollment_status; // 0 for not enrolled, 1 for enrolled
    char course_list[10][50]; // A student can have up to 10 courses, each with a max length of 50 characters
    semester_grades semesters[8]; // Assuming a student can have up to 8 semesters of grades
} student;


#endif // STUDENT_H
