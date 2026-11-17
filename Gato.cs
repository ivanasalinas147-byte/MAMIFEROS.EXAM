using System;

public class Gato : Mammifero, ISonido
{
    private int nBigotes;

    public Gato(string nombre, double peso, int nBigotes)
        : base(nombre, peso)
    {
        this.nBigotes = nBigotes;
    }

    public int NBigotes
    {
        get { return nBigotes; }
        set { nBigotes = value; }
    }

    public override void Alimentarse()
    {
        Console.WriteLine("El gato come carne y pescado.");
    }

    public void EmitirSonido()
    {
        Console.WriteLine("El gato hace: Miau.");
    }
}