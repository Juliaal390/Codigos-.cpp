/*Use struct aninhado para criar um programa que recebe o nome e a nota de alunos, sendo possível visualizar os registros recebidos*/
#include <iostream>
#include <locale.h>
using namespace std;
//funções
void menu();
void registro();
void consulta();

struct materias{
	float portugues, matematica, historia, geografia, ciencias;
};
struct estudante{
	string nome;
	materias Materias;
};

estudante infos[100]; //var infos do tipo estudante
int cont = 0;
string aluno[100];

int main(){
	setlocale(LC_ALL, "portuguese");
	menu();
	
	return 0;
}
void menu(){
	int opcao;
	
	cout<<"====== MENU ======"<<endl;
	cout<<"Registrar aluno e notas (1)"<<endl;
	cout<<"Consultar (2)"<<endl;
	cin>>opcao;
	
	switch(opcao){
		case 1:{
			registro();
			break;
		}
		case 2:{
			consulta();
			break;
		}
		default:{
			menu();
		}
	}
}

void registro(){
	cout<<"Registre o nome do aluno: ";
	cin.ignore();
	getline(cin, infos[cont].nome);
	cout<<"= Registro de notas ="<<endl;
	cout<<"PORTUGUÊS: ";
	cin>>infos[cont].Materias.portugues;
	cout<<"MATEMÁTICA: ";
	cin>>infos[cont].Materias.matematica;
	cout<<"HISTÓRIA: ";
	cin>>infos[cont].Materias.historia;
	cout<<"GEOGRAFIA: ";
	cin>>infos[cont].Materias.geografia;
	cout<<"CIÊNCIAS: ";
	cin>>infos[cont].Materias.ciencias;
	cont++;
	menu();
}

void consulta(){
	string nome;
	bool achei = false;
	
	cout<<"Consulte o nome do aluno: ";
	cin.ignore();
	getline(cin, nome);
	for(int i=0; i<cont; i++){
		if(infos[i].nome==nome){
			cout<<"Nome do aluno: "<<infos[i].nome<<endl;
			cout<<"PORTUGUÊS: "<<infos[i].Materias.portugues<<endl;
			cout<<"MATEMÁTICA: "<<infos[i].Materias.matematica<<endl;
			cout<<"HISTÓRIA: "<<infos[i].Materias.historia<<endl;
			cout<<"GEOGRAFIA: "<<infos[i].Materias.geografia<<endl;
			cout<<"CIÊNCIAS: "<<infos[i].Materias.ciencias<<endl;
			achei = true;
		}
	}
	if(achei==false){
		cout<<"Aluno não encontrado"<<endl;
	}
	menu();
}