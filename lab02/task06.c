#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

struct Container {
    union Data data;
    int type;
};
int main() {
    struct Container c;
    c.type = 0;
    c.data.i = 100;
    printf("Тип: int, значение: %d\n", c.data.i);
    
    c.type = 1;
    c.data.f = 99.9f;
    printf("Тип: float, значение: %.2f\n", c.data.f);
    
    c.type = 2;
    c.data.c = 'Z';
    printf("Тип: char, значение: %c\n", c.data.c);

    printf("\nРазмер union Data: %zu байт\n", sizeof(union Data));
}