#include <iostream>
#include <time.h> //Bliblioteca pra usar o comando de randomizador
using namespace std;

#define BIG 9        //Define "BIG" com o valor constante de 9
#define POSICOES 41        //Define "POSICOES" como 41 pra ser ultilizado na hora de preencher a "matriz jogo"

int main(){

    srand(time(NULL)); //Semente randomica gerada a partir da hora do sistema

    int MatrizOriginal[BIG][BIG] = {4, 9, 5, 2, 8, 7, 3, 6, 1,
                                    7, 2, 8, 6, 1, 3, 4, 9, 5,
                                    3, 6, 1, 9, 5, 4, 7, 2, 8,
                                    6, 5, 3, 8, 4, 9, 2, 1, 7,
                                    9, 8, 4, 1, 7, 2, 6, 5, 3,
                                    2, 1, 7, 5, 3, 6, 9, 8, 4,
                                    1, 3, 2, 4, 6, 5, 8, 7, 9,
                                    5, 4, 6, 7, 9, 8, 1, 3, 2,
                                    8, 7, 9, 3, 2, 1, 5, 4, 6};

    int menu, i, j, NumeroRandom, posicoesPreenchidas, Linha, Coluna, Tentativa, Jogadas, Acertos;
    int MatrizGabarito[BIG][BIG], MatrizJogo[BIG][BIG];


    do { //Loop (do while) para ficar rodando o código ate ser selecionado a opção de sair que seria o 3

        system("cls");

            // Zera a "matriz jogo".
            for (i = 0; i < BIG; i++){
                for (j = 0; j < BIG; j++){
                    MatrizJogo[i][j] = 0;
                }
            }

//---------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------

        cout << "1 - Jogar\n2 - Sobre\n3 - Fim \n\n Selecione o que deseja fazer: ";
        cin >> menu;

        switch(menu){

//---------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------

        //Jogar
        case 1:

            system("cls");

            NumeroRandom = rand() % 4; // Transforma a variavel "NumeroRandom" em um número aleatório dentre 4 números toda vez que a opção 1 for selecionada no "menu".

                switch(NumeroRandom){
  
  
                    case 0: // Transforma a "matriz gabarito" na matriz ORIGINAL:
  
                        for (i = 0; i < BIG; i++){
                            for (j = 0; j < BIG; j++){
                                MatrizGabarito[i][j] = MatrizOriginal[i][j];
                            }
                        }
                        break;
    
                    case 1: // Transforma a "matriz gabarito" na matriz TRANSPOSTA:
                            
                        for (i = 0; i < BIG; i++){
                            for (j = 0; j < BIG; j++){
                                MatrizGabarito[i][j] = MatrizOriginal[j][i]; // Transpõe a matriz original simplesmente trocando a ordem de linha por coluna da versão original
                            }
                        }  
                        break;
  
                    case 2: // Transforma a "matriz gabarito" na matriz com as LINHAS INVERTIDAS:
                            
                        for (i = 0; i < BIG; i++){
                            for (j = 0; j < BIG; j++){
                                MatrizGabarito[i][j] = MatrizOriginal[BIG-1-i][j]; // O programa vai usar o valor de BIG(= 9) - 1 para obter o "tamanho real" da matriz, que vai de 0 a 8, seguindo a ordem da operação, será subtraído o valor atual da linha para obter a posição inversa.
                            }
                        }
                        break;
   
                    case 3: // Transforma a "matriz gabarito" na matriz com as COLUNAS INVERTIDAS:
    
                        for (i = 0; i < BIG; i++){
                            for (j = 0; j < BIG; j++){
                                MatrizGabarito[i][j] = MatrizOriginal[i][BIG-1-j]; // Inverte as colunas usando a mesma lógica de inversão das linhas ^
                            }
                        }
                        break;
                }

//---------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------

            posicoesPreenchidas = 0;

            while (posicoesPreenchidas < POSICOES){ // Loop pra preencher as 41 posições aleatóriamente da "matriz jogo" de acordo com a constante POSICOES (que tem o valor de 41
                int LinhaTemp = rand() % BIG;  // Toda vez que o loop rodar vai ser ultilizado uma linha aleatória
                int ColunaTemp = rand() % BIG;  // Toda vez que o loop rodar vai ser ultilizado uma coluna aleatória

                if (MatrizJogo[LinhaTemp][ColunaTemp] == 0){ // Se a posição estiver vazia
                    MatrizJogo[LinhaTemp][ColunaTemp] = MatrizGabarito[LinhaTemp][ColunaTemp]; // Preenche com o valor da "matriz gabarito"
                    posicoesPreenchidas++;
                }
            }

//---------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------

            Acertos = 0; // Inicializa o número de acertos.
            Jogadas = 0; // Define a quantidade de tentativas pra 0.

            while (Acertos < POSICOES){ // Loop que vai manter o jogo rodando enquanto nao for completamente preenchido.
            
                // Mostra a "matriz jogo" ao jogador.
                for (i = 0; i < BIG; i++){
                    cout << "\t";
                    for (j = 0; j < BIG; j++)
                        if (MatrizJogo[i][j] == 0)
                            cout << "_\t"
                        } else {
                            cout << MatrizJogo[i][j] << "\t"
                        }
                    }
                    cout << "\n\n";
                }

                cout << "Digite a linha e a coluna (de 1 a 9) para preencher (Exemplo: 2 3): ";
                cin >> Linha >> Coluna;

                // Diminui o valor digitado em 1 para que o programa reconheça a linha e coluna digitada pelo usuario.
                Linha -= 1;
                Coluna -= 1;

                if (Linha < 0 || Linha >= BIG || Coluna < 0 || Coluna >= BIG || MatrizJogo[Linha][Coluna] != 0){ // Mensagem de erro caso a pessoa ultilize uma opção não existente.

                    cout << "Posição inválida ou já preenchida. Tente novamente.\n";
                    system("pause");
                    system("cls");

                } else { // Prossegue com o jogo caso seja uma opção de casa valida.

                    cout << "Digite o número que deseja colocar: ";
                    cin >> Tentativa;

                    if (Tentativa == MatrizGabarito[Linha][Coluna]){ // Se acertar, substitui a casa selecionada pela tentativa e aumenta o numero de jogadas e acertos.

                        MatrizJogo[Linha][Coluna] = Tentativa;
                        Jogadas++;
                        Acertos++;
                        cout << "Número correto!" << endl;

                    } else {

                        Jogadas++;
                        cout << "Número incorreto! Tente novamente.\n";
                    }
                    system("pause");
                    system("cls");
                }
            }

            cout << "Sudoku Completo !!! \n" << "Quatidade de tentativas: " << Jogadas << endl;
            system("pause");
            system("cls");

            break;
//---------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------

        //Sobre
        case 2:

            system("cls");
            cout << "Membros do grupo: Henrique Gustavo Gonzaga Belli / Gabriel Paranaguá / Marlon Ranguet Zucchetti / Salomão Patrick Franca Alves Panas.\n\n";
            cout << "Mês e ano da realização deste trabalho: Novembro/2024.\n\n";
            cout << "Nome do professor: Rafael Ballotin Martins.\n\n";
            cout << "Disciplina: Algoritmos e Programação.\n\n\n\n";
            system("pause");

            break;

//---------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------

        //Fim
        case 3:

            system("cls");
            cout << "Obrigado por jogar.\n\n";
            system("pause");

            break;

//---------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------

        //Qualquer outra coisa que não seja as opções acima
        default:

            system("cls");
            cout << "Essa opção não existe.\n\n";
            system("pause");

            break;
        }

    }while (menu != 3);

    return 0;
}
