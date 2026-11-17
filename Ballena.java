public class Ballena extends Mammifero
        implements Mammifero.ISonido {

    public Ballena(String nombre, double peso) {
        super(nombre, peso);
    }

    @Override
    public void alimentarse() {
        System.out.println("La ballena se alimenta de krill y pequeños organismos.");
    }

    @Override
    public void emitirSonido() {
        System.out.println("La ballena emite sonidos bajo el agua.");
    }
}