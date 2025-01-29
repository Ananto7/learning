#include <stdio.h>

int main() {
  int inputDetik;
  int jam;
  int menit;
  int detik;

  printf("Masukan nilai Detik : ");
  scanf("%d", &inputDetik);

  // Logic
  jam = inputDetik / 3600;
  detik = inputDetik - (jam * 3600);
  menit = detik / 60;
  detik = detik - (menit * 60);

  printf("=== Output ===\n");
  printf("Hasil konversi = %d jam %d menit %d detik\n", jam, menit, detik);
  return 0;
}