#include <stdio.h>

int main() {
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
