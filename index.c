#include <stdio.h> // biblioteca de entrada e saída

int main(void) {
  system("clear"); // apaga oque vem antes
  float SB, SF, GR, IMP; 
  printf("Declare o seu salário:"); // escreve na tela
  scanf("%f",&SB);  // pede uma variavel
  GR = SB * 5/100;
  IMP = SB * 7/100;
  SF = SB + GR - IMP;
  printf("O salaário final é de  %.2f\n",SF); // \n faz com qua vá pra baixo
  printf("A Gratificação é de  %.2f\n",GR);
  printf("O imposto é de  %.2f\n",IMP);
  return 0;
}