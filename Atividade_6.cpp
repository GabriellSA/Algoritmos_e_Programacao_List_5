/*Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao
usu�rio, onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio
informar esta regi�o, limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando
que as regi�es dever�o ser apresentadas conforme o seguinte menu de op��es:
Menu de Op��es
============
1 � Norte
2 � Nordeste
3 � Centro-Oeste
4 � Sudeste
5 � Sul
0 � Sair do programa*/

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
	    printf("\n\nQual regi�o do Brasil voc� gostaria de conhecer ?\n");
	    scanf("%d", &menu);
	    system("cls");
	
	switch(menu){
		case 1: printf("\n\n\t\tVoc� escolheu o Norte!\n\n"); 
		        system("pause"); system("cls"); break;
		case 2: printf("\n\n\t\tVoc� escolheu o Nordeste!\n\n"); 
		        system("pause"); system("cls"); break;
		case 3: printf("\n\n\t\tVoc� escolheu o Centro-Oeste!\n\n"); 
		        system("pause"); system("cls"); break;
		case 4: printf("\n\n\t\tVoc� escolheu o Sudeste!\n\n"); 
		        system("pause"); system("cls"); break;
		case 5: printf("\n\n\t\tVoc� escolheu o Sul!\n\n"); 
		        system("pause"); system("cls"); break;
		case 0: printf("\n\n\t\tPROGRAMA ENCERRADO!\n\n"); 
		        system("pause"); system("cls"); break;
		default: printf("\n\n\t\tOP��O DIGITADA INV�LIDA!\n\n"); 
		        system("pause"); system("cls"); break;
	}
	}while(menu!=0);
	return 0;
}
