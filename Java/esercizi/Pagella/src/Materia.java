public class Materia {
    private String nome;
    private  int nVoti; //numero di voti
    private final int NMAXVOTI = 10; //numero massimo di voti
    private Voto[] voti; //vettore contenente i voti

    public Materia(String nome){
        this.nome = nome;
        nVoti=0;
        voti = new Voto[NMAXVOTI];
    }

    public String toString() {
        String stampa=" ";
        int i;
        for(i=0;i<nVoti;i++){
            stampa= stampa + String.format("\n\t") + voti[i].toString();
        }
        return String.format("Voti della materia %s:",nome) + stampa + String.format("\n");
    }

    public void aggiungiVoto(Voto v){
        if(nVoti<NMAXVOTI){ //numero voti < 10
            voti[nVoti]=v;
            nVoti++;
        }
    }

    public String getNome() {
        return nome;
    }

    public int getnVoti() {
        return nVoti;
    }
}
