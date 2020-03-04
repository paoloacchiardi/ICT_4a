public class Pagella {
    private int periodo; //da 1 a 3
    private int nMaterie; //numero materie
    private final int NMAXMATERIE=15; //numero massimo materie
    private Materia[] materie; //vettore di materie

    public Pagella(int periodo){
        this.periodo=periodo;
        nMaterie=0;
        materie= new Materia[NMAXMATERIE];
    }

    public String toString(){
        int i;
        String stampa= " ";
        for(i=0;i<nMaterie;i++){
            stampa= stampa + String.format("\n\t") + materie[i].toString();
        }
        return String.format("pagella del %d periodo:",periodo) + stampa + String.format("\n");
    }

    public void aggiungiMateria(Materia materia){
        if(nMaterie<NMAXMATERIE){ //numero materie < 15
            materie[nMaterie]=materia;
            nMaterie++;
        }
    }

    public void aggiungiVotoMateria(String materia,Voto v){
        int i;
        i=0;
        while(i<nMaterie){
            if (materia == materie[i].getNome()) {
                materie[i].aggiungiVoto(v);
                i++;
            }
        }
    }

    public int getPeriodo() {
        return periodo;
    }

    public int getNMaterie() {
        return nMaterie;
    }
}
