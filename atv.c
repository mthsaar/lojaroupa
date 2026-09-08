#include <stdio.h>
#include <string.h>

int main()
{
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
    
    printf("\nSeus dados cadastrado: \n");
    
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
        printf("Seus dados estão corretos!");
        
        break;
    }    
        
    else {
        printf("Seus dados estão incorretos!  Por favor, tente novamente!");
    }
    }
    return 0;
}

    //cadastro

    //carrinho de compra
    
    
    //pagamento
    int pgto
    int v1
    int v2
    char cupom
    char polo == ID1
    char cbasica == ID2
    char cjeans == ID3
    char moletom == ID4
    char jaqueta == ID5

    V1 = (polo*ID1) + (cbasica*ID2) + (cjeans*ID3) + (moletom*ID4) + (jaqueta*ID5)

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
