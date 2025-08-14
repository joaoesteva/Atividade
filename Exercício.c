#include <stdio.h>

int main(void) {
    float salario, imposto, percentual_imposto;

    printf("Digite o salário da pessoa: ");
    scanf("%f", &salario);
    
    if (salario <= 1903.98) {
        imposto = 0;
        percentual_imposto = 0;
    } else if (salario <= 2826.65) {
        imposto = salario * 0.075;
        percentual_imposto = 7.5;
    } else if (salario <= 3751.05) {
        imposto = salario * 0.15;
        percentual_imposto = 15;
    } else if (salario <= 4664.68) {
        imposto = salario * 0.225;
        percentual_imposto = 22.5;
    } else {
        imposto = salario * 0.275;
        percentual_imposto = 27.5;
    }

    printf("Salário: R$ %.2f\n", salario);
    printf("Percentual de imposto: %.2f%%\n", percentual_imposto);
    printf("Valor do imposto de renda: R$ %.2f\n", imposto);

    return 0;
}