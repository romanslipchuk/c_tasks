#include<stdio.h>
#include <math.h>
#include <assert.h>
#define EPS 0.0001      // требуемая точность сравнения

int eps(float a, float b)
{
    // float a, b;
    return fabs(a - b) < EPS;
}

float dist(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main()
{
   int x1, y1, x2, y2, x3, y3;            // координаты точек
   float triangle_area;                     // площадь

   scanf("%d%d", &x1, &y1);       // прочитали числа
   scanf("%d%d", &x2, &y2);
   scanf("%d%d", &x3, &y3);
   triangle_area = area(x1, y1, x2, y2, x3, y3);    // вызываем функцию area
   printf("%.3f\n", triangle_area);         // напечатать Площадь
   
   
   assert(eps(6.000, area(3, 0, 0, 4, 0, 0)));
   assert(eps(6.000, area(0, 4, 3, 0, 0, 0)));
   assert(eps(20.000, area(0, 1, 0, 5, 10, 2)));
   assert(eps(4.500, area(3, 0, 0, 4, 0, 1)));

   return 0;
}

float dist(int x1, int y1, int x2, int y2)
{
    float res;
    res = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return res;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float p, area;
    p = (dist(x1, y1, x2, y2) + dist(x1, y1, x3, y3) + dist(x2, y2, x3, y3)) / 2.0;
    area = sqrt(p * \
                (p - dist(x1, y1, x2, y2)) * \
                (p - dist(x1, y1, x3, y3)) * \
                (p - dist(x2, y2, x3, y3)));
    return area;
}