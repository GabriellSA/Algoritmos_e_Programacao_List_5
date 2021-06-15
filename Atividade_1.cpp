/*Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este cálculo deverá
ocorrer sobre um valor constante igual a 555. O programa deverá calcular o percentual desejado e
apresentar o resultado calculado deste percentual.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float percentual, resultado;
	
	do{
		printf("Digite o percentual do número 555 que deseja calcular: ");
	    scanf("%f", &percentual);
	    if(percentual<=0 || percentual>100)
	        printf("\nPERCENTUAL INVÁLIDO!\nDigite um valor entre 0 e 100\n\n");    
	}while(percentual<=0 || percentual>100);
	
	resultado=(percentual/100)*555;
	printf("\nO percentual desejado é igual a: %.2f\n\n", resultado);
	
	system("pause");
	return 0;	
}
