public abstract class Cubo extends Solido {
    double lato;
    public Cubo(double pesoSpecifico, double lato){
        super(pesoSpecifico);
        this.lato = lato;
    }
    public double volume(){ return 0; }
    public double superficie(){ return 0; }
    public double getLato(){ return lato; }
}
