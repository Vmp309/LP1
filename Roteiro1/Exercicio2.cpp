#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {
    int palpite;

    srand (time(NULL));
    int a = rand() % 100 + 1;
   while (1){
        cout << "Adivinhe o numero entre 1 e 100" << endl;

        cin >> palpite;

        if (palpite > a){
            cout << "Muito alto. Tente novamente" << endl;
        }

        if (palpite < a){
            cout << "Muito baixo. Tente novamente" << endl;
        }

        if (palpite == a){
            cout << "Parabens! Voce adivinhou o numero" << endl;
            return 0;
        }
   }
}
