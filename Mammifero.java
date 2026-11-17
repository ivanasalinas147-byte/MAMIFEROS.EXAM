public abstract class Mammifero {

	private String nombre;
	private double peso;

	public Mammifero() {
		this.nombre = "Desconocido";
		this.peso = 0;
	}

	public Mammifero(String nombre, double peso) {
		this.nombre = nombre;
		this.peso = peso;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public double getPeso() {
		return peso;
	}

	public void setPeso(double peso) {
		this.peso = peso;
	}

	public void comer() {
		System.out.println(nombre + " está comiendo.");
	}

	public void comer(String alimento) {
		System.out.println(nombre + " está comiendo " + alimento);
	}

	public abstract void alimentarse();

	public interface ISonido {
		void emitirSonido();
	}
}
