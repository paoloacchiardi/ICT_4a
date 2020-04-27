import java.util.Date;
import java.util.Vector;

public class Contratto {
    private String cellulare;
    private Date validoDa;
    private Date emessaFatturaIl;
    private Vector <Numero> numeriGratis = new Vector<Numero>();
    private Vector <Opzione> opzioni = new Vector<Opzione>();
    private static final int TEMPOSOLLECITO = 30;
    private TipoContratto tipo;
    private static final int COSTO_EVO = 65;
    private static final int COSTO_PLUS = 35;
    private static final int COSTO_START = 18;

    public Contratto(String cellulare, Date validoDa, TipoContratto tipo, Cliente sottoscrittoDa) throws ValoreNonValido{
        this.cellulare = cellulare;
        this.validoDa = validoDa;
        if(tipo == TipoContratto.EVO){ this.tipo = tipo; }
        else if(tipo == TipoContratto.PLUS){this.tipo = tipo; }
        else if(tipo == TipoContratto.START){this.tipo = tipo; }
        else{ throw new ValoreNonValido(); }
        sottoscrittoDa.contratti.add(this);
    }

    public void addOpzione(Opzione opz){
        opzioni.add(opz);
    }

    public void addNumeroGratis(Numero numero) throws ValoreNonValido{
        if(numeriGratis.size()<3) {
            for(int k = 0; k< numeriGratis.size(); k++){
                if(numeriGratis.elementAt(k).getCellulare().equals(numero.getCellulare())){
                    throw new ValoreNonValido("Questo numero è già stato inserito.");
                }
            }
            numeriGratis.addElement(numero);
        }else{
            throw new ValoreNonValido("Si possono chiamare gratuitamente solo 3 numeri.");
        }
    }

    public String invioFattura(Cliente cliente){
        String s;
        s = "Emittente: Wind\nCliente: "+cliente.getNome()+" "+
        cliente.getCognome()+"\nCellulare su cui è stato fatto il contratto: "+cellulare+ "\nCosto: "+this.getCostoTotale();
        return s;
    }

    public String invioSollecito(Cliente cliente){
        String s;
        s = "Alla c.a. di "+cliente.getNome()+" "+cliente.getCognome()+",\nle sollecitiamo il pagamento della fattura"
                +" emessa il "+emessaFatturaIl+".";
        return s;
    }

    public double getCostoTotale(){
        double value = 0;
        if(tipo == TipoContratto.EVO){ value+= COSTO_EVO; }
        else if(tipo == TipoContratto.PLUS){ value+= COSTO_PLUS; }
        else if(tipo == TipoContratto.START){ value+= COSTO_START; }
        for(int k = 0; k < opzioni.size(); k++){
            value+=opzioni.elementAt(k).getCosto();
        }
        return value;
    }

    public String getCellulare() {
        return cellulare;
    }

    public Date getValidoDa() {
        return validoDa;
    }

    public Date getEmessaFatturaIl() {
        return emessaFatturaIl;
    }

    public TipoContratto getTipo() {
        return tipo;
    }

    public String toString(){
        String s;
        s = "Cellulare: "+cellulare+"\tValido dal: "+validoDa+"\tFattura emessa il: "+emessaFatturaIl+"\tTipo del contratto: "+tipo;
        return s;
    }
}