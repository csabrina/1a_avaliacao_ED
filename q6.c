#include <stdio.h>

// QUESTÃO 6

int main(void) {
  
 char nome[30];
 double nota1, nota2, nota3, mf;
  
  printf("Digite seu nome:\n");
  scanf("%29[^\n]", &nome);
  
  printf("Digite sua primeira nota:\n");
  scanf("%lf", &nota1);
  
  printf("Digite sua segunda nota:\n");
  scanf("%lf", &nota2);
  
  printf("Digite sua terceira nota:\n");
  scanf("%lf", &nota3);


  mf = (nota1+nota2+nota3)/3;

  if (mf>=95){
    printf("\nO(a) aluno(a) %s obteve o conceito A", nome);
  }else if(mf >=70 && mf<=94){
    printf("\nO(a) aluno(a) %s obteve o conceito B", nome);
  } else if (mf>=50 && mf<=69){
    printf("\nO(a) aluno(a) %s obteve o conceito C", nome);
  }else{
    printf("\nO(A) aluno(a) %s obteve o conceito D", nome);
  }

printf("\nAs notas fornecidas como entrada foram: %.0lf, %.0lf e %.0lf com Média final: %.0lf\n", nota1, nota2, nota3, mf);

  return 0;
}
