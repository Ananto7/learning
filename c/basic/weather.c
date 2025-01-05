#include <stdio.h>

int main() {

  double inCelcius, inFahrenheit;
  double resultInCelcius, resultInFahrenheint;

  printf("Input Celcius: ");
  scanf("%lf", &inCelcius);
  printf("Input Fahrenheit: ");
  scanf("%lf", &inFahrenheit);

  resultInCelcius = (inCelcius * 1.8) + 32;
  resultInFahrenheint = (inFahrenheit - 32) / 1.8;

  printf("--- Output --- \n");
  printf("result fahrenheit = %.2lf\n", resultInFahrenheint);
  printf("result celcius = %.2lf\n", resultInCelcius);
}
