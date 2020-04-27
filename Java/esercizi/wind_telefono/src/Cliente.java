import java.util.Date;
import java.util.Vector;

public class Cliente {
    private String nome;
    private String cognome;
    private Date natoIl;
    private String indirizzo;
    protected Vector <Contratto> contratti;

    public Cliente(String nome, String cognome, Date natoIl, String indirizzo){
        this.nome = nome;
        this.cognome = cognome;
        this.natoIl = natoIl;
        this.indirizzo = indirizzo;
    }

    public String getNome() {
        return nome;
    }

    public String getCognome() {
        return cognome;
    }

    public Date getNatoIl() {
        return natoIl;
    }

    public String getIndirizzo() {
        return indirizzo;
    }

    public String toString() {
        String s;
        s = "Nome: "+nome+"\tcognome: "+cognome+"\tnato il: "+natoIl+"\tindirizzo: "+indirizzo;
        for(int k = 0; k< contratti.size(); k++){
            s+=contratti.elementAt(k).toString()+"\n";
        }
        return s;
    }
}