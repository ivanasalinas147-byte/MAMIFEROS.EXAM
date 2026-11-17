//Erika Ivana Salinas Juarez
#ifndef MAMIFEROS_H
#define MAMIFEROS_H

#include <iostream>
#include <string>

using namespace std;

// INTERFAZ
class ISonido {
public:
    virtual void emitirSonido() = 0;
    virtual ~ISonido() = default;
};

// CLASE ABSTRACTA PADRE
class Mammifero {

private:
    string nombre;
    double peso;

public:
    Mammifero();
    Mammifero(string n, double p);

    string getNombre();
    void setNombre(string n);

    double getPeso();
    void setPeso(double p);

    void comer();
    void comer(string comida);
    void comer(string comida, int cantidad);

    virtual void alimentarse() = 0;

    virtual ~Mammifero() = default;
};

// CLASE GATO
class Gato : public Mammifero, public ISonido {

private:
    int nBigotes;

public:
    Gato();
    Gato(string n, double p, int b);

    int getBigotes();
    void setBigotes(int n);

    void alimentarse() override;
    void emitirSonido() override;
};

// CLASE VACA
class Vaca : public Mammifero, public ISonido {

private:
    double litrosDeLeche;

public:
    Vaca();
    Vaca(string n, double p, double l);

    double getLitrosDeLeche();
    void setLitrosDeLeche(double n);

    void alimentarse() override;
    void emitirSonido() override;
};

// CLASE BALLENA
class Ballena : public Mammifero, public ISonido {

public:
    Ballena();
    Ballena(string n, double p);

    void alimentarse() override;
    void emitirSonido() override;
};

#endif

