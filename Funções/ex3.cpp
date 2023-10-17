/*Implemente uma segunda função que, dado X e N, calcule X elevado à N*/

#include <iostream> //cin e cout
#include <locale.h> //setlocale
#include <cmath> //biblioteca de funções matemáticas
using namespace std;


int main(){
	setlocale(LC_ALL, "portuguese");
    int base, expo;
    int potencia(int x, int n); //declara função, pois foi criada antes do main()

    cout<<"BASE: ";
    cin>>base;
    cout<<"EXPOENTE: ";
    cin>>expo;

    int result = potencia(base, expo); //cria a var result para exibir o retorno de potencia
    cout<<result;
}
int potencia(int x, int n){
    return pow(x, n); //pow(a, b) calcula a elevado a b - biblioteca cmath
}