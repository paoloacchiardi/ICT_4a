public class Azienda{
    private String name;
    private final int MAX_LAVORATORI = 1000;
    private Lavoratore[] Dipendenti;
    private int nDipendente;

    public Azienda(String name){
        nDipendente = 0;
        Dipendenti = new Lavoratore[MAX_LAVORATORI];
        this.name = name;
    }

    public void addDipendente(Lavoratore dipendente){
        if(nDipendente < MAX_LAVORATORI){
            Dipendenti[nDipendente] = dipendente;
            nDipendente++;
        }
    }

    public void removeDipendente(){
        if(nDipendente>0 && nDipendente<MAX_LAVORATORI) {
            nDipendente--;
            Dipendenti[nDipendente] = null;
        }
    }

    public String toString(){
        String s;
        s = "Azienda: " + name;
        for(int k=0; k<nDipendente; k++){
            s += "\nNome: " + Dipendenti[k].getNome() + " Livello: " + Dipendenti[k].getLivello() + " Stipendio: " + Dipendenti[k].getStipendio();
        }
        return s;
    }
}
