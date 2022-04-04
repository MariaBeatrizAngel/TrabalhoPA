#include <stdio.h>

// Declaração das Funções
long long dec_to_bin(int);
int bin_to_dec(long long);

// ------------------------------
// MAIN -- ----------------------
// ------------------------------
int main(void) {
  long long b1, b2, respb;
  int d1, d2, respd, prog = 1;
  char op;

  while(prog == 1){
    prog = 0; // Reseta variável "Prog"
    printf("Entre com a operação(+. -, /, *) : ");
    scanf(" %c", &op); // Obtem operação
    printf("Entre com o primeiro número binário: ");
    scanf("%lld", &b1); // Obtem Binário 1
    printf("Entre com o segundo número binário: ");
    scanf("%lld", &b2); // Obtem Binário 2

    // Converte valores binários para decimáis
    d1 = bin_to_dec(b1); 
    d2 = bin_to_dec(b2);

    // Switch case da decisão da operação a ser realizada
    switch (op){
      case '+':
        respd = d1 + d2;
        break;
      case '-':
        respd = d1 - d2;
        break;
      case '/':
        respd = d1 / d2;
        break;
      case '*':
        respd = d1 * d2;
        break;
    }

    // Converte resposta em decimal para binário
    respb = dec_to_bin(respd);
    // Coloca a resposta da conta na tela
    printf("\nResposta em binário = %lld \n",respb);
    
    // Decisão de continuar as operações
    printf("-------- \n\n");
    printf("Digite 1 para continuar\nOu qualquer tecla para encerrar: ");
    scanf("%d", &prog);
    system("cls || clear"); // Limpa o console
  }
}

// ------------------------------
// FUNÇÕES ----------------------
// ------------------------------
int bin_to_dec(long long n) {
  // Função que converte de binário para decimal
  int dec = 0, i = 0, rem;

  // Loop de cálculos de conversão
  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

long long dec_to_bin(int n) {
  // Função que converte de decimal para binário
  long long bin = 0;
  int rem, i = 1;

  // Loop de cálculos de conversão
  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}