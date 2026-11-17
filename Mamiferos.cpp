
#include "Mamiferos.h"

// CONSTRUCTORES DE MAMMIFERO
Mammifero::Mammifero() : nombre("Sin nombre"), peso(0.0) {
}

Mammifero::Mammifero(string n, double p) {
    nombre = n;
    peso = p;
}

// GETTERS Y SETTERS DE MAMMIFERO
string Mammifero::getNombre() {
    return nombre;
}

void Mammifero::setNombre(string n) {
    nombre = n;
}

double Mammifero::getPeso() {
    return peso;
}

void Mammifero::setPeso(double p) {
    peso = p;
}

// SOBRECARGA DE METODOS COMER
void Mammifero::comer() {
    cout << nombre << " esta comiendo." << endl;
}

void Mammifero::comer(string comida) {
    cout << nombre << " esta comiendo "
         << comida << "." << endl;
}

void Mammifero::comer(string comida, int cantidad) {
    cout << nombre << " esta comiendo "
         << cantidad << " porciones de "
         << comida << "." << endl;
}

// CONSTRUCTORES DE GATO
Gato::Gato() : Mammifero(), nBigotes(0) {
}

Gato::Gato(string n, double p, int b)
    : Mammifero(n, p), nBigotes(b) {
}

// GETTERS Y SETTERS DE GATO
int Gato::getBigotes() {
    return nBigotes;
}

void Gato::setBigotes(int n) {
    nBigotes = n;
}

// METODOS DE GATO
void Gato::alimentarse() {
    cout << getNombre()
         << " se alimenta de croquetas." << endl;
}

void Gato::emitirSonido() {
    cout << getNombre()
         << " dice: Miau!" << endl;
}

// CONSTRUCTORES DE VACA
Vaca::Vaca() : Mammifero(), litrosDeLeche(0.0) {
}

Vaca::Vaca(string n, double p, double l)
    : Mammifero(n, p), litrosDeLeche(l) {
}

// GETTERS Y SETTERS DE VACA
double Vaca::getLitrosDeLeche() {
    return litrosDeLeche;
}

void Vaca::setLitrosDeLeche(double n) {
    litrosDeLeche = n;
}

// METODOS DE VACA
void Vaca::alimentarse() {
    cout << getNombre()
         << " se alimenta de pasto." << endl;
}

void Vaca::emitirSonido() {
    cout << getNombre()
         << " dice: Muuu!" << endl;
}

// CONSTRUCTORES DE BALLENA
Ballena::Ballena() : Mammifero() {
}

Ballena::Ballena(string n, double p)
    : Mammifero(n, p) {
}

// METODOS DE BALLENA
void Ballena::alimentarse() {
    cout << getNombre()
         << " se alimenta de krill y pequeños organismos marinos."
         << endl;
}

void Ballena::emitirSonido() {
    cout << getNombre()
         << " emite sonidos bajo el agua." << endl;
}
