#include <iostream>
using namespace std;
#include <time.h>

int main() {

	srand(time(NULL));

	int chute = 0, numeroAleatorio = rand()%100+1, tentativas = 7;
	bool falhou = false;

	cout << "Adivinhe o numero de 0 a 100: ";

	do {
		cin >> chute;

		if (chute != numeroAleatorio) {

			tentativas--;

			if (chute > numeroAleatorio) {
			    cout << "Voce possui " << tentativas << " tentativas restantes." << endl;
				cout << "Voce chutou um numero maior que o aleatorio, tente novamente: ";
			} else if (chute < numeroAleatorio) {
			    cout << "Voce possui " << tentativas << " tentativas restantes." << endl;
				cout << "Voce chutou um numero menor que o aleatorio, tente novamente: ";
			}
            
				if (tentativas == 0) {
					cout << "Acabaram suas tentativas, voce perdeu.";
					falhou = true;
				}
		}
	} while (falhou == false);

	return 0;
}
