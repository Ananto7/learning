#include <stdio.h>

int main() {
  int grade1;
  int grade2;
  printf("Enter grade1: ");
  scanf("%d", &grade1);
  printf("Enter grade2: ");
  scanf("%d", &grade2);
  printf("Average = %d\n", (grade1 + grade2) / 2);
  return 0;
}
