#include <stdio.h>

int main() {

  int numbers;
  int satuan;
  int puluhan;
  int ratusan;

  printf("Masukan Nilai digits yang di inginkan : ");
  scanf("%d", &numbers);

  // Logic mencari bilangan satuan puluhan ratusan
  satuan = numbers % 10;
  puluhan = (numbers / 10) % 10;
  ratusan = numbers / 100;

  printf("=== Output ===\n");
  printf("Hasil Penjumlahan angka digits = %d\n", (satuan + puluhan + ratusan));

  return 0;
}