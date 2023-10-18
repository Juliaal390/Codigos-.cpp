/*Crie uma função que inverta strings*/

#include <iostream> //cin e cout
#include <locale.h> //setlocale
using namespace std;

void inverte(string nomeinv){
    string inverter;
    for(int i=0; i<nomeinv.length(); i++){ // loop que percorre cada caractere de nomeinv
        inverter = nomeinv[i] + inverter; // cada caractere é adicionado no início da string inverter, que está invertendo a ordem dos caracteres
    }
    //OBS.: inverter += nomeinv[i] imprimiria o resultado na ordem, e não ao inverso
    cout<<inverter<<endl;
}
int main(){
    setlocale(LC_ALL, "portuguese"); //permite caracteres em pt
    string nome;
    getline(cin, nome);
    inverte(nome); //nomeinv = nome

    return 0;
}