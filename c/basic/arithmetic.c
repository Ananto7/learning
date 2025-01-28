#include <stdio.h>

int main() {
  int nilaiPertama;
  int nilaiSelisih;
  int nilaiKN;
  int resultNilaiKN;
  int resultNilaiSUM;

  printf("Masukan nilai pertama: ");
  scanf("%d", &nilaiPertama);

  printf("Masukan nilai selisih: ");
  scanf("%d", &nilaiSelisih);

  printf("Masukan nilai Ke - N: ");
  scanf("%d", &nilaiKN);

  // Logic arithmetic mencari nilai ke-N
  resultNilaiKN = nilaiPertama + (nilaiKN - 1) * nilaiSelisih;

  printf("==== Output 1 ====\n");
  printf("Hasil nilai Ke - N = %d\n", resultNilaiKN);

  // Logic arithmetic menghitung total/sum sampai ke-N (akumulasi)
  resultNilaiSUM = (nilaiPertama + resultNilaiKN) * (nilaiKN / 2);

  printf("==== Output 2 ====\n");
  printf("Hasil SUM aritmatik = %d\n", resultNilaiSUM);
  return 0;
}
