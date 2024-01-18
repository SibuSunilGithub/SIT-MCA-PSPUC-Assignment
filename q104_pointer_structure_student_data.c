/*
WAP In C To Store One Student Data In A Student Structure With 
The Members(Roll, Name, CGPA). And Print Their Data On Screen.
*/
#include <stdio.h>
// Student Structure
struct Student
{
    int roll;
    char name[21];
    float cgpa;
};

// Main Program...
int main()
{
    //
    struct Student S1;
    struct Student *ptr;
    ptr = &S1;

    //
    printf("Enter Student Roll: ");
    scanf("%d", &ptr->roll);
    printf("Enter Name: ");
    scanf(" %[^\n]s", ptr->name);
    printf("Enter CGPA: ");
    scanf("%f", &ptr->cgpa);

    //
    printf("%d\n", ptr->roll);
    printf("%s\n", ptr->name);
    printf("%.2f\n", ptr->cgpa);

    return 0;
}