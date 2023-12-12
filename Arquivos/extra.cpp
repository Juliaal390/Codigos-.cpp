#include <iostream>
#include <locale.h>
#include <fstream>
#include <sstream>
using namespace std;
int main(){
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
	int neg=0, pos=0;
	
	arquivo2.open("numerosint.txt");
	if(arquivo2.is_open()){
		while(getline(arquivo2, linha)){
		cout<<linha<<endl;

        
        stringstream converte(linha);
        int numero=0;
        converte>>linha;

		if(numero<0){
			neg++;
		}
		if(numero>0){
			pos++;
		}cout<<"A quantidade de números negativos é: "<<neg<<endl;
	cout<<"A quantidade de números positivos é: "<<pos<<endl;
	} //while
	} //if
    arquivo2.close();
	
}