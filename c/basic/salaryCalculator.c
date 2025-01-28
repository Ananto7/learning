#include <stdio.h>

int main() {
  float salary;
  int totalHours;

  printf("Masukan bayaran per jam: ");
  scanf("%f", &salary);

  printf("Masukan total jam kerja yang kamu lakukan dalam sebulan: ");
  scanf("%d", &totalHours);

  printf("Your salary = %f\n", totalHours * salary);

  return 0;
}