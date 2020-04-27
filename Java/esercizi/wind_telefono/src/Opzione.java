public class Opzione {
    private String nome;
    private double costo;
    private String descrizione;

    public Opzione(String nome, double costo, String descrizione) throws ValoreNonValido{
        this.nome = nome;
        if(costo>=0){
            this.costo = costo;
        }else{
            throw new ValoreNonValido("Il costo dell'opzione non può essere inferiore a 0.");
        }
        this.descrizione = descrizione;
    }

    public String getNome() {
        return nome;
    }

    public double getCosto() {
        return costo;
    }

    public String getDescrizione() {
        return descrizione;
    }

    public String toString() {
        String s;
        s = "Nome: "+nome+"\tcosto: "+costo+"\tdescrizione: "+descrizione;
        return s;
    }
}