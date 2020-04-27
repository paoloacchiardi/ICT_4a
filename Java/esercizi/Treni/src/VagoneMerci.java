public class VagoneMerci extends Vagone{
    private int volumeCarico;
    private int pesoMax;
    private int pesoEffettivo;
    public VagoneMerci(String codice, int pesoVuoto, String aziendaCostruttrice, int annoCostruzione, int volumeCarico, int pesoMax){
        super(codice, pesoVuoto, aziendaCostruttrice, annoCostruzione);
        this.volumeCarico = volumeCarico;
        this.pesoMax = pesoMax;
        this.pesoEffettivo = pesoVuoto;
    }
    public void carica(int peso){
        if(pesoEffettivo+peso>pesoMax){
            System.out.println("Non si può superare il peso massimo.");
        }else {
            volumeCarico = (peso > 0) ? (volumeCarico + peso) : volumeCarico;
            pesoEffettivo = volumeCarico + getPesoVuoto();
        }
    }
    public void scarica(int peso){
        if(volumeCarico-peso<0){
            System.out.println("Non si può togliere del peso merci che non è presente sul vagone.");
        }else {
            volumeCarico = (peso > 0) ? (volumeCarico - peso) : volumeCarico;
            pesoEffettivo = volumeCarico + getPesoVuoto();
        }
    }
    public int getPesoTotale(){
        return pesoEffettivo;
    }
    public String toString(){
        String s;
        s = "\nCodice: "+getCodice()+"\tpeso vagone vuoto: "+getPesoVuoto()+"\tazienda costruttrice: "+getAziendaCostruttrice()+"\tanno di costruzione: "+
                getAnnoCostruzione()+"\nVolume del carico: "+volumeCarico+"\tPeso totale: "+pesoEffettivo;
        return s;
    }
}