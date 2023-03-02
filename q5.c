#include <stdio.h>

// QUESTAO 5

int main(void) {
  
  double valorInicial, valorFinal, valorParcela;
  int qntParcelas;

  printf("Digite o valor da compra:\n");
  scanf("%lf", &valorInicial);
  printf("Digite a quantidade de parcelas desejadas:\n");
  scanf("%d", &qntParcelas);

  if( qntParcelas == 1){
    valorFinal = valorInicial*0.9;
    valorParcela = valorFinal;
  }else{
    valorFinal= valorInicial*1.50;
    valorParcela = valorFinal/qntParcelas;
  }
  
  printf("\n---------------------------------------------\n");
  printf("\nValor inicial da compra: %.2lf\nValor final da compra: %.2lf\nQuantidade de parcelas: %d\nValor por parcela: %.2lf\n", valorInicial, valorFinal, qntParcelas, valorParcela);

  return 0;
}