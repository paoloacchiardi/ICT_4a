public class Posto {
    private int num_posto;
    private static final int POSTO_MAX = 100;
    private static final int POSTO_MIN = 1;
    private double costo;

    public Posto(int posto, double prezzo){
        num_posto = (posto>=POSTO_MIN && posto <=POSTO_MAX)? posto : 0;
        costo = (prezzo>0)? prezzo : 0;
    }

    public void setCosto(double prezzo){
        costo = (prezzo>0)? prezzo : 0;
    }

    public void setNum_posto(int posto){
        num_posto = (posto>=POSTO_MIN && posto <=POSTO_MAX)? posto : 0;
    }

    public int getNumPosto(){
        return num_posto;
    }

    public double getCosto() {
        return costo;
    }

    public String toString(){
        return "Numero posto: " + num_posto + "\nPrezzo posto: " + costo;
    }

}
