using System;

class Program
{
    static void Main(string[] args)
    {
        Gato gato = new Gato("Michi", 5, 24);
        Vaca vaca = new Vaca("Lola", 450, 20);
        Ballena ballena = new Ballena("Azul", 12000);

        Console.WriteLine("=== GATO ===");
        Console.WriteLine("Nombre: " + gato.Nombre);
        Console.WriteLine("Peso: " + gato.Peso);
        Console.WriteLine("Bigotes: " + gato.NBigotes);
        gato.Alimentarse();
        gato.EmitirSonido();

        Console.WriteLine("\n=== VACA ===");
        Console.WriteLine("Nombre: " + vaca.Nombre);
        Console.WriteLine("Peso: " + vaca.Peso);
        Console.WriteLine("Litros de leche: " + vaca.LitrosDeLeche);
        vaca.Alimentarse();
        vaca.EmitirSonido();

        Console.WriteLine("\n=== BALLENA ===");
        Console.WriteLine("Nombre: " + ballena.Nombre);
        Console.WriteLine("Peso: " + ballena.Peso);
        ballena.Alimentarse();
        ballena.EmitirSonido();

        Console.WriteLine("\n=== SOBRECARGA ===");
        gato.Comer();
        gato.Comer("Pescado");
    }
}