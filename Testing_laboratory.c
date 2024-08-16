#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() 
{
	int i,opc;
	setlocale(LC_ALL,"portuguese");
	printf("Bem-vindo(a) à Testagem COVID-19, do Laboratório Dasa! Qual opção abaixo se enquadra melhor à sua situação? \n\n\n");
	printf("1-Sintomas apresentados há mais de 21 dias. \n\n");
	printf("2-Sintomas apresentados entre 7 a 11 dias atrás. \n\n");
	printf("3-Sintomas apresentados entre 3 a 7 dias atrás. \n\n");
	printf("Digite: ");
	scanf("%d",&opc);
	switch(opc)
	{
	  case 1:
		 printf("\n\nO seu exame será feito a partir de um teste sorológico, através de punção sanguínea. Aguarde alguns dias pelos resultados após a conclusão do teste.");
	     break;
		case 2: 
		 printf("\n\nO seu exame será feito a partir de um teste rápido, através de sucção sanguínea. Por favor, aguarde alguns minutos pelos resultados após a conclusão do teste.");
		 break; 
		case 3: 
		 printf("\n\nO seu exame será feito a partir do padrão ouro definido pela OMS, através da inserção de um swab em sua nasofaringe. Por favor, aguarde algumas horas pelos resultados aós a conclusão do teste.");
		 break;
		default:
		 printf("OPÇÃO INVÁLIDA! Por favor, escolha uma fase da doença válida para a sua situação.");
	}
	printf("\n\nIMPORTANTE: Caso se confirme o diagnóstico para a doença, mantenha-se em isolamento por 14 dias.");
	getch();
}
