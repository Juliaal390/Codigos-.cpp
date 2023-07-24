/*
Cada espectador de um cinema respondeu a um question�rio no qual constava sua idade e sua opini�o em rela��o ao filme:
�timo ?3; bom ?2; regular ?1
Fa�a um programa que receba a idade e a opini�o de quinze espectadores, calcule e mostre:
a)m�dia das idades das pessoas que responderam �timo;
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
		cout<<"3 - �timo"<<endl<<"2 - Bom"<<endl<<"1 - Regular"<<endl;
		cout<<"Informe a sua opini�o em rela��o ao filme: ";
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
			cout<<"Resposta inv�lida. O usu�rio n�o ser� contabilizado."<<endl<<endl;
			continue; //se o usu�rio digitar uma resposta inv�lida, a vari�vel pessoas n�o aumentar�
		}
		pessoas++;
	}
	percent = static_cast<float>(bom)*100/pessoas; //divis�o de inteiros retorna um inteiro, ent�o � necess�rio converter para float
	media = static_cast<float>(somaidade)/otimo;
	
	if(media>0){
	cout<<"M�dia das idades das pessoas que responderam �timo: "<<fixed<<setprecision(2)<<media<<endl;
	}
	else{
		cout<<"M�dia das idades das pessoas que responderam �timo: 0"<<endl;
	}
	cout<<"Quantidade de pessoas que responderam regular: "<<regular<<endl;
	cout<<"Percentagem de pessoas que responderam bom, entre todos: "<<fixed<<setprecision(2)<<percent<<"%";
	//setprecision(2): define o n�mero de algarismos ap�s v�rgula (2)
	//fixed: se <2 casas ap�s v�rgula, o programa completa com 0
	cout<<endl<<endl;
}
