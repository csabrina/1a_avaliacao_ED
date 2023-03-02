#include <stdio.h>

// QUESTAO 3

int main(void) {
  
  char garcom[30];
  int mesa, integrantes;
  double valorInicial, valorFinal, valorIntegrante, gorjeta;

  printf("Digite o nome do garçom:\n");
  scanf("%29[^\n]", &garcom);
  printf("Digite o número da mesa:\n");
  scanf("%d", &mesa);
  printf("Digite o valor inical da conta:\n");
  scanf("%lf", &valorInicial);
  printf("Digite o número de integrandes da mesa:\n");
  scanf("%d", &integrantes);


  valorFinal = valorInicial*1.10;
  gorjeta = valorInicial*0.1;
  valorIntegrante = valorFinal/integrantes;

  printf("\n---------------------------------------------\n");
  printf("\nGarçom: %s\nMesa: %d\nValor inicial da conta: %.2lf\nIntegrantes: %d\n", garcom, mesa, valorInicial, integrantes);
  printf("\nO valor final da sua conta é de: %.2lf\nA gorjeta do garçom é de: %.2lf\nCada integrante deverá pagar: %.2lf\n", valorFinal, gorjeta, valorIntegrante);
  
  return 0;
}
