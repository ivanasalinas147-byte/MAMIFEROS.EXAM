using System;

public class Ballena : Mammifero, ISonido
{
    public Ballena(string nombre, double peso)
        : base(nombre, peso)
    {
    }

    public override void Alimentarse()
    {
        Console.WriteLine("La ballena se alimenta de krill y pequeños organismos.");
    }

    public void EmitirSonido()
    {
        Console.WriteLine("La ballena emite sonidos bajo el agua.");
    }
}