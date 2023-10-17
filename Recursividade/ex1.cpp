/*Faça uma função recursiva que recebe um número inteiro positivo N e imprima todos os N naturais
de 0 a N em ordem decrescente*/

#include <iostream> //cin e cout
#include <locale.h> //setlocale
using namespace std;

void recur(int num);

int main(){
    setlocale(LC_ALL, "portuguese");

    int n; //cria a var n
    cout<<"Digite um número: ";
    cin>>n; //atribui valor a n
    recur(n); //num (linha 19) = n

}
void recur(int num){
    if(num>=0){
        cout<<num<<" ";
        recur(num-1); //chama a função novamente, mas num vale menos
    }
    cout<<endl;
    main();
}