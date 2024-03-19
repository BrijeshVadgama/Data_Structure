// 2 - Create an array of structure Student_Detail (Enrollment_no, Name, Sem, CPI) for 5 students, scan their information and print it.[B]

#include <stdio.h>
struct stud_details
{
    int stud_enroll_no;
    char stud_name[50];
    int stud_sem;
    float stud_cpi;
};
int main()
{
    struct stud_details s[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter Student Enrollment Number: ");
        scanf("%d", &s[i].stud_enroll_no);
        printf("Enter Student Name: ");
        scanf("%s", s[i].stud_name);
        printf("Enter Student Semester: ");
        scanf("%d", &s[i].stud_sem);
        printf("Enter Student CPI: ");
        scanf("%f", &s[i].stud_cpi);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\n\n Student Enrollment Number:: %d", s[i].stud_enroll_no);
        printf("\nStudent Name:: %s", s[i].stud_name);
        printf("\nStudent Semester:: %d", s[i].stud_sem);
        printf("\nStudent CPI:: %.1f", s[i].stud_cpi);
    }
    return 0;
}