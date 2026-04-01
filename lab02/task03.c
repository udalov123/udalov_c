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
    {"Алексей", {15, 5, 1995}},
    {"Мария",   {23, 8, 2001}},
    {"Дмитрий", {10, 12, 2003}}
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