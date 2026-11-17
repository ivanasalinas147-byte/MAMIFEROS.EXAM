public class Vaca extends Mammifero
        implements Mammifero.ISonido {

    private double litrosDeLeche;

    public Vaca(String nombre, double peso, double litrosDeLeche) {
        super(nombre, peso);
        this.litrosDeLeche = litrosDeLeche;
    }

    public double getLitrosDeLeche() {
        return litrosDeLeche;
    }

    public void setLitrosDeLeche(double litrosDeLeche) {
        this.litrosDeLeche = litrosDeLeche;
    }

    @Override
    public void alimentarse() {
        System.out.println("La vaca come pasto.");
    }

    @Override
    public void emitirSonido() {
        System.out.println("La vaca hace: Muuu.");
    }
}
