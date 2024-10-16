#include <iostream>
#include <time.h> //Bliblioteca pra usar o comando de randomizador
#include <cstdlib> //Biblioteca pra poder usar os comando de system()
using namespace std;

int main() {

    int menu;
    srand(time(NULL)); //Semente randomica gerada a partir da hora do sistema

    //Loop (do while) para ficar rodando o código ate ser selecionado a opção de sair que seria o 3
    do {

    system("cls");

    cout << "1 - Jogar\n2 - Sobre\n3 - Fim \n\n Selecione o que deseja fazer: ";
    cin >> menu;

    switch(menu){

    //Jogar
    case 1:{

        system("cls"); //Comando pra limpar a tela

        char letra1 = '_', letra2 = '_', letra3 = '_', letra4 = '_', letra5 = '_', letra6 = '_';
        char espaco1 = '_', espaco2 = '_', espaco3 = '_', espaco4 = '_', espaco5 = '_', espaco6 = '_';
        int tentativas_restantes = 10;
        char tentativa;
        int numero = rand() % 10; //Comando para pegar um número aleatório entre 10 números

        // Definição da palavra com base no número gerado através de um switch
        switch (numero) {
            case 0: letra1 = 'U'; letra2 = 'T'; letra3 = 'O'; letra4 = 'P'; letra5 = 'I'; letra6 = 'A'; break;
            case 1: letra1 = 'C'; letra2 = 'A'; letra3 = 'S'; letra4 = 'U'; letra5 = 'A'; letra6 = 'L'; break;
            case 2: letra1 = 'I'; letra2 = 'R'; letra3 = 'O'; letra4 = 'N'; letra5 = 'I'; letra6 = 'A'; break;
            case 3: letra1 = 'O'; letra2 = 'R'; letra3 = 'I'; letra4 = 'G'; letra5 = 'E'; letra6 = 'M'; break;
            case 4: letra1 = 'F'; letra2 = 'U'; letra3 = 'T'; letra4 = 'U'; letra5 = 'R'; letra6 = 'O'; break;
            case 5: letra1 = 'B'; letra2 = 'E'; letra3 = 'L'; letra4 = 'E'; letra5 = 'Z'; letra6 = 'A'; break;
            case 6: letra1 = 'E'; letra2 = 'N'; letra3 = 'I'; letra4 = 'G'; letra5 = 'M'; letra6 = 'A'; break;
            case 7: letra1 = 'C'; letra2 = 'A'; letra3 = 'R'; letra4 = 'T'; letra5 = 'A'; letra6 = 'Z'; break;
            case 8: letra1 = 'P'; letra2 = 'R'; letra3 = 'O'; letra4 = 'E'; letra5 = 'Z'; letra6 = 'A'; break;
            case 9: letra1 = 'C'; letra2 = 'O'; letra3 = 'M'; letra4 = 'I'; letra5 = 'D'; letra6 = 'A'; break;
        }

        //Loop (while) para rodar o jogo enquanto não for 'ganhado' ou 'perdido'
        while (tentativas_restantes > 0) {

            system("cls");

            cout << "\nPalavra: " << espaco1 << ' ' << espaco2 << ' ' << espaco3 << ' ' << espaco4 << ' ' << espaco5 << ' ' << espaco6 << endl;
            cout << "Tentativas restantes: " << tentativas_restantes << endl;
            cout << "Digite uma letra: ";
            cin >> tentativa;

            // Verificação de letras + Mostrar onde estão as posições das letras corretas
            int letras_acertadas = 0;

            if (letra1 == tentativa) {
                letras_acertadas++;
                espaco1 = letra1;
            }
            if (letra2 == tentativa) {
                letras_acertadas++;
                espaco2 = letra2;
            }
            if (letra3 == tentativa) {
                letras_acertadas++;
                espaco3 = letra3;
            }
            if (letra4 == tentativa) {
                letras_acertadas++;
                espaco4 = letra4;
            }
            if (letra5 == tentativa) {
                letras_acertadas++;
                espaco5 = letra5;
            }
            if (letra6 == tentativa) {
                letras_acertadas++;
                espaco6 = letra6;
            }

            //Atualiza o contador de tentativas
            if (letras_acertadas == 0) {
                tentativas_restantes--;
                cout << "\nEssa palavra não possui a letra " << tentativa << "\n\n";
                system("pause");
            }

            //Verificador de vitória + mensagem de vitória
            if (letra1 == espaco1 && letra2 == espaco2 && letra3 == espaco3 && letra4 == espaco4 && letra5 == espaco5 && letra6 == espaco6) {
                system("cls");
                cout << "\nPalavra: " << espaco1 << ' ' << espaco2 << ' ' << espaco3 << ' ' << espaco4 << ' ' << espaco5 << ' ' << espaco6 << endl;
                cout << "\nParabéns! Você adivinhou a palavra!\n" << endl;
                system("pause"); //Comando pra pausar a tela ate ser apertado algum botao
                break;
            }
        }

        //Verificador de derrota + mensagem de derrota
        if (tentativas_restantes == 0) {
            system("cls");
            cout << "\nVocê perdeu!\n\n";
            system("pause");
        }
    }
    break;

    //Sobre
    case 2:{

        system("cls");
        cout << "Membros do grupo: Henrique Gustavo Gonzaga Belli / Gabriel Paranaguá / Marlon Ranguet Zucchetti / Salomão Patrick Franca Alves Panas." << endl;
        cout << "Mês e ano da realização deste trabalho: outubro/2024)" << endl;
        cout << "Nome do professor: Rafael Ballotin Martins." << endl;
        cout << "Disciplina: Algoritmos e Programação." << endl;
        cout << "OBS.: O programa reconhece somente letras maiúsculas nas tentativas, e somente o uso de UM CARACTERE por vez.\n\n";
        system("pause");

    }
    break;

    //Fim
    case 3:

        system("cls");
        cout << "Obrigado por jogar\n\n";
        system("pause");

    break;

    //Qualquer outra coisa que não seja as opções acima
    default:

        system("cls");
        cout << "Essa opção não existe." << endl;
        system("pause");

    break;
    }

    }while (menu != 3);


return 0;
}
