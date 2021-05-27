/*1- Faça um programa que leia um valor N inteiro e calcule por meio de uma função o seu dobro, após isso, imprima o número e o seu dobro na tela. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int dobro (int x) {
	printf("%d:",x * 2);
	return 0;
}
int main(){
	setlocale( LC_ALL, "Portuguese" );
	
	int n;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&n);
	
	printf("O dobro do número %d é: ",n);
	dobro(n);
	
}
