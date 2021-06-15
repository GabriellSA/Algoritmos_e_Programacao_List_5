/*Uma loja de m�veis de inform�tica est� necessitando de um sistema que identifique quais m�veis de
inform�tica est�o sendo solicitados pelos seus clientes. Os m�veis disponibilizados por esta empresa s�o:
1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando
se tratar de um m�vel que n�o exista na empresa informe ao cliente que ainda n�o est� dispon�vel.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu, contador, cadeira=0, mesaC=0, estanteL=0, mesaI=0, estanteC=0;
	
	do{
		printf("---------- SISTEMA DE PEDIDOS ----------\n\n");
		printf("\t[1] Cadeira\n\t[2] Mesa de Computador\n\t[3] Estante de Livros\n\t[4] Mesa de Impressora\n\t[5] Estante de CD\n\n");
		printf("\t[6] Ver todas as solicita��es\n\t[7] Limpar todas as solicita��es feitas\n\n\t[0] Encerrar o sistema\n\n");
		printf("Digite o n�mero do seu pedido: ");
		scanf("%d", &menu);
		system("cls");
		
		switch(menu){
			case 1:
				contador=0;
				printf("Quantas cadeiras deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    cadeira++;
				printf("\nSOLICITA��O FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 2:
				contador=0;
				printf("Quantas Mesa de Computador deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    mesaC++;
				printf("\nSOLICITA��O FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 3:
				contador=0;
				printf("Quantas Estante de Livros deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    estanteL++;
				printf("\nSOLICITA��O FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 4:
				contador=0;
				printf("Quantas Mesa de Impressora deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    mesaI++;
				printf("\nSOLICITA��O FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;
			case 5:
				contador=0;
				printf("Quantas Estante de CD deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    estanteC++;
				printf("\nSOLICITA��O FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 6:
				printf("---------- TODAS AS SOLICITA��ES REALIZADAS ----------\n");
				printf("---------------- SISTEMA DE PEDIDOS ------------------\n\n");
				printf("Cadeiras: %d\nMesa de Computador: %d\nEstante de Livros: %d\n", cadeira, mesaC, estanteL);
				printf("Mesa de Impressora: %d\nEstante de CD: %d\n\n", mesaI, estanteC);
				system("pause"); system("cls"); break;	
			case 7:
				cadeira=0, mesaC=0, estanteL=0, mesaI=0, estanteC=0;
				system("pause"); system("cls"); break;
			case 0:
				printf("\nSISTEMA ENCERRADO!\n\n");
			    break;	
			default:
			    printf("\nESSE M�VEL AINDA N�O ESTA DISPON�VEL!\n\n");	
			    system("pause"); system("cls"); break;	  		
		}
	}while(menu!=0);
	system("pause");
	return 0;
}
