#include <stdio.h>
#include <string.h>

int main() {
    
    //cadastro

    //carrinho de compra
    
    
    //pagamento
    int pgto
    int v1
    int v2
    char cupom
    char polo
    char cbasica
    char cjeans
    char moletom
    char jaqueta

    V1 = (polo*50) + (cbasica*30) + (cjeans*80) + (moletom*100) + (jaqueta*150)

    printf("O valor total da compra foi de %d reais", v1)
    printf("Você possui cupom de desconto? S/N")
    scanf("%c", &cupom)
    if (cupom == "PROMO10")
    {
       v2 = v1 - (v1*0.10)
       printf("O valor com desconto é de %d reais", v2)
    } else { 
        v2 = v1
    }
    printf("Selecione a forma de pagamento: 1 - Pix, 2 - Débito, 3 - Crédito")
    scanf("%d", &pgto)

    //relatório



return 0;
}
