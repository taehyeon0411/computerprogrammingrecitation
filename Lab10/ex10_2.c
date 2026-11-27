#include <stdio.h>

struct Student {
    int id;
    char name[30];
    int score;
};

int main(void)
{
    struct Student student;

    printf("Enter student ID: ");
    if (scanf("%d", &student.id) != 1)
        return 1;

    printf("Enter name: ");
    if (scanf("%29s", student.name) != 1)
        return 1;

    printf("Enter score: ");
    if (scanf("%d", &student.score) != 1)
        return 1;

    printf("\nStudent ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Score: %d\n", student.score);

    return 0;
}
