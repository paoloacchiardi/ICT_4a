public class Barca {
    private int matricola;
    private double dimensione;
    private int anno_fabbricazione;

    public Barca(int matricola, double dimensione, int anno_fabbricazione){
        this.matricola = (matricola>0 && matricola< Porto.POSTI_BARCHE+1) ? matricola : -1;
        this.dimensione = (dimensione>0) ? dimensione : 0;
        this.anno_fabbricazione = (anno_fabbricazione>0) ? anno_fabbricazione : 0;
    }

    public void setAnno_fabbricazione(int anno_fabbricazione){
        this.anno_fabbricazione = (anno_fabbricazione>0) ? anno_fabbricazione : 0;
    }

    public void setDimensione(double dimensione) {
        this.dimensione = (dimensione>0) ? dimensione : 0;
    }

    public void setMatricola(int matricola) {
        this.matricola = (matricola>0 && matricola< Porto.POSTI_BARCHE+1) ? matricola : -1;
    }

    public int getAnno_fabbricazione() {
        return anno_fabbricazione;
    }

    public double getDimensione() {
        return dimensione;
    }

    public int getMatricola() {
        return matricola;
    }

    public String toString(){
        return "Matricola: " + matricola + " Dimensione: " + dimensione + " Anno di fabbricazione: " + anno_fabbricazione;
    }

}
