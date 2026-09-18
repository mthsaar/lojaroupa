#include <stdio.h>
#include <string.h>

void cadastro();
void login();
void carrinho();
void pagamento();
void relatorio();

char nomecad[100], emailcad[100], cpfcad[12],email[100], tamanho, cupom[20];
int senhacad, senha, produto, quantidade, opcao, continuar, contador = 0, opcupom, pgto, continuar_compra = 1, quantTotal=0, login2;
float total = 0, preco, ttotal = 0;

int main() { 
    printf("Bem vindo a Casuality!\n");
    printf("Selecione uma opção:\n");
    printf("1 - Cadastrar cliente\n");
    printf("2 - Fazer login\n");
    printf("3 - Relatório\n");
    printf("4 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        cadastro();
        //cadastrar cliente
    } else if (opcao == 2) {
        login();
        //login
    } else if (opcao == 3) {
        relatorio();
        //relatório
    } else if (opcao == 4) {
        printf("Saindo do sistema...\n");
        return 0;
    } else {
        printf("Opção inválida!\n");
    }
    return 0;
}


    //sistema cadastro de clientes
    void cadastro() {
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
        printf("Cadastro realizado com sucesso! Seguir para login? 1 - Sim ou 0 - Não\n");
        scanf("%d", &continuar);
        if (continuar == 1) {
            printf("Seguindo para login...\n");
            login();

        } else if (continuar == 0) {
            printf("Saindo do sistema...\n");
            return;
        } else {
            printf("\nOpcao inválida!");
            return;
        }
    }

    void login() {    
        printf("\nBem vindo ao sistema de login da Casuality!\n");
        printf("\nLogin:\n ");
        printf("\nEmail: ");
        scanf("%99s", email);
        printf("Senha: ");
        scanf("%d", &senha);
            //verificador login
        if (strcmp(email, emailcad)==0 && senha == senhacad) {
        printf("Seus dados estão corretos!");
        carrinho();
        } else {
            printf("\nSeus dados estão incorretos!  Por favor, tente novamente!");
            printf("\nDigite 1 para retornar ao login");
            printf("\nDigite 2 para retornar ao cadastro");
            scanf("%d", &login2);
            if (login2 == 1) {
                login();
            } else if (login2 == 2) {
                cadastro();
            } else {
                printf("\nOpcao inválida!");
                return;
            }
        }
    }

    //carrinho de compra
   void carrinho() {
        printf("\nBem vindo ao carrinho da Casuality, essas são as opções disponíveis:\n");
        printf("1 - Camisa Polo - R$ 99.99\n");
        printf("2 - Camiseta basica - R$ 132.99\n");
        printf("3 - Calca jeans - R$ 84.99\n");
        printf("4 - Moletom preto - R$ 199.99\n");
        printf("5 - Jaqueta - R$ 59.99\n");
    
        while (continuar_compra == 1) {
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

            printf("\nProduto adicionado ao carrinho!\n");
            printf("\nDeseja adicionar outro produto? Digite 1 - Sim ou 0 - Não\n");
            scanf("%d", &continuar_compra);
        }

        printf("Total do carrinho: R$ %.2f\n", total);
        pagamento();
    }
    

    void pagamento() {
       printf("\nVocê possui cupom de desconto? Digite 1 - Sim ou 0 - Não\n ");
       scanf("%d", &opcupom);
       if (opcupom == 1) {
            printf("Digite o cupom de desconto: ");
            scanf(" %19s", cupom);
            if (strcmp(cupom, "PROMO10") == 0) {
            total = total - (total * 0.10f);
            printf("O valor com desconto é de %.2f reais\n", total);
            } else {
            printf("Cupom inválido! O valor sem desconto é de %.2f reais\n", total);
            }
        } else {
        printf("O valor sem desconto é de %.2f reais\n", total);
        }  

        printf("\nSelecione a forma de pagamento: 1 - Pix, 2 - Débito, 3 - Crédito: ");
        scanf("%d", &pgto);
        printf("\nPagamento realizado com sucesso! Obrigado por comprar na Casuality!\n");
        ttotal = ttotal + total;
        contador = contador + 1;
        quantTotal = quantTotal+quantidade;
        main();
    }
  
    void relatorio() {
        printf("Relatório de vendas:\n");
        printf("Total de vendas: R$ %.2f\n", ttotal);
        printf("Total de produtos vendidos: %d\n", contador);
        printf("Total de itens vendidos: %d\n", quantTotal);
        main();
    }
