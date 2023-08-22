#include <stdio.h>

int main() {
    float peso, altura;
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f\n", imc);

    return 0;
  }
