
public abstract class Mammifero {

    private String nombre;
    private double peso;

    public Mammifero(String n, double p) {
        nombre = n;
        peso = p;
    }

    // Constructor sobrecargado
    public Mammifero() {
        nombre = "";
        peso = 0.0;
    }

    public void comer() {
        System.out.println(nombre + " esta comiendo.");
    }

    public void comer(String comida) {
        System.out.println(nombre + " come " + comida);
    }

    public void comer(String comida, int cantidad) {
        System.out.println(nombre + " come " + cantidad
                + " porciones de " + comida);
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String n) {
        nombre = n;
    }

    public double getPeso() {
        return peso;
    }

    public void setPeso(double n) {
        peso = n;
    }

    public abstract void alimentarse();
}
