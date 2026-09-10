#include <stdio.h>
#include <string.h>

int main() {
    
    char nomecad[100], emailcad[100], cpfcad[12],email[100];
    int senhacad, senha;
    
    //sistema cadastro de clientes
    
    printf("Nome completo: ");
    scanf(" %99[^\n]", nomecad);

    printf("Email: ");
    scanf(" %99s", emailcad);
    
    printf("Senha: ");
    scanf("%d", &senhacad);
    
    printf("CPF: ");
    scanf("%11s", cpfcad);
    
    printf("\nSeus dados de cadastro: \n");
    
    printf("\nNome: %s\n", nomecad);
    printf("email: %s\n", emailcad);
    printf("Senha: %d\n", senhacad);
    printf("CPF: %s\n ", cpfcad);
    
    //Sistema de login
    
    while(1) {
    
    printf("\nLogin:\n ");
    
    printf("\nEmail: ");
    scanf("%99s", email);
    
    printf("Senha: ");
    scanf("%d", &senha);
    
    //verificador login
    
    
    if (strcmp(email, emailcad)==0 && senha == senhacad) {
        printf("Seus dados estão corretos! Por favor, tente novamente!");
        
        break;
    }    
        
    else {
        printf("Seus dados estão incorretos!");
    }
    }

    //cadastro

    //carrinho de compra
    
    
    //pagamento
    int pgto;
    float v1 = 0.0f;
    float v2 = 0.0f;
    char cupom;
    float polo;
    float cbasica;
    float cjeans;
    float moletom;
    float jaqueta;

    printf("O valor total da compra foi de %.2f reais\n", v1);
    printf("Você possui cupom de desconto? S/N: ");
    scanf(" %c", &cupom);

    if (cupom == 'promo10' || cupom == 'PROMO10') {
        v2 = v1 - (v1 * 0.10f);
        printf("O valor com desconto é de %.2f reais\n", v2);
    } else {
        v2 = v1;
        printf("O valor sem desconto é de %.2f reais\n", v2);
    }

    printf("Selecione a forma de pagamento: 1 - Pix, 2 - Débito, 3 - Crédito: ");
    scanf("%d", &pgto);

    //relatório



return 0;
}
