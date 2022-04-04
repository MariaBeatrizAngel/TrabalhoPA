#include <stdio.h>

long long dec_to_bin(int);
int bin_to_dec(long long);

int main(void) {

  long long bin;
  int dec;

  printf("Entre com o número decimal: ");
  scanf("%d", &dec);

  bin = dec_to_bin(dec);
  printf(" %lld", bin);
}

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

long long dec_to_bin(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}