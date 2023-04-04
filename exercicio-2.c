#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BolsaDeValores {
    char nomeCompania[50];
    char areaAtuacao[50];
    double valorAtual;
    double valorAnterior;
    double variacao;
};

int main() {
    // criando a struct e preenchendo os campos
    struct BolsaDeValores acao1;
    strcpy(acao1.nomeCompania, "Anakin Development");
    strcpy(acao1.areaAtuacao, "Tecnologia");
    acao1.valorAtual = 280.00;
    acao1.valorAnterior = 300.00;
    acao1.variacao = (acao1.valorAtual - acao1.valorAnterior) / acao1.valorAnterior * 100;
    
    // imprimindo os campos da struct
    printf("Nome da compania: %s\n", acao1.nomeCompania);
    printf("Area de atuacao: %s\n", acao1.areaAtuacao);
    printf("Valor atual da acao: %.2f\n", acao1.valorAtual);
    printf("Valor anterior da acao: %.2f\n", acao1.valorAnterior);
    printf("Variacao da acao em porcentagem: %.2f%%\n", acao1.variacao);
    
    // preenchendo um vetor de structs com um laco
    struct BolsaDeValores companias[3];
    for (int i = 0; i < 3; i++) {
        printf("\nInforme os dados da compania %d:\n", i+1);
        printf("Nome da compania: ");
        scanf("%s", companias[i].nomeCompania);
        printf("Area de atuacao: ");
        scanf("%s", companias[i].areaAtuacao);
        printf("Valor atual da acao: ");
        scanf("%lf", &companias[i].valorAtual);
        printf("Valor anterior da acao: ");
        scanf("%lf", &companias[i].valorAnterior);
        companias[i].variacao = (companias[i].valorAtual - companias[i].valorAnterior) / companias[i].valorAnterior * 100;
    }
    
    // imprimindo os campos das structs do vetor
    printf("\nDados das companias inseridas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome da compania: %s\n", companias[i].nomeCompania);
        printf("Area de atuacao: %s\n", companias[i].areaAtuacao);
        printf("Valor atual da acao: %.2f\n", companias[i].valorAtual);
        printf("Valor anterior da acao: %.2f\n", companias[i].valorAnterior);
        printf("Variacao da acao em porcentagem: %.2f%%\n", companias[i].variacao);
    }
    
    return 0;
}