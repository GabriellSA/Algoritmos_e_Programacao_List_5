/*Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de
informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por esta empresa são:
1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando
se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.*/

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
		printf("\t[6] Ver todas as solicitações\n\t[7] Limpar todas as solicitações feitas\n\n\t[0] Encerrar o sistema\n\n");
		printf("Digite o número do seu pedido: ");
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
				printf("\nSOLICITAÇÃO FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 2:
				contador=0;
				printf("Quantas Mesa de Computador deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    mesaC++;
				printf("\nSOLICITAÇÃO FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 3:
				contador=0;
				printf("Quantas Estante de Livros deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    estanteL++;
				printf("\nSOLICITAÇÃO FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 4:
				contador=0;
				printf("Quantas Mesa de Impressora deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    mesaI++;
				printf("\nSOLICITAÇÃO FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;
			case 5:
				contador=0;
				printf("Quantas Estante de CD deseja solicitar ? ");
				fflush(stdin);
				scanf("%d", &contador);
				for(int i=0; i<contador; i++)
				    estanteC++;
				printf("\nSOLICITAÇÃO FEITA COM SUCESSO!\n\n");
				system("pause"); system("cls"); break;	
			case 6:
				printf("---------- TODAS AS SOLICITAÇÕES REALIZADAS ----------\n");
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
			    printf("\nESSE MÓVEL AINDA NÃO ESTA DISPONÍVEL!\n\n");	
			    system("pause"); system("cls"); break;	  		
		}
	}while(menu!=0);
	system("pause");
	return 0;
}
