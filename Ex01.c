/*1- Fa�a um programa que leia um valor N inteiro e calcule por meio de uma fun��o o seu dobro, ap�s isso, imprima o n�mero e o seu dobro na tela. */
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
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&n);
	
	printf("O dobro do n�mero %d �: ",n);
	dobro(n);
	
}
