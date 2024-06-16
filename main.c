#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("Olá, meu nome é: CM ou por extenso Computador Mestre e estou aqui pra te ajudar.\n");
    int op = 0;

    while (op != 5) {
        printf("[1] Ver regras\n[2] Conversar comigo (CM)\n[5] Sair\n");
        printf(">>> ");
        scanf("%d", &op);

        if (op == 1) {
        	system("cls");
        	printf("Que bom que você quis ver as regras irei te mostrar agora:\n");
        	printf("-------REGRAS-------\n");
        	printf("Classes: \nCobaia: quando uma pessoa não é qualificada pra nada mas é chamada ela vira cobaia de experimentos. \nTrabalhador: eles farão buscas para aprender mais e ajudar nas nossas pesquisas.\nSupervisor: ajudarão Trabalhadores com duvidas e outras coisas e cuidarão de achar novos Trabalhadores ou Cobaias.\nLíder: ajudantes do\nLíder supremo: apelido do atual Spy (nomes reais nunca serão utilizados).\n");
        	printf("Se você quer ser identificado em alguma rede social então coloque: invi(seu apelido).\n");
        	printf("Você tem que esperar um Líder ou um Supervisor te falar o seu apelido.\n");
        	printf("--------------------\n");
        	system("pause");
        } else if (op == 2) {
        	
        } else if (op == 5) {
            printf("Tchau, volte sempre...!\n");
        } else {
            printf("Opção inválida! Por favor, escreva algo lógico.\n");
        }
    }
}

