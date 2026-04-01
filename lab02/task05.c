#include <stdio.h>
enum Day {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};
struct Event {
    enum Day day;
};
int main() {
    enum Day today = WEDNESDAY;
    struct Event event = {FRIDAY};
    printf("Сегодня: ");
    switch (today) {
        case MONDAY:    printf("Понедельник\n"); break;
        case TUESDAY:   printf("Вторник\n"); break;
        case WEDNESDAY: printf("Среда\n"); break;
        case THURSDAY:  printf("Четверг\n"); break;
        case FRIDAY:    printf("Пятница\n"); break;
        case SATURDAY:  printf("Суббота\n"); break;
        case SUNDAY:    printf("Воскресенье\n"); break;
        default:        printf("Неизвестный день\n");
    }

    printf("День события: %d (пятница)\n", event.day);

}