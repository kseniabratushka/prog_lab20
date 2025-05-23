#include <stdio.h>
#include <string.h>

#define SIZE 5

struct Student 
{
    char surname[30];
    char name[30];
    char group[10];
    float average_grade;
};

int main() 
{
    system("chcp 65001");
    struct Student students[SIZE] = {
        {"Іваненко", "Іван", "ІС-21", 4.2},
        {"Петренко", "Олена", "ІС-22", 3.4},
        {"Сидоренко", "Марія", "ІС-21", 3.8},
        {"Коваль", "Андрій", "ІС-23", 2.9},
        {"Шевченко", "Олег", "ІС-22", 4.0}
    };

    printf("Студенти з середнім балом вище 3.5:\n");

    for (int i = 0; i < SIZE; i += 1) 
    {
        if (students[i].average_grade > 3.5) 
        {
            printf("Прізвище: %s, Група: %s\n", students[i].surname, students[i].group);
        }
    }

    return 0;
}
