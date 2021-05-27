/*3- Faça um programa em C que calcule os juros de um determinado saldo com base em uma taxa, 
ambos informados pelo usuário. O programa deve utilizar uma função para calcular os juros e atualizar o saldo atual 
com base no saldo antigo acrescido dos juros. Ao final, a aplicação deve imprimir o total de juros e o novo saldo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//M = C(1+i)^t
//M = montante a pagar, C = capital emprestado, i = taxa de juros; t = tempo

float juros(float c, int t, float s){
		
		float m;
		float soma;
	
		m = pow(c,t);
		soma = s + m;
		
		printf("O valor atual é: R$%.2f\n",soma);
		printf("O total de juros é: R$%.2f\n",m);
		return 0;
	
	
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float saldo, taxa, conta;
	int tempo;
	
	printf("###### Calculadora de Juros ######\n");
	
	
	
	printf("Por favor informe o saldo: ");
	scanf("%f",&saldo);
	
	fflush(stdin);
	
	printf("Agora informe a taxa: ");
	scanf("%f",&taxa);
	
	conta =  saldo * (taxa + 1);
	
	
	fflush(stdin);
	
	printf("Informe quantos meses existe a divida: ");
	scanf("%d",&tempo);
	
	printf("O saldo antigo é: R$%.2f\n",saldo);
	juros(conta,tempo,saldo);
	
	
	

}
