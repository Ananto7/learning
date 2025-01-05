#include <stdio.h>

int main() {
  int grade1, grade2, grade3;
  double result;

  printf("Input grade 1:");
  scanf("%d", &grade1);
  printf("Input grade 2:");
  scanf("%d", &grade2);
  printf("Input grade 3:");
  scanf("%d", &grade3);

  result = (double)(grade1 + grade2 + grade3) / 3;
  printf("your Average = %.2lf \n", result);
}
