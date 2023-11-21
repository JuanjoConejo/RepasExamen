#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicialitza la llavor per generar nombres aleatoris
    srand(static_cast<unsigned int>(time(0)));

    // Genera un nombre aleatori entre 1 i 100
    int numeroSecret = rand() % 100 + 1;

    // Inicialitza les variables
    int suposicio, intentsRealitzats = 0;

    // Mostra un missatge de benvinguda
    cout << "Benvingut al joc d endevinar. Intenta endevinar el nombre secret entre 1 i 100." << endl;

    do {
        // Sol·licita al jugador que faci una suposició
        cout << "Introdueix la teva suposicio: ";
        cin >> suposicio;

        // Incrementa el comptador d'intents
        intentsRealitzats++;

        // Comprova si la suposició és correcta, massa alta o massa baixa
        if (suposicio > numeroSecret) {
            cout << "Massa alt. Torna-ho a provar." << endl;
        }
        else if (suposicio < numeroSecret) {
            cout << "Massa baix. Torna-ho a provar." << endl;
        }
        else {
            cout << "Correcte! Has endevinat el nombre en " << intentsRealitzats << " intents." << endl;
        }

    } while (suposicio != numeroSecret);

    return 0;
}