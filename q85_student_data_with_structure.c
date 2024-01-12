/*
WAP In C To Input Students Data Like Roll No, Name, Gender, CGPA And Mobile No. In a Structure And Print The Data In Nicely Formatted Manner.
*/

#include <stdio.h>
// Student Structure
struct Student
{
    short int roll;
    char name[41];
    char gender;
    float cgpa;
    char mob[15];
};

int main()
{
    // Variable Initialization Sections...
    int n, i;
    printf("Enter The Number Of Students: ");
    scanf("%d", &n);
    printf("\n");
    struct Student Stu[n];

    // Taking Student Data Inputs...
    for (i = 0; i - n; i++)
    {
        printf("Enter Student %d Roll No: ", i + 1);
        scanf("%d", &Stu[i].roll);
        printf("Enter Name: ");
        scanf(" %[^\n]s", Stu[i].name);
        printf("Enter Gender(M/F/O): ");
        scanf(" %c", &Stu[i].gender);
        printf("Enter CGPA: ");
        scanf("%f", &Stu[i].cgpa);
        printf("Enter Mobile No: ");
        scanf(" %[^\n]s", Stu[i].mob);
        printf("\n");
    }
    // Print All Student Data...
    printf("\n---------------------------Students Data--------------------------\n\n");
    printf("Sl.\tRoll\tName\t\t\t\t\t\tGender\tCGPA\tMob\n");
    for (i = 0; i - n; i++)
    {
        printf("%d\t%d\t%-40s\t%c\t%.2f\t%s\n", i + 1, Stu[i].roll, Stu[i].name, Stu[i].gender, Stu[i].cgpa, Stu[i].mob);
    }
    return 0;
}