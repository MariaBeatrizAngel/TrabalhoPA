#include <stdio.h>

long long dec_to_bin(int);
int bin_to_dec(long long);

int main(void) {
  long long b1, b2, respb;
  int d1, d2, respd;

  printf("Entre com o primeiro número binário: ");
  scanf("%lld", &b1);
  printf("Entre com o segundo número binário: ");
  scanf("%lld", &b2);

  d1 = bin_to_dec(b1);
  d2 = bin_to_dec(b2);

  respd = d1 + d2;
  respb = dec_to_bin(respd);
  printf("Resultado= %lld", respb);
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