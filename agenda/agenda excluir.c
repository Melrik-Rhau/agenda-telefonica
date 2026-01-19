
#include <stdio.h>
#include <string.h>
#define tam 100

struct registro_agenda {
    int status;
}agenda[tam];

int cont = 0; //contador de cadastro

//-------------------------------------------------
void cadastrar() {
    int pos = verifica_posicao_valida();
    if (pos == -1) {
        printf("Nao e possivel cadastrar. Registro sem espaco\n");
    }
    else {
        printf("-----------MODULO CADASTRAR-------------\n");
        printf("Digite o nome:\n");
        fflush(stdin);
        gets(agenda[pos].nome);
        printf("Digite o telefone:\n");
        scanf("%d", &agenda[pos].telefone);
        agenda[pos].status = 1;
        if (pos == cont) {
            cont++; //so incrementa se a posicao retornada for = ao contador
        }
        cont++;
    }

}
//-----------------------------------------------------
void listar() {
    int i;
    printf("\n-----------MODULO LISTAR-----------\n");
    for(i = 0; i < cont; i++) { // cont = quantidade de registro armazenado
        if(agenda[i].status == 1) {
            printf("\n\n-----REGISTRO %d -----\n", i);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %d\n", agenda[i].telefone);
        }
    }
}
//----------------------------------------------------
void consultar() {
    int i, achou = 0;
    char procurar_nome[40];
    printf("\n--------MODULO CONSULTAR-----------\n");
    printf("Digite o nome que deseja procurar\n");
    fflush(stdin);
    gets(procurar_nome);
    for (i = 0; i < cont; i++) {
        if (strcmp(agenda[i].nome, procurar_nome[i]) == 0) {
            printf("Telefone: %d\n", agenda[i].telefone);
            achou = 1;
        }
    }
    if (achou == 0) {
        printf("Registro nao encontrado\n");
    }
}
//------------------------------------------------------
void alterar() {
    int i, achou = 0;
    char procurar_nome[40];
    printf("\n--------MODULO ALTERAR-----------\n");
    printf("Digite o nome que deseja alterar o telefone\n");
    fflush(stdin);
    gets(procurar_nome);
    for (i = 0; i < cont; i++) {
        if (strcmp(agenda[i].nome, procurar_nome[i]) == 0 && agenda[i].status == 1) {
            printf("Digite o novo telefone:\n");
            scanf("%d", agenda[i].telefone);
            achou = 1;
        }
    }
    if (achou == 0) {
        printf("Registro nao encontrado. Nao e possivel fazer alteracao\n");
    }
}

//------------------------------------------------------
void inicializa_status() {
    int i;
    for(i = 0; i < tam; i++) {
        agenda[i].status = 0;
    }
}
//------------------------------------------------------
void excluir() {
    int i, achou = 0;
    char procurar_nome[40];
    printf("\n--------MODULO EXCLUIR-----------\n");
    printf("Digite o nome que deseja excluir\n");
    fflush(stdin);
    gets(procurar_nome);
    for (i = 0; i < cont; i++) {
        if ((strcmp(agenda[i].nome, procurar_nome[i]) == 0) && (agenda[i].status == 1)) {
            printf("Registro exluido\n");
            agenda[i].status = 0;
            achou = 1;
        }
    }
    if (achou == 0) {
        printf("Registro nao encontrado. Nao e possivel excluir\n");
    }
}
//------------------------------------------------------
int verifica_posicao_valida() {
    int i;
    for(i = 0; i < cont; i++) {
        if(agenda[i].status == 0) {
            return i; //retorna a posicao que tem a posicao = 0
        }
    }
    if (cont == tam - 1) {
        return - 1;
    }
    return cont;
}
//------------------------------------------------------
int main () {
    int opcao;
    inicializa_status();
    do{
    printf("Digite a opcao desejada\n");
    printf("\t1 - Cadastrar\n");
    printf("\t2 - Listas\n");
    printf("\t3 - Consultar\n");
    printf("\t4 - Alterar\n");
    printf("\t5 - Excluir\n");
    printf("\t6 - Sair\n");
    scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                consultar();
                break;
            case 4:
                alterar();
                break;
            case 5:
                excluir();
                break;
            case 6:
                printf("Encerrando programa\n");
                break;

            default:
                printf("Opcao invalida\n");
                break;
        }
    }while(opcao != 5);
}
