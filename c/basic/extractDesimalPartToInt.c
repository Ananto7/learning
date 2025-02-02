#include <stdio.h>

int main() {
  double nilaiInput;
  double hasilExtract;

  printf("Masukan nilai desimal : ");
  scanf("%lf", &nilaiInput);

  // Logic
  hasilExtract = nilaiInput - (int)nilaiInput;

  printf("=== Output ===\n");
  printf("Hasil extract nilai desimal anda menjadi integer = %d\n", (int)nilaiInput);
  printf("Hasil extract nilai desimal anda = %.1lf\n", hasilExtract);

  return 0;
}