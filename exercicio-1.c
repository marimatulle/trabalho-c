#include <stdio.h>

struct BolsaValores {
    char nomeCompanhia[50];
    char areaAtuacao[50];
    double valorAtual;
    double valorAnterior;
    double variacao;
};

int main() {
    struct BolsaValores acao1;
    
    // atribuição dos valores aos elementos da struct
    sprintf(acao1.nomeCompanhia, "Anakin Development");
    sprintf(acao1.areaAtuacao, "Tecnologia");
    acao1.valorAtual = 280.00;
    acao1.valorAnterior = 300.00;
    acao1.variacao = ((acao1.valorAtual - acao1.valorAnterior) / acao1.valorAnterior) * 100;
    
    // impressão dos valores atribuídos
    printf("Nome da companhia: %s\n", acao1.nomeCompanhia);
    printf("Área de atuação: %s\n", acao1.areaAtuacao);
    printf("Valor atual da ação: %.2f\n", acao1.valorAtual);
    printf("Valor anterior da ação: %.2f\n", acao1.valorAnterior);
    printf("Variação da ação: %.2f%%\n", acao1.variacao);
    
    return 0;
}
