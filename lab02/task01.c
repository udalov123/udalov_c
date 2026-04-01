#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float average;
};

int main() {
    struct Student student1;
    scanf("%s", student1.name);
    scanf("%d", &student1.age);
    scanf("%f", &student1.average);
    printf("\nИнформация о студенте:\n");
    printf("%s, возраст %d лет, средний балл: %.2f\n", 
           student1.name, student1.age, student1.average);
}