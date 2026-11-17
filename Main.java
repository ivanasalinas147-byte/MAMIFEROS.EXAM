public class Main {
    public static void main(String[] args) {

        Gato gato = new Gato("Michi", 5, 24);
        Vaca vaca = new Vaca("Lola", 450, 20);
        Ballena ballena = new Ballena("Azul", 12000);

        System.out.println("=== GATO ===");
        System.out.println("Nombre: " + gato.getNombre());
        System.out.println("Peso: " + gato.getPeso());
        System.out.println("Bigotes: " + gato.getnBigotes());
        gato.alimentarse();
        gato.emitirSonido();

        System.out.println("\n=== VACA ===");
        System.out.println("Nombre: " + vaca.getNombre());
        System.out.println("Peso: " + vaca.getPeso());
        System.out.println("Litros de leche: " + vaca.getLitrosDeLeche());
        vaca.alimentarse();
        vaca.emitirSonido();

        System.out.println("\n=== BALLENA ===");
        System.out.println("Nombre: " + ballena.getNombre());
        System.out.println("Peso: " + ballena.getPeso());
        ballena.alimentarse();
        ballena.emitirSonido();

        System.out.println("\n=== SOBRECARGA ===");
        gato.comer();
        gato.comer("Pescado");
    }
}
