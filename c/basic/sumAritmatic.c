#include <stdio.h>

int main() {
  double nilaiPertama = 1;
  double nilaiKeN = 9;
  double nilaiResultN = 17;
  double nilaiSum;

  printf("Masukan nilai pertama: ");
  scanf("%lf", &nilaiPertama);
  printf("Masukan nilai Ke - N: ");
  scanf("%lf", &nilaiKeN);
  printf("Masukan nilai total Ke - N: ");
  scanf("%lf", &nilaiResultN);
  nilaiSum = (nilaiPertama + nilaiResultN) * nilaiKeN / 2;

  printf("Hasil Sum Aritmatik = %lf \n", nilaiSum);
}
