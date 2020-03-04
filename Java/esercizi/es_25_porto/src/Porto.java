public class Porto {
    protected static final int POSTI_BARCHE = 100;
    private Barca[] vett_barche;
    private Affitto[] vett_affitti;
    private Posto[] vett_posti;
    private double costo_metro_quadrato;

    public Porto(double costo){
        vett_barche = new Barca[POSTI_BARCHE];
        vett_affitti = new Affitto[POSTI_BARCHE];
        vett_posti = new Posto[POSTI_BARCHE];
        costo_metro_quadrato = (costo>0)? costo : 0;
    }

    public void setCosto_metro_quadrato(double num){
        costo_metro_quadrato = (num>0)? num : 0;
    }

    public double getCosto_metro_quadrato() {
        return costo_metro_quadrato;
    }

    public void addAffitto(Affitto nome){
        int k = 0;
        while(vett_affitti[k]!= null ) {
            k++;
        }
        if(k<POSTI_BARCHE){
            vett_affitti[k] = nome;
        }
    }

    public void addBarca(Barca nome){
        int k = 0;
        while(vett_barche[k]!= null) {
            k++;
        }
        if(k<POSTI_BARCHE){
            vett_barche[k] = nome;
        }
    }

    public void addPosto(Posto posto){
        int k = 0;
        while(vett_posti[k]!= null){
            k++;
        }
        vett_posti[k] = posto;
    }

    public String nomeAffittuario(int num){
        int k = 0;
        String s;
        boolean tro = false;
        do{
            if(num == vett_affitti[k].getNum_barca()){
                tro = true;
            }
            k++;
        }while(vett_affitti[k]!= null && !tro);
        k--;
        if(tro){
            s = "Nome affittuario: " + vett_affitti[k].getNome_cliente();
        }
        else{
            s = "Numero di barca non trovato.";
        }
        return s;
    }

    public String getPrezzo(int num_posto){
        String s;
        int k = 0;
        boolean tro = false;
        while(vett_posti[k]!= null && !tro){
            if(vett_posti[k].getNumPosto() == num_posto){
                tro = true;
            }
            k++;
        }
        if(tro){
            k--;
            s = "Il posto costa " + vett_posti[k].getCosto() + " .";
        }
        else{
            s = "Il posto non ha un prezzo definito. ";
        }
        return s;
    }

    public String controlla(int num_posto){
        String s;
        int k = 0;
        boolean tro = false;
        while(vett_posti[k]!= null && !tro){
            if(vett_posti[k].getNumPosto() == num_posto){
                tro = true;
            }
            k++;
        }
        k--;
        if(tro){
            s = "Il posto " + vett_posti[k].getNumPosto() + " non è libero.";
        }
        else{
            s = "Il posto " + num_posto + " è libero.";
        }
        return s;
    }

    public boolean affittaPosto(int num_posto, String nome, int gi, int mi, int ai, int gf, int mf, int af, Barca barca){
        int k = 0;
        boolean tro = false;
        while(vett_posti[k]!= null && !tro){
            if (vett_posti[k].getNumPosto() == num_posto) {
                tro = true;
            }
        }
        k=0;
        if(!tro) {
            while (vett_affitti[k] != null) {
                k++;
            }
            vett_affitti[k].setNome_cliente(nome);
            vett_affitti[k].setDataInizio(gi, mi, ai);
            vett_affitti[k].setDataFine(gf, mf, af);
            k=0;
            while(vett_barche[k] != null){
                k++;
            }
            vett_barche[k] = barca;
        }
        return tro;
    }

    public String toString(){
        String s;
        int k = 0;
        s = "Barche:\n";
        while(vett_barche[k]!= null){
            s+= "\tMatricola: " + vett_barche[k].getMatricola() + "\n\tDimensione: " + vett_barche[k].getDimensione() + "\n\tAnno di fabbricazione: " + vett_barche[k].getAnno_fabbricazione() + "\n";
            k++;
        }
        k=0;
        s+= "Affitti: \n";
        while(vett_affitti[k]!= null){
            s+= "\tNome cliente: " + vett_affitti[k].getNome_cliente() + "\n\tNumero barca: " + vett_affitti[k].getNum_barca() + "\n\tData inizio: " + vett_affitti[k].getDataInizio() + "\n\tData fine: " + vett_affitti[k].getDataFine() + "\n";
            k++;
        }
        return s;
    }
}
