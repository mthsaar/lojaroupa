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
