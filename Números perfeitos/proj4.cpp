/*Um número é dito ser perfeito quando ele é igual a soma de seus divisores (exceto ele mesmo). Por exemplo, o seis é perfeito, pois: 6 = 1 + 2 + 3. Programe um software que pede um número ao usuário e diga se ele é perfeito ou não.
OBS1.: o programa permanece em loop até ser digitado o número 0
OBS2.: usar função com parâmetros e com retorno*/

#include <iostream> //cin e cout
#include <locale.h> //setlocale
using namespace std;
//funções (declaração)
int perfeito(int numero);
//

int main(){
	setlocale(LC_ALL, "portuguese");
	int num; //cria a var num
	
	do{
	cout<<"NÚMERO: ";
	cin>>num; //atribui valor a num
	
	if(num==0){
		break; //quebra o loop do/while ao digitar 0
	}
	
	if(perfeito(num)==num){ //numero = num. Se o retorno for soma=num, então...
		cout<<"PERFEITO"<<endl<<endl;
	}
	else{
		cout<<"NÃO É PERFEITO"<<endl<<endl;
	}
	}while(num!=0); //enquanto num diferente de 0, o loop continua
	return 0;
}

int perfeito(int numero){
	int soma=0; //cria a var soma (=0 para evitar "lixo")
	for(int i=1; i<numero; i++){
		if(numero%i==0){
			soma=soma+i; //soma dos divisores de numero (no caso, numero = num)
		}
	}
	return soma; //retorna a soma dos divisores de numero
}