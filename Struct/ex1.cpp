#include <iostream>
#include <locale.h>
using namespace std;
void imprimir();
void registrar();

struct materias{
	float portugues, matematica, historia, geografia, ciencias;
};

materias nota[100];
int cont = 0;
string aluno[100];

int main(){
	int opcao;
	
	setlocale(LC_ALL, "portuguese");
	cout<<"1. Registrar aluno e notas"<<endl;
	cout<<"2. Ver registros"<<endl;
	cin>>opcao;
	switch(opcao){
		case 1:{
			registrar();
			break;
		}
		case 2:{
			imprimir();
			break;
		}
		default:{
			main();
		}
	}
	
}

void registrar(){
	cout<<"Registre o nome do aluno: ";
	cin.ignore();
	getline(cin, aluno[cont]);
	cout<<"= Registro de notas ="<<endl;
	cout<<"PORTUGUÊS: ";
	cin>>nota[cont].portugues;
	cout<<"MATEMÁTICA: ";
	cin>>nota[cont].matematica;
	cout<<"HISTÓRIA: ";
	cin>>nota[cont].historia;
	cout<<"GEOGRAFIA: ";
	cin>>nota[cont].geografia;
	cout<<"CIÊNCIAS: ";
	cin>>nota[cont].ciencias;
	cont++;
	cout<<endl;
	main();
}

void imprimir(){
	for(int i=0; i<cont; i++){
	cout<<"* NOME DO ALUNO: "<<nota[i].portugues<<" *"<<endl;
	cout<<"PORTUGUÊS: "<<nota[i].portugues<<endl;
	cout<<"MATEMÁTICA: "<<nota[i].matematica<<endl;
	cout<<"HISTÓRIA: "<<nota[i].historia<<endl;
	cout<<"GEOGRAFIA: "<<nota[i].geografia<<endl;
	cout<<"CIÊNCIAS: "<<nota[i].ciencias<<endl<<endl;
	}
	main();
}