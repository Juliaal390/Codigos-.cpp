/*Programa que abre um arquivo e imprime seu conteúdo no terminal*/
#include <locale.h> //setlocale
#include <iostream> //cin e cout
#include <fstream> //manipular arquivos
using namespace std;

int main(){
ifstream arquivo2; 
string linha; //var que armazenará cada linha lida do arquivo
arquivo2.open("cadastro.txt"); //abre o arquivo cadastro.txt

if(arquivo2.is_open()){ //verifica se o arquivo foi aberto com sucesso
	while(getline(arquivo2, linha)){ //loop que usa getline para ler e armazenar cada linha do arquivo
		cout<<linha<<endl; //imprime as linhas, até que não haja mais nenhuma
	}
}
else{ //caso o arquivo tenha erro ao abrir
	cout<<"ERRO AO ABRIR O ARQUIVO";
}
arquivo2.close(); //fecha o arquivo
}