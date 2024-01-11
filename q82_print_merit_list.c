// WAP To Read The Name And CGPA Of 60 Students Of Class And Publish An Merit List Of All Students(With Nicely Formatted Manner).

#include <stdio.h>
#include <string.h>

int main()
{
    // Variables Initializations..
    int temp, i, j, n = 3;
    float cgpa[n];
    char name[n][51], nametemp[51];

    printf("\n-------- Enter Students Data ---------\n\n");
    for (i = 0; i < n; i++)
    {
        // Students Data Inputs...
        printf("Enter Student %d Name: ", i + 1);
        scanf(" %[^\n]s", name[i]);
        getchar();
        printf("Enter CGPA: ", i + 1);
        scanf("%f", &cgpa[i]);
    }
    // Sort cgpa With swapping the names...
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (cgpa[j] > cgpa[i])
            {
                // Swap results cgpa according to decending order
                temp = cgpa[i];
                cgpa[i] = cgpa[j];
                cgpa[j] = temp;

                // swap names with cgpa...
                strcpy(nametemp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], nametemp);
            }
        }
    }
    // print student merit list..
    printf("\n------- Student Merit List ---------\n\n");
    printf("Rank       Name                                        CGPA\n");
    printf("-----    ---------                                   --------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%-40s%10.2f\n", i+1, name[i], cgpa[i]);
    }
    return 0;
}