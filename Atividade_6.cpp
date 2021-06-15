/*Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao
usuário, onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário
informar esta região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando
que as regiões deverão ser apresentadas conforme o seguinte menu de opções:
Menu de Opções
============
1 – Norte
2 – Nordeste
3 – Centro-Oeste
4 – Sudeste
5 – Sul
0 – Sair do programa*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu;
	
	do{
		printf("----------------------------------------------------------\n");
	    printf("------------------- DESTINOS DO BRASIL -------------------\n");
	    printf("----------------------------------------------------------\n\n");
	    printf("\t[1] Norte\t\t[2] Nordeste\n\t[3] Centro-Oeste\t[4] Sudeste\n\t[5] Sul\t\t\t[0] Sair do programa");
	    printf("\n\nQual região do Brasil você gostaria de conhecer ?\n");
	    scanf("%d", &menu);
	    system("cls");
	
	switch(menu){
		case 1: printf("\n\n\t\tVocê escolheu o Norte!\n\n"); 
		        system("pause"); system("cls"); break;
		case 2: printf("\n\n\t\tVocê escolheu o Nordeste!\n\n"); 
		        system("pause"); system("cls"); break;
		case 3: printf("\n\n\t\tVocê escolheu o Centro-Oeste!\n\n"); 
		        system("pause"); system("cls"); break;
		case 4: printf("\n\n\t\tVocê escolheu o Sudeste!\n\n"); 
		        system("pause"); system("cls"); break;
		case 5: printf("\n\n\t\tVocê escolheu o Sul!\n\n"); 
		        system("pause"); system("cls"); break;
		case 0: printf("\n\n\t\tPROGRAMA ENCERRADO!\n\n"); 
		        system("pause"); system("cls"); break;
		default: printf("\n\n\t\tOPÇÃO DIGITADA INVÁLIDA!\n\n"); 
		        system("pause"); system("cls"); break;
	}
	}while(menu!=0);
	return 0;
}
