#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("Ol�, meu nome �: CM ou por extenso Computador Mestre e estou aqui pra te ajudar.\n");
    int op = 0;

    while (op != 5) {
        printf("[1] Ver regras\n[2] Conversar comigo (CM)\n[5] Sair\n");
        printf(">>> ");
        scanf("%d", &op);

        if (op == 1) {
        	system("cls");
        	printf("Que bom que voc� quis ver as regras irei te mostrar agora:\n");
        	printf("-------REGRAS-------\n");
        	printf("Classes: \nCobaia: quando uma pessoa n�o � qualificada pra nada mas � chamada ela vira cobaia de experimentos. \nTrabalhador: eles far�o buscas para aprender mais e ajudar nas nossas pesquisas.\nSupervisor: ajudar�o Trabalhadores com duvidas e outras coisas e cuidar�o de achar novos Trabalhadores ou Cobaias.\nL�der: ajudantes do\nL�der supremo: apelido do atual Spy (nomes reais nunca ser�o utilizados).\n");
        	printf("Se voc� quer ser identificado em alguma rede social ent�o coloque: invi(seu apelido).\n");
        	printf("Voc� tem que esperar um L�der ou um Supervisor te falar o seu apelido.\n");
        	printf("--------------------\n");
        	system("pause");
        } else if (op == 2) {
        	
        } else if (op == 5) {
            printf("Tchau, volte sempre...!\n");
        } else {
            printf("Op��o inv�lida! Por favor, escreva algo l�gico.\n");
        }
    }
}

