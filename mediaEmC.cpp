#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");

	//variaveis
	float nota1,nota2,nota3,nota4,somar;
	
	//Entrada de dados

	printf("Digite a 1° nota :");
	scanf("%f",&nota1);	
	printf("\nDigite o 2° nota :");
	scanf("%f",&nota2);	
	printf("\nDigite o 3° nota:");
	scanf("%f",&nota3);	
	printf("\nDigite o 4° nota:");
	scanf("%f",&nota4);
	
	somar = (nota1+nota2+nota3+nota4) /4;
	
	//printf("\nO resultado da media  é :%.2f",somar);
	
if(somar  == 10 ){
		printf("Classe aprovada nota maxima ");
	}
	else if(somar >=7 ){
		printf("Classe passou na media  ");
	}else if(somar <=5 ){
		printf("Classe reprovada nota menos que media %.2f",somar);
	
	}

		
	
	

}
