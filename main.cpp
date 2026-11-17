
#include <iostream>
#include "Mamiferos.h"

using namespace std;

int main() {

    Gato gato("Michi", 4.5, 24);
    Vaca vaca("Lola", 520.0, 18.5);
    Ballena ballena("Azul", 120000.0);

    cout << "--- GATO ---" << endl;
    gato.comer();
    gato.comer("croquetas");
    gato.comer("croquetas", 2);
    gato.alimentarse();
    gato.emitirSonido();

    cout << endl;

    cout << "--- VACA ---" << endl;
    vaca.alimentarse();
    vaca.emitirSonido();

    cout << endl;

    cout << "--- BALLENA ---" << endl;
    ballena.alimentarse();
    ballena.emitirSonido();

    cout << endl;

    cout << "--- DATOS ---" << endl;
    cout << "Bigotes: " << gato.getBigotes() << endl;
    cout << "Litros de leche: "
         << vaca.getLitrosDeLeche() << endl;

    return 0;
}
