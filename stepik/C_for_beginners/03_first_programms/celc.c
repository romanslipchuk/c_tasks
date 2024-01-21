#include <stdio.h>


float celsius(int fahr)
{
    float res;
    res = (fahr - 32) / 1.8;
    return res;
}


int main()
{
    int fahr;    // градусы Цельсия
    float c;    // градусы Фаренгейта


    // тест
    fahr = 0;
    c = celsius(fahr);
    printf("C = %.2f, F = %d\n", c, fahr);


    // для произвольного числа
    scanf("%d", &fahr);
    c = celsius(fahr);
    printf("C = %.2f, F = %d\n", c, fahr);


    return 0;
}