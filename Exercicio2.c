#include <stdio.h>

int main(void) {
    double peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%lf", &peso);
    printf("Digite a altura (m): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2lf\n", imc);
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Classificação: Peso normal\n");
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 39.9) {
        printf("Classificação: Obesidade\n");
    } else {
        printf("Classificação: Obesidade grave\n");
    }
    
    return 0;
}
