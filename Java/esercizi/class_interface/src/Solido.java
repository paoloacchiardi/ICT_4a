public abstract class Solido implements FuguraSolida, CorpoSolido , Sfera{ //questa classe ha anche i metodi di FiguraSolida e CorpoSolido
    private double pesoSpecifico;
    Solido(double pesoSpecifico){ this.pesoSpecifico = pesoSpecifico; }
    public double getPesoSpecifico(){ return pesoSpecifico; }
    public double peso(){ return pesoSpecifico * volume(); }
    //binding dinamico = i metodi si scoprono in fase di esecuzione
}
