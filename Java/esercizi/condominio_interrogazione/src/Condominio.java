import java.util.Vector;

public class Condominio {
    private String nome;
    private String via;
    private String citta;
    private Vector <Appartamento> appartamenti = new Vector<Appartamento>();

    public Condominio(String nome, String via, String citta){
        this.nome = nome;
        this.via = via;
        this.citta = citta;
    }
    public String getNome(){ return nome; }
    public String getVia(){ return via; }
    public String getCitta(){ return citta; }
    public void addAppartamento(double mq, int mill, Proprietario p){

        //new class Appartamento

        public class Appartamento{
            private double mq;
            private int mill;
            private Proprietario proprietario;
            private Inquilino inquilino;
            private Vector<Spesa> versamenti = new Vector<Spesa>();

            public Appartamento(double mq, int mill, Proprietario p){
                this.mq = (mq > 0) ? mq : 1;
                this.mill = (mill > 0) ? mill : 1;
                proprietario = p;
            }
            public double getMq(){ return mq; }
            public int getMill(){ return mill; }
            public Proprietario getProprietario(){ return proprietario; }
            public Inquilino getInquilino(){ return inquilino; }
            public Vector<Spesa> getVersamenti(){ return versamenti; }
            public void setInquilino(Inquilino i){ inquilino = i; }
            public void setProprietario(Proprietario p){ proprietario = p; }
            public void addVersamento(Spesa s){
                versamenti.addElement(s);
            }
            public String toString(){
                String s;
                s = "\nMetri quadri: "+mq+"\tmill: "+mill;
            }
        }
        Appartamento appartamento = new Appartamento(mq,mill,p);
        appartamenti.addElement(appartamento);
    }
    public String getApp(){
        String s = "";
        for(int k=0;k<appartamenti.capacity();k++){
            s+= "\nAppartamento "+k+":\n"+appartamenti.elementAt(k).toString();
        }
        return s;
    }
}