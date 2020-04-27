public abstract class Vagone {
    private String codice;
    private int pesoVuoto;
    private String aziendaCostruttrice;
    private int annoCostruzione;

    public Vagone(String codice, int pesoVuoto, String aziendaCostruttrice, int annoCostruzione){
        this.codice = codice;
        this.pesoVuoto = (pesoVuoto > 0)? pesoVuoto : 1;
        this.aziendaCostruttrice = aziendaCostruttrice;
        this.annoCostruzione = annoCostruzione;
    }

    public void setPesoVuoto(int peso){
        pesoVuoto = (peso>0)?peso: 1;
    }

    public String getCodice(){ return codice; }

    public int getPesoVuoto() {
        return pesoVuoto;
    }

    public String getAziendaCostruttrice() {
        return aziendaCostruttrice;
    }

    public int getAnnoCostruzione() {
        return annoCostruzione;
    }
    public String toString(){
        String s;
        s = "\nCodice: "+codice+"\tpeso vagone vuoto: "+pesoVuoto+"\tazienda costruttrice: "+aziendaCostruttrice+"\tanno di costruzione: "+annoCostruzione;
        return s;
    }

    public abstract int getPesoTotale();
}