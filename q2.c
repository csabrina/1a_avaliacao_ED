#include <stdio.h>

// QUESTAO 2

int main(void) {
  
  int num;
  
  printf("Digite um numéro entre 1 e 12:\n");
  scanf("%d", &num);
  
  if (num>=1 && num<=12){
    if(num==1){
      printf("Janeiro\n");
    }else if(num==2){
      printf("Fevereiro\n");
    }else if(num==3){
      printf("Março\n");
    }else if(num==4){
      printf("Abril\n");
    }else if(num==5){
      printf("Maio\n");
    }else if(num==6){
      printf("Junho\n");
    }else if(num==7){
      printf("Julho\n");
    }else if(num==8){
      printf("Agosto\n");
    }else if(num==9){
      printf("Setembro\n");
    }else if(num==10){
      printf("Outubro\n");
    }else if(num==11){
      printf("Novembro\n");
    }else{
      printf("Dezembro\n");
    }
  }else{
    printf("Numéro inválido.\n");
  } 

  return 0;
}
