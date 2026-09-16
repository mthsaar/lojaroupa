#include <stdio.h>
#include <string.h>

int main()
{
    //variáveis
    char nomecad[100], emailcad[100], cpfcad[12],email[100], tamanho[1];
    int senhacad, senha, produto, quantidade, opcao, continuar = 1;
    float total = 0, preco;
    
    printf("Bem vindo a Casuality!\n");
    printf("Selecione uma opção:\n");
    printf("1 - Cadastrar cliente\n");
    printf("2 - Fazer login\n");
    printf("3 - Carrinho de compras\n");
    printf("4 - Pagamento\n");
    printf("5 - Relatório\n");
    printf("6 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        cadastro();
        //cadastrar cliente
    } else if (opcao == 2) {
        login();
        //login
    } else if (opcao == 3) {
        carrinho();
        //carrinho de compras
    } else if (opcao == 4) {
        pagamento();
        //pagamento
    } else if (opcao == 5) {
        relatorio();
        //relatório
    } else if (opcao == 6) {
        printf("Saindo do sistema...\n");
        return 0;
    } else {
        printf("Opção inválida!\n");
    }


    //sistema cadastro de clientes
    cadastro(
        printf("Bem vindo ao sistema de cadastro de clientes da Casuality!\n");
        printf("Digite seu nome completo: ");
        scanf(" %99[^\n]", nomecad);
        printf("Digite seu email: ");
        scanf(" %99s", emailcad);
        printf("Digite sua senha: ");
        scanf("%d", &senhacad);
        printf("Digite seu CPF: ");
        scanf("%11s", cpfcad);
    
        printf("\nEsses seus dados cadastrados: \n");
        printf("\nNome: %s\n", nomecad);
        printf("email: %s\n", emailcad);
        printf("Senha: %d\n", senhacad);
        printf("CPF: %s\n ", cpfcad);
    );

    login(    
    //Sistema de login
        while(1) {
        printf("\nBem vindo ao sistema de login da Casuality!\n");
        printf("\nLogin:\n ");
        printf("\nEmail: ");
        scanf("%99s", email);
        printf("Senha: ");
        scanf("%d", &senha);
        //verificador login
        if (strcmp(email, emailcad)==0 && senha == senhacad) {
            printf("Seus dados estão corretos!");
            break;
        } else {
        printf("Seus dados estão incorretos!  Por favor, tente novamente!");
        }
        }
    );

 //carrinho de compra

    
    carrinho(
        printf("\nBem vindo ao carrinho da Casuality, essas são as opções disponíveis:\n");
        printf("1 - Camisa Polo - R$ 99.99\n");
        printf("2 - Camiseta basica - R$ 132.99\n");
        printf("3 - Calca jeans - R$ 84.99\n");
        printf("4 - Moletom preto - R$ 199.99\n");
        printf("5 - Jaqueta - R$ 59.99\n");
    
        while (continuar == 1) {
        printf("Escolha o produto: ");
        scanf("%d", &produto);

            switch (produto) {
                case 1:
                    preco = 99.99;
                    break;
                case 2:
                    preco = 132.99;
                    break;
                case 3:
                    preco = 84.99;
                    break;
                case 4:
                    preco = 199.99;
                    break;
                case 5:
                    preco = 59.99;
                    break;
                default:
                    printf("Produto invalido!\n");
                continue;
            }
        printf("\nEscolha o tamanho: P - Pequeno, M - Medio, G - Grande\n");
        scanf(" %c", &tamanho);
        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        total = total + (preco * quantidade);

        printf("Produto adicionado ao carrinho!\n");
        printf("\nDeseja adicionar outro produto? 1 - Sim ou 0 - Não\n");
        scanf("%d", &continuar);
        }

        printf("Total do carrinho: R$ %.2f\n", total);
        return total;
    );
    
    //pagamento
    int opcupom;
    float v1 = 0.0f;
    float v2 = 0.0f;
    char cupom[7];
    float polo;
    float cbasica;
    float cjeans;
    float moletom;
    float jaqueta;

    printf("Você possui cupom de desconto? S/N: ");
    scanf(" %19s", opcupom);
    printf("Digite um cupom válido: ");
    scanf(" %19s", cupom);

    if (strcmp(cupom, "promo10") == 0 || strcmp(cupom, "PROMO10") == 0) {
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
