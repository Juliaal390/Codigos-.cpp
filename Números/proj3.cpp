/*Fa�a um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o menor valor do conjunto. Considere que:
a)para encerrar a entrada de dados, deve ser digitado o valor zero;
b)para valores negativos, deve ser enviada uma mensagem;
c)os valores negativos ou iguais a zero n�o entrar�o nos c�lculos.*/

#include <iostream> //cin e cout
#include <locale.h> //caracteres
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int num, cont=0;
    int maior, menor;

    do{
        cout<<"Insira um n�mero inteiro: ";
        cin>>num;
        if(cont==0){    //se for a primeira itera��o, o num ser� tanto o maior quanto o menor
            maior=num;
            menor=num;
        }
        if(num>maior && num>0){
            maior=num;
        }
        if(num<menor && num>0){
            menor = num;
        }
        cont++;
    }
    while(num!=0);
    cout<<"Maior n�mero digitado: "<<maior<<endl;
    cout<<"Menor n�mero digitado:"<<menor;

}