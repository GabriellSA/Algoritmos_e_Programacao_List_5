/*Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal
e hexadecimal, sendo um em cada linha.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char caractere;
	
	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	system("cls");
	
	printf("O caractere %c em:\n\nDecimal: %d\nOctal: %o\nHexadecimal: %x\n\n", caractere, caractere, caractere, caractere);
	
	system("pause");
	return 0;	
}
