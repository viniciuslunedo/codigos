#include <stdio.h>
#include <string.h>

#define QTD_CLIENTE 10
#define QTD_PRODUTO 10

char clientes[QTD_CLIENTE][50];
int qtd_clientes = 0;

char produtos[QTD_PRODUTO][50];
int qtd_produtos = 0;

void insere_cliente() {
    printf("nome do cliente\n");
    scanf("%s", clientes[qtd_clientes]);
    qtd_clientes++;
}

void listar_clientes() {

    for (int i = 0; i < qtd_clientes; i++) {
        printf("%s\n", clientes[i]);
    }
}

void insere_produto() {


    scanf("%s", produtos[qtd_produtos]);
    qtd_produtos++;

}


void insere_venda() {
    printf("   \n");
}







int main() {
    int opcao;

    do {
        printf("\nselecione uma opcao:\n");
        printf("0 - sair\n");
        printf("1 - inserir cliente\n");
        printf("2 - inserir produto\n");
        printf("3 - inserir venda\n");
        printf("4 - listar clientes\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                insere_cliente();
                break;
            case 2:
                insere_produto();
                break;
            case 3:
                insere_venda();
                break;
            case 4:
                listar_clientes();
                break;
            case 0:
                printf("encerrando o programa\n");
                break;
            default:
                printf("opcao invalida\n");
        }

    } while (opcao != 0);









    return 0;
}

