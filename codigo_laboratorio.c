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
  if (qtd_clientes == 0) {
        printf("nenhum cliente cadastrado\n");
        return;
    }
    for (int i = 0; i < qtd_clientes; i++) {
        printf("%d - %s\n", i, clientes[i]);
        
    }
}

void insere_produto() {


    scanf("%s", produtos[qtd_produtos]);
    qtd_produtos++;

}


void insere_venda() {
    printf("   \n");
}


void atualiza_cliente() {
    int indice;
    listar_clientes();
    printf("digite o numero do cliente para atualizar (0 a %d)\n", qtd_clientes - 1);
    scanf("%d", &indice);



    printf("digite o novo nome para o cliente\n");
    scanf("%s", clientes[indice]);
    printf("cliente atualizado\n");
}


void deleta_cliente() {
    int indice;
    listar_clientes();
    printf("digite o numero do cliente que deseja deletar (0 a %d)\n", qtd_clientes - 1);
    scanf("%d", &indice);

    for (int i = indice; i < qtd_clientes - 1; i++) {
        strcpy(clientes[i], clientes[i + 1]);
    }

    qtd_clientes--;
    printf("cliente deletado\n");
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
        printf("5 - atualizar cliente\n");
        printf("6 - deletar cliente\n");


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
                case 5:
    atualiza_cliente();
    break;
            case 6: 
            deleta_cliente();
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
