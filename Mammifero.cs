using System;

public interface ISonido
{
    void EmitirSonido();
}

public abstract class Mammifero
{
    private string nombre;
    private double peso;

    public Mammifero()
    {
        nombre = "Desconocido";
        peso = 0;
    }

    public Mammifero(string nombre, double peso)
    {
        this.nombre = nombre;
        this.peso = peso;
    }

    public string Nombre
    {
        get { return nombre; }
        set { nombre = value; }
    }

    public double Peso
    {
        get { return peso; }
        set { peso = value; }
    }

    public void Comer()
    {
        Console.WriteLine(nombre + " está comiendo.");
    }

    public void Comer(string alimento)
    {
        Console.WriteLine(nombre + " está comiendo " + alimento);
    }

    public abstract void Alimentarse();
}