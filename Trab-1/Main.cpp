#include <iostream>
#include <vector>           //Biblioteca para usar o alocacao dinamica de maneira mais pratica
#include "ClasseUsuario.h"  //Cabecalho onde estao os metodos relacionados aos usuarios, como cadastar e descadastrar...
#include "ClasseJogo.h"    //Cabecalho onde estao os metodos relacionados aos jogos, como agendar, cancelar, alterar...

//Comando para limpar o terminal -- Deixar tudo mais legivel
#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

using namespace std;

int main(){

    vector <Usuario> usuarios;  //Salva todos os usuarios num vetor dinamicamente alocado
    vector <Jogo> jogos;       //Salva todos os jogos num vetor dinamicamente alocado

    int operacao, i;
    string aux;
    
    do{
        system(CLEAR);
        cout << "Venda de ingressos de jogos de futebol" << endl << endl;
        cout << "Digite a opcao desejada:" << endl << endl;
        cout << "   (1) - Operacoes de usuario" << endl;
        cout << "   (2) - Operacoes de jogos" << endl;
        cout << "   (0) - Sair do programa" << endl;

        cin >> operacao;

        if(operacao == 1){
            system(CLEAR);

            do{
                cout << "(1) - Cadastrar usuario" << endl;
                cout << "(2) - Mostrar usuarios" << endl;
                cout << "(3) - Descadastrar usurario" << endl;
                cout << "(0) - Voltar para o menu" << endl;

                cin >> operacao;

                if(operacao == 1){
                    system(CLEAR);
                    
                    Usuario u;              //Declara um vetor de usuarios
                    usuarios.push_back(u);  //Insere no final do vetor
                }
                else if(operacao == 2){
                    system(CLEAR);

                    for(i = 0; i < usuarios.size(); i++){
                        cout << "Usuario " << i + 1 << endl; 
                        cout << "   Nome: " << usuarios[i].GetNome() << endl;
                        cout << "   CPF:  " << usuarios[i].GetCPF() << endl << endl;
                    }
                }
                /*else if(operacao == 3){
                    system(CLEAR);
                    cout << "Digite o CPF o usuario que deseja remover: ";
                    cin >> aux;

                }*/
                else{
                    system(CLEAR);
                    cout << "Digite um valor valido" << endl;
                }

            }while(operacao != 0);
            operacao = -1;   //Comando para nao sair do programa
        }

        if(operacao == 2){
            system(CLEAR);

            do{
                cout << "(1) - Cadastrar jogo" << endl;

                cin >> operacao;

                if(operacao == 1){
                    system(CLEAR);
                    
                    Jogo j;              //Declara um vetor de usuarios
                    jogos.push_back(j);  //Insere no final do vetor
                }
            }while(operacao != 0);
            operacao = -1;   //Comando para nao sair do programa
        }

    }while(operacao != 0);
    return 0;
}