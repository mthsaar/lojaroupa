#include <stdio.h>
int main() {
    float s1, s2;
    printf("Digite o valor em reais: ");
    scanf("%f", &s1);
    printf("O valor com aumento de 5%% é: %.2f\n", (s1*1.05));
    printf("O valor com aumento de 10%% é: %.2f\n", (s1*1.1));
    printf("O valor com aumento de 15%% é: %.2f\n", (s1*1.15));
    return 0;
    }
    