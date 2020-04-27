public class VagonePasseggeri extends Vagone{
    private int classe;
    private int postiTotali;
    private int postiOccupati;
    private static final int PESO_PERSONA = 65;

    public VagonePasseggeri(String codice, int pesoVuoto, String aziendaCostruttrice, int annoCostruzione,int classe,int postiTotali, int postiOccupati){
        super(codice, pesoVuoto, aziendaCostruttrice, annoCostruzione);
        this.classe = classe;
        this.postiTotali = (postiTotali>0)? postiTotali : 1;
        if(postiOccupati>postiTotali || postiOccupati<0){
            System.out.println("Valori non validi.");
            this.postiOccupati = 0;
        }else{
            this.postiOccupati = postiOccupati;
        }
    }
    public void salgono(int nPax){
        if(nPax+postiOccupati>postiTotali) {
            System.out.println("Non ci sono abbastanza posti.");
        }else if(nPax<0){
            System.out.println("Non può salire sul treno un numero negativo di passeggeri.");
        }else{
            postiOccupati+=nPax;
        }
    }
    public void scendono(int nPax){
        if(nPax<0){
            System.out.println("Non può scendere dal treno un numero negativo di passeggeri.");
        }else if(nPax>postiOccupati){
            System.out.println("Non può scendere sal treno un numero di passeggeri maggiore del numero di passeggeri che sono sul treno attualmente.");
        }else{
            postiOccupati-=nPax;
        }
    }
    public String toString(){
        String s;
        s = "\nCodice: "+getCodice()+"\tpeso vagone vuoto: "+getPesoVuoto()+"\tazienda costruttrice: "+getAziendaCostruttrice()+"\tanno di costruzione: "+
                getAnnoCostruzione()+"\tclasse del vagone: "+classe+"\nposti totali: "+postiTotali+"\tposti occupati: "+postiOccupati;
        return s;
    }
    public void setClasse(int classe) {
        this.classe = classe;
    }
    public void setPostiOccupati(int postiOccupati) {
        if(postiOccupati>postiTotali || postiOccupati<0){
            System.out.println("Valori non validi.");
            this.postiOccupati = 0;
        }else{
            this.postiOccupati = postiOccupati;
        }
    }
    public void setPostiTotali(int postiTotali){
        this.postiTotali = (postiTotali > 0)? postiTotali : 1;
    }
    public int getClasse() {
        return classe;
    }
    public int getPostiOccupati() {
        return postiOccupati;
    }
    public int getPostiTotali() {
        return postiTotali;
    }
    public int getPesoTotale(){
        return getPesoVuoto()+(postiOccupati*PESO_PERSONA);
    }
}