#include <stdio.h>

int main() {
    float peso, altura;
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo da média\n");
        printf("Recomenda-se procurar ajuda médica\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Na média\n");
        printf("Seu peso está ideal para a sua altura, porem acompanhamento médico ainda e´recomendado\n");
    } else {
        printf("Acima da média\n");
        printf("Recomenda-se procurar ajuda médica\n");
    }

    return 0;
}
