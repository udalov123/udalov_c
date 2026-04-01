#include <stdio.h>
struct Rectangle {
    float width;
    float height;
};
float area(struct Rectangle rect) {
    return rect.width * rect.height;
}

float perimeter(struct Rectangle rect) {
    return 2 * (rect.width + rect.height);
}
int main() {
    struct Rectangle rect = {5.5f, 3.2f};
    
    printf("Прямоугольник:\n");
    printf("  Ширина: %f\n", rect.width);
    printf("  Высота: %f\n", rect.height);
    printf("  Площадь: %f\n", area(rect));
    printf("  Периметр: %f\n", perimeter(rect));
}