/**Programa que cadastra animais para banho em um petshop.
Dados: especie, raça, nome, dono, porte, contato.
Crie um menu de opções para:
	- Cadastro: menu com as opções - cliente: nome, telefone.   -animal: dono, esp?cie, ra?a, nome, porte, contato; - voltar
	- Buscar dados;
	- Alterar dados;
	- Listagem de clientes (em ordem crescente de n?mero de telefone)
	- Excluir.*/

#include <iostream> //cin e cout
#include <locale.h> //caracteres
using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese"); //caracteres

    //variáveis
    char resposta, resposta_2;
    int opcao, indice=1, opcao_2, ind=0; //se indices não tiverem valor declarado, pode sobrar "lixo"
    string nome_cliente[100], telefone[100], nome_animal[100], especie[100], raca[100], porte[100], dono, dono_animal[100];
    //
    do{

    cout<<"====== MENU DE OPÇÕES ======"<<endl;
    cout<<"(A) Cadastrar"<<endl;
    cout<<"(B) Buscar dados"<<endl;
    cout<<"(C) Alterar Dados"<<endl;
    cout<<"(D) Listagem de clientes"<<endl;
    cout<<"(E) Excluir dados"<<endl;
    cout<<"(F) Sair dados"<<endl;
    cin>>resposta;

    if(toupper(resposta)=='A'){ //se resposta(em mai?sculo) for = A
        opcao = 1;
    }
    else if(toupper(resposta)=='B'){
        opcao = 2;
    }
    else if(toupper(resposta)=='C'){
        opcao=3;
    }
    else if(toupper(resposta)=='D'){
        opcao=4;
    }
    else if(toupper(resposta)=='E'){
        opcao=5;
    }
    else if(toupper(resposta)=='F'){
        opcao=6;
    }

    switch(opcao){
        case 1:{

            do{
            cout<<"====== MENU DE CADASTRO ======"<<endl;
            cout<<"(A) Cliente"<<endl;
            cout<<"(B) Animal"<<endl;
            cout<<"(C) Voltar ao menu principal"<<endl;
            cin>>resposta_2;

            if(toupper(resposta_2)=='A'){
                opcao_2=1;   
            }
            else if(toupper(resposta_2)=='B'){
               opcao_2=2;
            }
            else if(toupper(resposta_2)=='C'){
               opcao_2=3;
            }

            switch (opcao_2)
            {
            case 1:{
                cout<<"Inserir cliente:"<<endl;
                cin.ignore(); //colocado caso getline anteceda a um cin e cause bug
                getline(cin, nome_cliente[indice]); //getline para strings compostas
                cout<<"Telefone: ";
                getline(cin, telefone[indice]);
                cout<<endl<<"Cadastro realizado com sucesso"<<endl;
                indice++;
                break;
            }
            case 2:{
                cout<<"Inserir nome do animal:"<<endl;
                cin.ignore(); //colocado caso getline anteceda a um cin e cause bug
                getline(cin, nome_animal[ind]); //getline para strings compostas
                cout<<"Espécie: ";
                getline(cin, especie[ind]);
                cout<<"Raça: ";
                getline(cin, raca[ind]);
                cout<<"Porte: ";
                getline(cin, porte[ind]);
                cout<<"Cliente: ";
                getline(cin, dono);

                for(int i=0; i<indice; i++){
                    if (dono==nome_cliente[i]){
                        dono_animal[ind]=nome_cliente[i];
                    }
                }
                cout<<endl<<"Cadastro realizado com sucesso"<<endl;
                ind++;
                break;  } //case 2
            } //switch dentro do switch
        
        case 2:{

        }
            }while(opcao_2!=3); 
} //switch principal
 
    }
} while(opcao!=7); //enquanto opcao não for = 7 (sair), o programa continuará em looping
}