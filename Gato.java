public class Gato extends Mammifero
        implements Mammifero.ISonido {

    private int nBigotes;

    public Gato(String nombre, double peso, int nBigotes) {
        super(nombre, peso);
        this.nBigotes = nBigotes;
    }

    public int getnBigotes() {
        return nBigotes;
    }

    public void setnBigotes(int nBigotes) {
        this.nBigotes = nBigotes;
    }

    @Override
    public void alimentarse() {
        System.out.println("El gato come carne y pescado.");
    }

    @Override
    public void emitirSonido() {
        System.out.println("El gato hace: Miau.");
    }
}
