#include <stdio.h>

int main() {
  int age;
  int currentYear;
  scanf("%d", &age);
  scanf("%d", &currentYear);
  printf("BirthYear: %d", (currentYear - age));
  return 0;
}
