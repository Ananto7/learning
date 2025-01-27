#include <stdio.h>

int main() {
  float nilaiPertama;
  float nilaiKedua;
  float temp;

  printf("MasukanNilaiPertama: ");
  scanf("%f", &nilaiPertama);

  printf("MasukanNilaiKedua: ");
  scanf("%f", &nilaiKedua);

  printf("Before swap nilai pertama: %.2f\n", nilaiPertama);
  printf("Before swap nilai kedua: %.2f\n", nilaiKedua);

  // Logic swap
  temp = nilaiPertama;
  nilaiPertama = nilaiKedua;
  nilaiKedua = temp;

  printf("After swap nilai pertama: %.2f\n", nilaiPertama);
  printf("After swap nilai kedua: %.2f\n", nilaiKedua);
  return 0;
}