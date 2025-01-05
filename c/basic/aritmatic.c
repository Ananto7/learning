#include <stdio.h>

int main() {
  int nilaiPertama;
  int nilaiSelisih;
  int nilaiKN;
  int resultNilaiKN;

  printf("Masukan nilai pertama: ");
  scanf("%d", &nilaiPertama);

  printf("Masukan nilai selisih: ");
  scanf("%d", &nilaiSelisih);

  printf("Masukan nilai Ke - N: ");
  scanf("%d", &nilaiKN);

  resultNilaiKN = nilaiPertama + (nilaiKN - 1) * nilaiSelisih;

  printf("Hasil nilai Ke - N = %d\n", resultNilaiKN);
}
