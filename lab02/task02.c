#include<stdio.h>

struct Student {
    char * name;
    int age;
    float score;
};
struct Student students[5] =
{
    {"Bogdan", 16, 4.8},
    {"Nemets", 17, 4.3},
    {"Marat", 15, 5},
    {"T1ma", 16, 4.6},
    {"Dima", 16, 3}
};
int main(){   
    for (int i=0; i<5; i++){
        printf("Name - %s, age - %d, score - %f\n", students[i].name, students[i].age, students[i].score);
    }
}