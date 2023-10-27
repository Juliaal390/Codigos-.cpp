/*Crie um programa usando struct, que recebe e imprime o nome e a nota de estudantes*/
#include <iostream> //cin e cout
#include <locale.h> //setlocale
using namespace std;
void imprimir(); //declaração de funções (depois domain - obrigatório declarar)
void registrar();

struct materias{
	float portugues, matematica, historia, geografia, ciencias;
};

materias nota[100]; //var nota do tipo materiais, que armazena 100 notas
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
	cout<<"* NOME DO ALUNO: "<<aluno[i]<<" *"<<endl;
	cout<<"PORTUGUÊS: "<<nota[i].portugues<<endl;
	cout<<"MATEMÁTICA: "<<nota[i].matematica<<endl;
	cout<<"HISTÓRIA: "<<nota[i].historia<<endl;
	cout<<"GEOGRAFIA: "<<nota[i].geografia<<endl;
	cout<<"CIÊNCIAS: "<<nota[i].ciencias<<endl<<endl;
	}
	main();
}