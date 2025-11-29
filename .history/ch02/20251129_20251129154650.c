#include <stdio.h>

int main(void) {
    // 변수 
    int age = 14;
    int year;

    printf("year: %d\n", year);
    year = age + 2000;

    printf("age: %d\n", age);
    printf("year: %d\n", year);

    age += 1;
    printf("age: %d, year: %d\n", age, year);

    // 임시 변수 
    int x = 10; 
    int y = 20;
    int tmp;

    tmp = x;
    x = y;
    y = tmp;

    printf("x: %d, y: %d\n", x, y);
    return 0;
}