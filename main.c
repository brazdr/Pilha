#include <stdio.h>
#include "Pilha.h"


int main() {
    Pilha* pilha = NULL;
    int opcao, elemento;


    do {
        printf("\nMenu de Opcoes:\n");
        printf("1 - Criar pilha\n");
        printf("2 - Empilhar um item\n");
        printf("3 - Ver o topo da pilha\n");
        printf("4 - Desempilhar um item\n");
        printf("5 - Imprimir a pilha\n");
        printf("6 - Destruir a pilha\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                if (pilha == NULL) {
                    pilha = criaPilha();
                    printf("Pilha criada com sucesso!\n");
                } else {
                    printf("A pilha ja foi criada!\n");
                }
                break;


            case 2:
                if (pilha != NULL) {
                    printf("Digite o elemento a ser empilhado: ");
                    scanf("%d", &elemento);
                    if (empilhar(pilha, elemento)) {
                        printf("Elemento empilhado com sucesso!\n");
                    } else {
                        printf("Pilha cheia. Nao foi possivel empilhar o elemento.\n");
                    }
                } else {
                    printf("Pilha nao criada. Crie a pilha primeiro!\n");
                }
                break;


            case 3:
                if (pilha != NULL) {
                    int topo;
                    if (verTopo(pilha, &topo)) {
                        printf("Topo da pilha: %d\n", topo);
                    } else {
                        printf("Pilha vazia. Nenhum elemento no topo.\n");
                    }
                } else {
                    printf("Pilha nao criada. Crie a pilha primeiro!\n");
                }
                break;


            case 4:
                if (pilha != NULL) {
                    if (desempilhar(pilha)) {
                        printf("Elemento desempilhado com sucesso!\n");
                    } else {
                        printf("Pilha vazia. Nenhum elemento para desempilhar.\n");
                    }
                } else {
                    printf("Pilha nao criada. Crie a pilha primeiro!\n");
                }
                break;


            case 5:
                if (pilha != NULL) {
                    imprime(pilha);
                } else {
                    printf("Pilha nao criada. Crie a pilha primeiro!\n");
                }
                break;


            case 6:
                if (pilha != NULL) {
                    destroiPilha(pilha);
                    pilha = NULL;
                    printf("Pilha destruida com sucesso!\n");
                } else {
                    printf("Pilha nao criada. Crie a pilha primeiro!\n");
                }
                break;


            case 7:
                if (pilha != NULL) {
                    destroiPilha(pilha);
                }
                printf("Saindo do programa. Ate logo!\n");
                break;


            default:
                printf("Opcao invalida! Tente novamente.\n");
        }


    } while (opcao != 7);


    return 0;
}
