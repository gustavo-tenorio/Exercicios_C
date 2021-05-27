/*2- Faça um programa que leia um vetor com 5 nomes, e imprima estes nomes enumerados pela ordem em que foram digitados. */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char arr[5][10] = {"Gustavo","Nicolas","Danielle","Adilson","Adalberto"};
	
	int i;
	
	for(i = 0; i < 5; i++){
		printf("%d - %s\n",i,arr[i]);
	}
	
}
