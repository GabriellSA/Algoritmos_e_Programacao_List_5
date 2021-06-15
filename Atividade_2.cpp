/*Desenvolva um programa em C que leia três valores numéricos e apresente o maior valor informado no
meio de uma janela limpa.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor[3], maior=0;
	
	for(int i=0; i<3; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%f", &valor[i]);
	}
	system("cls");
	for(int j=0; j<3; j++){
		if(valor[j]>maior)
		    maior=valor[j];
	}
	 
	printf("O maior valor é: %.2f\n\n", maior);
	
	system("pause");
	return 0;
}
