/*Faça um programa que leia três valores numéricos e os mostre em ordem crescente.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor[3], maior=0, medio=0, menor=0;
	
	for(int i=0; i<3; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%f", &valor[i]);
	}
	for(int j=0; j<3; j++){
		if(valor[j]>maior) maior=valor[j];
		if(valor[j]<menor || menor==0) menor=valor[j];
	}
	for(int y=0; y<3; y++){
		if(valor[y]!=maior && valor[y]!=menor) medio=valor[y];
	}
	system("cls");
	printf("Os números em ordem crescente são:\n\t%.2f\n\t%.2f\n\t%.2f\n\n", menor, medio, maior);
	system("pause");
	return 0;
}
