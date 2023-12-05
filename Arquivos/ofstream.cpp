/*Programa que cadastra pessoas e cria um arquivo com os dados cadastrados*/
#include <locale.h> //setlocale
#include <iostream> //cin e cout
#include <fstream> //biblioteca que permite operar arquivos
using namespace std;
//funções
void cadastro();
void menu();
//variáveis
int cont = 0;
string nome[100];
int idade[100];
char sexo[100];
int escolha;

int main(){
	setlocale(LC_ALL, "portuguese");
	menu();
	
	ofstream arquivo1; // ofstream: info sai do programa e entra no arquivo
	arquivo1.open("cadastro.txt"); //abre OU cria um arquivo chamado cadastro.txt
	
	for(int i=0; i<cont; i++){
	arquivo1<<"Nome: "<<nome[i]<<endl;
	arquivo1<<"Idade: "<<idade[i]<<endl;
	arquivo1<<"Sexo: "<<sexo[i]<<endl<<endl;
	}
	
	arquivo1.close(); //fecha o arquivo
	
}

void menu(){
	cout<<"1. Cadastrar"<<endl<<"2. Finalizar programa"<<endl;
	cin>>escolha;
	switch(escolha){
		case 1:
		{
			cadastro();
			break;
		}
		case 2:{
			break;
		}
	}
}

void cadastro(){
	cout<<"Insira seu nome: ";
	cin.ignore(); //impede que getline seja ignorado
	getline(cin, nome[cont]);
	cout<<"Insira sua idade: ";
	cin>>idade[cont];
	cout<<"Insira seu sexo(F/M): ";
	cin>>sexo[cont];
	
	cont++;
	cout<<endl;
	menu();
	
}