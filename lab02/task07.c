#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum {
    FIRST = 1,
    SECOND,
    THIRD,
    FOURTH
} Course;

typedef struct {
    char name[50];
    int age;
    Course course;
    float avg_grade;
} Student;

void addStudent(Student **students, int *count, const char *name, int age, Course course, float avg_grade) {
    *students = realloc(*students, (*count + 1) * sizeof(Student));
    Student *s = &(*students)[*count];
    
    strncpy(s->name, name, 49);
    s->name[49] = '\0';
    s->age = age;
    s->course = course;
    s->avg_grade = avg_grade;
    
    (*count)++;
}

void printStudents(Student *students, int count) {
    if (count == 0) {
        printf("Список студентов пуст.\n");
        return;
    }
    
    printf("Список студентов:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s, %d лет, %d курс, средний балл: %f\n",
               i + 1, students[i].name, students[i].age, students[i].course, students[i].avg_grade);
    }
    printf("\n");
}

int findStudent(Student *students, int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void sortByAvgGrade(Student *students, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].avg_grade < students[j + 1].avg_grade) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    Student *students = NULL;
    int count = 0;
    addStudent(&students, &count, "Анна Иванова", 19, FIRST, 4.85f);
    addStudent(&students, &count, "Петр Сидоров", 20, SECOND, 4.12f);
    addStudent(&students, &count, "Мария Петрова", 18, FIRST, 4.93f);
    addStudent(&students, &count, "Алексей Смирнов", 21, THIRD, 3.75f);

    printf("Исходный список\n");
    printStudents(students, count);

    int idx = findStudent(students, count, "Мария Петрова");
    if (idx != -1) {
        printf("Найден студент: %s (балл %.2f)\n\n", students[idx].name, students[idx].avg_grade);
    }
    sortByAvgGrade(students, count);
    printf("После сортировки\n");
    printStudents(students, count);

    free(students);

}