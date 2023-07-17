/**Programa que cadastra animais para banho em um petshop.
Dados: especie, raça, nome, dono, porte, contato.
Crie um menu de opções para:
	- Cadastro: menu com as opções - cliente: nome, telefone.   -animal: dono, espécie, raça, nome, porte, contato; - voltar
	- Buscar dados;
	- Alterar dados;
	- Listagem de clientes (em ordem crescente de número de telefone)
	- Excluir.*/

#include <iostream> //cin e cout
#include <locale.h> //caracteres
using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese"); //caracteres

    //variáveis
    char resposta, resposta_2;
    int opcao, indice=1, opcao_2, ind=0; //se indices não tiverem valor declarado, pode sobrar "lixo"
    string nome_cliente[100], telefone[100], nome_animal[100], especie[100], raca[100], porte[100], dono, dono_animal[100], procurar_cliente, tel_cliente[100], n;
    
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

    if(toupper(resposta)=='A'){ //se resposta(em maiúsculo) for = A
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
            do {
            cout<<"=== MENU DE CADASTRO ==="<<endl;
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

                bool achei_1=false;

                for(int i=0; i<indice; i++){
                    if (dono==nome_cliente[i]){
                        dono_animal[ind]=nome_cliente[i];
                        tel_cliente[ind]=telefone[i];
                        achei_1=true;
                        cout<<endl<<"Cadastro realizado com sucesso"<<endl;
                    }  
                }
                if(achei_1==false){
                        cout<<"Cliente não encontrado"<<endl;
                        break;
                    }
                
                ind++;
                break;
                 } //case 2
            } //switch dentro do switch}
            }while (opcao_2 != 3);
            
           break;
        
        case 2:{
            cout<<"=== BUSCAR DADOS ==="<<endl;
            cout<<"Inserir cliente: ";
            cin.ignore();
            getline(cin, procurar_cliente);

            bool achei_2=false;

             for(int i=0; i<ind; i++){
                if(procurar_cliente==dono_animal[i]){
                     cout<<"Cliente: "<<dono_animal[i]<<endl;
                     cout<<"Contato: "<<tel_cliente[i]<<endl;
                     cout<<"Nome do animal: "<<nome_animal[i]<<endl;
                     cout<<"Espécie: "<<especie[i]<<endl;
                     cout<<"Raça: "<<raca[i]<<endl;
                     cout<<"Porte: "<<porte[i]<<endl;
                     achei_2=true; } 
               }
                if(achei_2==false){
                     cout<<"Cliente não encontrado"<<endl; }
                     break;
            }
        
        case 3:{
            cout<<"=== ALTERAR DADOS ==="<<endl;
            cout<<"Insira o nome do cliente: ";
            cin.ignore();
            getline(cin, n);

            for(int i=0; i<ind; i++){
                if(n==dono_animal[i]){
                     cout<<"Cliente: ";
                     getline(cin, dono_animal[i]);
                     cout<<"Contato: ";
                     getline(cin, tel_cliente[i]);
                     cout<<"Nome do animal: "; 
                     getline(cin, nome_animal[i]);
                     cout<<"Espécie: "; 
                     getline(cin, especie[i]);
                     cout<<"Raça: "; 
                     getline(cin, raca[i]);
                     cout<<"Porte: "; 
                     getline(cin, porte[i]);
                }
            }
        }

        }}

            
} while(opcao!=6); //enquanto opcao não for = 6 (sair), o programa continuará em looping
 }
    