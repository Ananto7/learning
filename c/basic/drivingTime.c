#include <stdio.h>

int main() {
  int jarak;
  int kecepatan;
  int hasilWaktu;
  float speedInMinutes;
  float remainingMinutes;

  printf("Masukan nilai kecepatan: ");
  scanf("%d", &kecepatan);

  printf("Masukan total jarak: ");
  scanf("%d", &jarak);

  // Logic rumus mencari waktu
  hasilWaktu = jarak / kecepatan; // dalam KM/H
  speedInMinutes = kecepatan / 60.0; // dalam KM/M
  remainingMinutes = (jarak % kecepatan) / speedInMinutes; // [MIN] Units

  printf("Hasil waktu yg didapatkan = %d jam %.2f minutes\n", hasilWaktu, remainingMinutes);
  return 0;
}