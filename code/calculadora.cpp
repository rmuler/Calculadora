#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	//var
	int op,num1,num2,resultado,resto;
	float resultadoDiv;
	char opcao [30] = "SIM";
	
	//laço de re
	while(strcmp(opcao, "SIM") == 0) {


	//interface
	printf("-------------------------------------------------------\n");
	printf("SELECIONE O NUMERO RESPECTIVO PARA A OPERACAO DESEJADA:\n");
	printf("[1] - ADICAO\n");
	printf("[2] - SUBTRACAO\n");
	printf("[3] - MULTIPLICACAO\n");
	printf("[4] - DIVISAO\n");
	printf("-------------------------------------------------------\n");
	
	//entrada de dados
	printf("Informe a operacao que deseja realizar:\n");
	scanf("%d",&op);
	printf("Informe o primeiro numero:\n");
	scanf("%d",&num1);
	printf("Informe o segundo numero:\n");
	scanf("%d",&num2);
	
	//cases
	switch (op) {
		case 1:
			resultado = num1 + num2;
			printf("Resultado da operacao: %d\n",resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("Resultado da operacao: %d\n",resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("Resultado da operacao: %d\n",resultado);
			break;
		case 4:
			resultadoDiv = num1 / num2;
			resto = num1 % num2;
			if (resto != 0) {
				printf("DIVISAO NAO EXATA!\n");
			} else {
				printf("Resultado da operacao: %.1f\n",resultadoDiv);
			}
			break;
		default:
			printf("DADO INVALIDO\n");
			break;
	}

	//verificando o desejo do usuário
	printf("Deseja continuar? Escreva em maiúsculo\n");
	scanf("%s",&opcao);

	//limpando o console
	system("cls");

}
	system("pause");
	return 0;
}