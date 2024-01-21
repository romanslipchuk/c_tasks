#include <stdio.h>

void print_revers(int number);

int main()
{
    int number;
    scanf("%d", &number);
    print_revers(number);
    return 0;
}

/*void print_revers(int number)
{
    int reverse;
    reverse = number / 100000 + \
              (number % 10) * 100000 + \
              ((number / 10) % 10) * 10000 + \
              ((number / 100) % 10) * 1000 + \
              ((number / 1000) % 10) * 100 + \
              ((number / 10000) % 10) * 10;
    printf("%d", reverse);
}*/

void print_revers(int number)
{
    printf("%d", number % 10);
    number /= 10;
    printf("%d", number % 10);
    number /= 10;
    printf("%d", number % 10);
    number /= 10;
    printf("%d", number % 10);
    number /= 10;
    printf("%d", number % 10);
    number /= 10;
    printf("%d", number % 10);
    number /= 10;
    printf("\n");
}