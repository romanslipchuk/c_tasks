#include <stdio.h>
#include <math.h>

int main() {
  int k;
  float res;

  scanf("%d", &k);
  
  res = 75 / (exp((log(2.0) * k) / 5570.0));
  printf("%.2lf\n", res);
  return 0;
}