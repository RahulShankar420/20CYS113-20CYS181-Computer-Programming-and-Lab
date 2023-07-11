#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 3
int i;

struct student
{
    char name[50];
    int age;
    enum Grade
    {
        A,
        B,
        C,
        D
    } grade;
} stds[MAX_STUDENTS];

int addstudent(int i)
{
    i++;
    char score[5];
    printf("name:");
    scanf("%s", stds[i].name);
    printf("age:");
    scanf("%d", &stds[i].age);
    printf("score:");
    scanf("%s", score);
    if (strcmp(score, "A") == 0)
    {
        stds[i].grade = 0;
    }
    else if (strcmp(score, "B") == 0)
    {
        stds[i].grade = 1;
    }
    else if (strcmp(score, "C") == 0)
    {
        stds[i].grade = 2;
    }
    else if (strcmp(score, "D") == 0)
    {
        stds[i].grade = 3;
    }
    else if (strcmp(score, "F") == 0)
    {
        stds[i].grade = 4;
    }
    else
    {
        stds[i].grade = 4;
    }

    printf("Student added successfully.\n");

    return 0;
}
int display(struct student *stds, int i, int y)
{

    printf("List of students:\n");
    for (int i = 0; i <= y - 1; i++)
    {
        printf("Student %d \n", i + 1);
        printf("Name: %s \n", stds[i].name);
        printf("Age: %d \n", stds[i].age);
        if (stds[i].grade == 0)
        {
            printf("Score: A\n");
        }
        else if (stds[i].grade == 1)
        {
            printf("Score: B\n");
        }
        else if (stds[i].grade == 2)
        {
            printf("Score: C\n");
        }
        else if (stds[i].grade == 3)
        {
            printf("Score: D\n");
        }
        else if (stds[i].grade == 4)
        {
            printf("Score: F\n");
        }
        printf("\n");
    }
    return 0;
}
int findHighestScoringStudent(struct student *stds, int i, int y)
{
    printf("Highest-scoring student:\n");
    int hI = 0;
    for (int i = 0; i < y; i++)
    {
        if (stds[i].grade < stds[hI].grade)
        {
            hI = i;
        }
    }

    printf("Name: %s\n", stds[hI].name);
    printf("Age: %d\n", stds[hI].age);
    if (stds[hI].grade == 0)
    {
        printf("Score: A\n");
    }
    else if (stds[hI].grade == 1)
    {
        printf("Score: B\n");
    }
    else if (stds[hI].grade == 2)
    {
        printf("Score: C\n");
    }
    else if (stds[hI].grade == 3)
    {
        printf("Score: D\n");
    }
    else if (stds[hI].grade == 4)
    {
        printf("Score: F\n");
    }

    return 0;
}

int main()
{

    int choice, y = 0;
    int i = -1;
    printf("Press 1 2 3 or 4");

    do
    {
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            if (y == 3)
            {
                printf("Maximum number of students reached.\n");
            }
            else
            {
                addstudent(i);
                y = y + 1;
            }
            break;
        }

        case 2:
        {
            display(stds, i, y);
            break;
        }
        case 3:
        {

            findHighestScoringStudent(stds, i, y);
            break;
        }
        case 4:
        {
            printf("Exiting the program. Thank you for using our system!");
            break;
        }
        }
    } while (choice != 4);
}