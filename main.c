#include <stdio.h>

int bin_to_dec(long long);

int main(void) {

  long long bin;
  int dec;

  printf("Entre com o número binário: ");
  scanf("%lld", &bin);

  dec = bin_to_dec(bin);
  printf(" %d", dec);
}

// function definition
int bin_to_dec(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}