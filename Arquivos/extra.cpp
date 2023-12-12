/*Crie um programa que lê os números presentes em um arquivo, mostre-os no terminal e diga a quantidade de positivos e negativos
OBS.: converta string em int com a biblioteca sstream*/

#include <iostream>
#include <locale.h>
#include <fstream>
#include <sstream> //fornece o comando stringstream
using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    /*
	int n1=-2, n2=4, n3=-4, n4=-12;
	
	ofstream arquivo;
	arquivo.open("numerosint.txt");
	arquivo<<n1<<endl<<n2<<endl<<n3<<endl<<n4;
	arquivo.close();
*/

    ifstream arquivo2;
    string linha;
    int neg = 0, pos = 0;

    arquivo2.open("numerosint.txt");

    if (arquivo2.is_open()) {
        while (getline(arquivo2, linha)) {
            cout << linha << endl;

            stringstream converte(linha); //stringstream: classe que faz operações de entrada e saída em strings
            int numero; //var criada para comparar se o número é positivo ou negativo
            converte >> numero;  //numero = linha (int)

            if (numero < 0) {
                neg++;
            }
            if (numero > 0) {
                pos++;
            }
        } // while
    } else {
        cerr << "Erro ao abrir o arquivo." << endl;
    }

    cout << "A quantidade de números negativos é: " << neg << endl;
    cout << "A quantidade de números positivos é: " << pos << endl;

    arquivo2.close();

    return 0;
}