/*Fa�a um programa que pergunte ao usu�rio qual a letra inicial do seu sexo (masculino/feminino) e
escreva por extenso o sexo informado, usando o operador condicional tern�rio.*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	do{
		printf("Digite o seu sexo (F ou M): ");
		fflush(stdin);
	    scanf("%c", &sexo);
	    sexo = toupper(sexo);
	    if(sexo!='F' && sexo!='M')
	    printf("\nSEXO DIGITADO INV�LIDO!\n");
	}while(sexo!='F' && sexo!='M');
	
	int i = (sexo=='F') ? printf("\tFeminino") : printf("\tMasculino");
	
	printf("\n\n");
	system("pause");
	return 0;
	
}
