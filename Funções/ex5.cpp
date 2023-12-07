/*Programa que cadastra, exclui e exibe os dados*/
#include <locale.h>
#include <iostream> //cin e cout
using namespace std;
void menu();
void cadastro();
void excluir();
void exibir();

int opcao, cont=0, id[100], idade[100], idex;
string nome[100];

int main(){
	menu();
}
void menu(){
	setlocale(LC_ALL, "portuguese");
	cout<<"1. Cadastrar"<<endl<<"2. Excluir"<<endl<<"3. Exibir"<<endl;
	cin>>opcao;
	switch(opcao){
		case 1:{
			cadastro();
			break;
		}
		case 2:{
			excluir();
			break;
		}
		case 3:{
			exibir();
			break;
		}
	} //switch
}
void cadastro(){
	cout<<"Nome: ";
	cin.ignore();
	getline(cin, nome[cont]);
	cout<<"Idade: ";
	cin>>idade[cont];
	id[cont]=cont; //var
	cout<<"ID: "<<id[cont]<<endl<<endl;
	
	cont++;
	menu();
}
void excluir(){
	cout<<"Digite o ID do indivíduo para excluir seus dados: ";
	cin>>idex;
	for(int i=0; i<cont; i++){
		if(idex==id[i]){
			nome[i]="";
			idade[i]=-1;
			id[i]=-1;
		}
	}
	
	    for (int i = idex; i < cont - 1; i++) {
        nome[i] = nome[i + 1];
        idade[i] = idade[i + 1];
        id[i] = i; // Atualiza o ID
    }
    cont--;
    cout<<"Os dados foram excluídos, e o ID dos indivíduos posteriores atualizados"<<endl<<endl;
	menu();
}
void exibir(){
	cout<<"== CADASTROS REALIZADOS =="<<endl;
	for(int i=0; i<cont; i++){
		if(id[i]!=-1){
		cout<<"NOME: "<<nome[i]<<endl;
		cout<<"IDADE: "<<idade[i]<<endl;
		cout<<"ID: "<<id[i]<<endl<<endl;
		}
	}
	menu();
}