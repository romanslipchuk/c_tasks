//
// Created by romasl on 24.10.22.
//

#include "inchtocm.h"


int main() {
    int inch;
    printf("Input length in inches:\n");
    scanf("%d", &inch);
    printf("%.2lf cm\n", inch * 2.54);
    return 0;
}