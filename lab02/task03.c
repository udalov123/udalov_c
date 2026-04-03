#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};
struct Person {
    char *name;          
    struct Date birthDate;
};
struct Person persons[3] = {
    {"Дима", {22, 3, 1993}},
    {"Саша",   {2, 10, 2009}},
    {"Олег", {12, 11, 2002}}
};
int main() {
    for (int i = 0; i < 3; i++) {
        printf("%s, дата рождения: %02d.%02d.%d\n",
               persons[i].name,
               persons[i].birthDate.day,
               persons[i].birthDate.month,
               persons[i].birthDate.year);
    }

    printf("\nРодились после 2000:\n");
    for (int i = 0; i < 3; i++) {
        if (persons[i].birthDate.year > 2000) {
            printf("%s, %02d.%02d.%d\n",
                   persons[i].name,
                   persons[i].birthDate.day,
                   persons[i].birthDate.month,
                   persons[i].birthDate.year);
        }
    }
}