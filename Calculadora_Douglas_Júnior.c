#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("\nDigite dois numeros para somar: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("\n%.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                printf("\nDigite dois numeros para subtrair: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("\n%.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                printf("\nDigite dois numeros para multiplicar: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("\n%.2f x %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                printf("\nDigite dois numeros para dividir: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("\nErro: Nao ha divisao por zero\n");
                } else {
                    resultado = num1 / num2;
                    printf("\n%.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
            case 5:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida\n");
        }
    } while (opcao != 5);

    return 0;
}
