#include <stdio.h>

int main() {
  int mod;
  printf("1 - Calcular o IMC \n2- Ver Tabela\n");
  scanf("%d", &mod);

  if (mod == 1){

    // Solicita o peso e a altura ao usuário
    float peso, altura;
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    // Calcula o IMC
    float imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f\n", imc);

    // Verifica a faixa de IMC e fornece recomendações de saúde
    if (imc < 18.5) {
        // Abaixo do peso ideal
        printf("Abaixo da média\n");
        printf("Recomenda-se procurar ajuda médica para avaliar sua nutrição e saúde geral.\n");
    } else if (imc >= 18.5 && imc < 25) {
        // Peso ideal
        printf("Na média\n");
        printf("Seu peso está dentro da faixa considerada saudável para a sua altura.\n");
        printf("No entanto, é recomendado manter um estilo de vida ativo e equilibrado.\n");
    } else {
        // Acima do peso ideal
        printf("Acima da média\n");
        printf("Recomenda-se procurar ajuda médica para discutir opções de gerenciamento de peso e estilo de vida.\n");
    }

    return 0;
  }
  if (mod == 2){

    printf("Relação entre Peso e Altura\n");
    printf("===========================\n");
    printf("Peso (kg)   |  Altura (m)\n");
    printf("---------------------------\n");

    // Loop para gerar a tabela com diferentes valores de peso e altura
    for (float peso = 40; peso <= 120; peso += 10) {
        for (float altura = 1.5; altura <= 2.1; altura += 0.05) {
            float imc = peso / (altura * altura);

            printf("%6.2f       |  %5.2f      |  ", peso, altura);

            // Verifica a faixa de IMC e imprime o status correspondente
            if (imc < 18.5) {
                printf("Abaixo da média\n");
            } else if (imc >= 18.5 && imc < 25) {
                printf("Na média\n");
            } else {
                printf("Acima da média\n");
            }
        }
        printf("---------------------------\n");
    }

    return 0;
  }
  else{
    printf("Comando Inválido\n Encerrando...\n");
    return 0;
  }
}
