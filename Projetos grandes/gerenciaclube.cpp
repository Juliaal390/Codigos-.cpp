#include <iostream>
#include <locale.h>
using namespace std;

//funções
void menu();
void caso1();
void caso2();
void relatorioda();

int cont = 0, contador = 0;
int codigo_teste, codigo_teste2, codigo_associado[100], codigo_dependente[100][100];
string cpf_associado[100], data_associado[100], nome_associado[100];
char tipo_associado[100], sexo_dependente[100];
int opcao2, opcao3;
string nome_dependente[100], data_dependente[100], cpf_dep[100], dep_doass[100][100];

int main(){
	setlocale(LC_ALL, "portuguese");
	menu();
	return 0;
}

void menu(){
	int opcao;
	cout << "=== INÍCIO ===" << endl;
	cout << "(1) Cadastro/Manutenção de associados" << endl;
	cout << "(2) Cadastro/Manutenção de dependentes" << endl;
	cout << "(3) Cadastro/Manutenção de visitantes" << endl;
	cout << "(4) Registro de visitas" << endl;
	cout << "(5) Relatório de dependentes/associados" << endl;
	cout << "(6) Relatório de visitas por associado" << endl;
	cout << "(7) Sair" << endl;

	cin >> opcao;
	switch (opcao){
		case 1:{
			caso1();
			break;
		}
		case 2:{
			caso2();
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			break;
		}
		case 5:{
			relatorioda();
			break;
		}
		case 6:{
			break;
		}
		case 7:{
			break;
		}
		default:{
			menu();
		}
	} //fim do switch
} //menu

void caso1(){
	cout << "== ASSOCIADOS ==" << endl;
	cout << "(1) Cadastro" << endl;
	cout << "(2) Manutenção" << endl;
	cin >> opcao2;

	switch (opcao2){
		case 1:{
			cout << "NOME: ";
			cin.ignore();
			getline(cin, nome_associado[cont]);
			cout << "CPF (_._._-__): ";
			getline(cin, cpf_associado[cont]);
			cout << "DATA DE ASSOCIAÇÃO (_//_): ";
			getline(cin, data_associado[cont]);
			cout << "PROPRIETÁRIO OU CONTRIBUINTE(P/C): ";
			cin >> tipo_associado[cont];
			codigo_associado[cont] = cont;
			cout << "Código do associado: " << codigo_associado[cont] << endl;
			cout << endl;
			cont++;
			menu();
			break;
		}
		case 2:{
			cout << "Digite o código do associado: ";
			cin >> codigo_teste;
			for (int i = 0; i < cont; i++){
				if (codigo_teste == codigo_associado[i]){
					cout << "NOME: ";
					cin.ignore();
					getline(cin, nome_associado[i]);
					cout << "CPF (_._._-__): ";
					getline(cin, cpf_associado[i]);
					cout << "DATA DE ASSOCIAÇÃO (_//_): ";
					getline(cin, data_associado[i]);
					cout << "PROPRIETÁRIO OU CONTRIBUINTE(P/C): ";
					cin >> tipo_associado[i];
					codigo_associado[i] = i;
					cout << "Código do associado: " << codigo_associado[i] << endl;
					cout << endl;
				}
			}
			break;
		}
	}//switch
	menu();
} //caso1

void caso2(){
	cout << "== DEPENDENTES ==" << endl;
	cout << "(1) Cadastro" << endl << "(2) Manutenção" << endl;
	cin >> opcao3;

	switch (opcao3){
		case 1:{
			cout << "NOME: ";
			cin.ignore();
			getline(cin, nome_dependente[contador]);
			cout << "DATA DE NASCIMENTO: ";
			getline(cin, data_dependente[contador]);
			cout << "ASSOCIADO (CPF): ";
			getline(cin, cpf_dep[contador]);
			for (int i = 0; i < 100; i++){
				if (cpf_dep[contador] == cpf_associado[i]){
					codigo_dependente[i][contador] = contador;
					cout << "CÓDIGO: " << codigo_dependente[i][contador] << endl;
					dep_doass[i][contador] = nome_dependente[contador];
			}
			}
			contador++;
			break;
		}
		case 2:{
			cout<<"Digite o código do dependente: ";
			cin>>codigo_teste2;
			for(int i=0; i<contador; i++){
				if(codigo_teste2==codigo_dependente[i][contador]){
					cout << "NOME: ";
					cin.ignore();
					getline(cin, nome_dependente[i]);
					cout << "DATA DE NASCIMENTO: ";
					getline(cin, data_dependente[i]);
					cout << "NOVO ASSOCIADO (CPF): ";
					getline(cin, cpf_dep[i]);
					cout << "DADOS ALTERADOS COM SUCESSO!" << endl;
				}
			}
			break;
		}
	}//switch
	menu();
}

void relatorioda(){
	cout << "== Relatório de dependentes/associados ==" << endl;
	cout << "Digite o código do associado: ";
	cin >> codigo_teste;
	for (int i = 0; i < cont; i++){
		if (codigo_teste == codigo_associado[i]){
			cout << "NOME: " << nome_associado[i] << endl;
			cout << "CPF (_._._-__): " << cpf_associado[i] << endl;
			cout << "DATA DE ASSOCIAÇÃO (_//_): " << data_associado[i] << endl;
			cout << "PROPRIETÁRIO OU CONTRIBUINTE(P/C): " << tipo_associado[i] << endl;
			cout << "DEPENDENTES: ";
			for (int inf = 0; inf < 100; inf++){
				if (cpf_associado[i] == cpf_dep[inf]){
					cout << nome_dependente[inf] << endl;
				}
			}
			cout << "Código do associado: " << codigo_associado[i] << endl;
			cout << endl;
		}
	}
	menu();
}