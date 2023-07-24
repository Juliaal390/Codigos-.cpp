/*
Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme:
ótimo ?3; bom ?2; regular ?1
Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
a)média das idades das pessoas que responderam ótimo;
b)quantidade de pessoas que responderam regular;
c)percentagem de pessoas que responderam bom, entre todos espectadores.
*/
#include <iostream> //cin e cout
#include <locale.h> //caracteres
#include <iomanip> //fixed e setprecision
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese"); //caracteres
	
	int idade[15], opiniao[15], otimo=0, regular=0, bom=0, somaidade=0, pessoas=0;
	//[15]=0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
	float media, percent;
	
	for(int i=0; i<15; i++){ //i<15= 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
		cout<<i+1<<endl;
		cout<<"Informe a sua idade: ";
		cin>>idade[i];
		cout<<"3 - Ótimo"<<endl<<"2 - Bom"<<endl<<"1 - Regular"<<endl;
		cout<<"Informe a sua opinião em relação ao filme: ";
		cin>>opiniao[i]; cout<<endl<<endl;
		
		if(opiniao[i]==3){
			somaidade+=idade[i]; //soma=soma+idade[i]
			otimo++;
		}
		if(opiniao[i]==1){
			regular++;
		}
		if(opiniao[i]==2){
			bom++;
		}
		if(opiniao[i]!=1 && opiniao[i]!=2 && opiniao[i]!=3){
			cout<<"Resposta inválida. O usuário não será contabilizado."<<endl<<endl;
			continue; //se o usuário digitar uma resposta inválida, a variável pessoas não aumentará
		}
		pessoas++;
	}
	percent = static_cast<float>(bom)*100/pessoas; //divisão de inteiros retorna um inteiro, então é necessário converter para float
	media = static_cast<float>(somaidade)/otimo;
	
	if(media>0){
	cout<<"Média das idades das pessoas que responderam ótimo: "<<fixed<<setprecision(2)<<media<<endl;
	}
	else{
		cout<<"Média das idades das pessoas que responderam ótimo: 0"<<endl;
	}
	cout<<"Quantidade de pessoas que responderam regular: "<<regular<<endl;
	cout<<"Percentagem de pessoas que responderam bom, entre todos: "<<fixed<<setprecision(2)<<percent<<"%";
	//setprecision(2): define o número de algarismos após vírgula (2)
	//fixed: se <2 casas após vírgula, o programa completa com 0
	cout<<endl<<endl;
}
