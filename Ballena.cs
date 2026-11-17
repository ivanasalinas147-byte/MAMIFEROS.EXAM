
using System;

public class Ballena : Mammifero, ISonido
{
    public Ballena() : base()
    {
    }

    public Ballena(string nombre, double peso)
        : base(nombre, peso)
    {
    }

    public override void alimentarse()
    {
        Console.WriteLine("La ballena se alimenta de krill y pequeños organismos marinos.");
    }

    public void emitirSonido()
    {
        Console.WriteLine("La ballena emite sonidos bajo el agua.");
    }
}
