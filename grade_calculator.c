#include <stdio.h>

int main()
{
    char name[50];
    float m1, m2, m3;
    float total, percentage;

    printf("===== Student Grade Calculator =====\n\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks in Subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks in Subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks in Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n------ Result ------\n");
    printf("Student Name : %s\n", name);
    printf("Total Marks  : %.2f\n", total);
    printf("Percentage   : %.2f\n", percentage);

    if (percentage >= 90)
        printf("Grade        : A+\n");
    else if (percentage >= 80)
        printf("Grade        : A\n");
    else if (percentage >= 70)
        printf("Grade        : B\n");
    else if (percentage >= 60)
        printf("Grade        : C\n");
    else if (percentage >= 50)
        printf("Grade        : D\n");
    else
        printf("Grade        : Fail\n");

    return 0;
}