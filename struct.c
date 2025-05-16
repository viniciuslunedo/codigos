#include <stdio.h>
#define TAM 5

typedef struct p{
    char nome [200];
    int idade;
    char sexo;
} 
pessoa;

int main(){
    pessoa funcionarios[TAM];
    for(int i=0; i<TAM; i++){
    printf("digite um nome\n");
    scanf(" %[^\n]s", funcionarios[i].nome);
    printf("digite a idade do funcionario: ");
    scanf("%d", &funcionarios[i].idade);
 };

    return 0;}
