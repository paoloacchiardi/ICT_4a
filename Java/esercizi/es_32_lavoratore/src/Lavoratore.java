public class Lavoratore {
    protected String nome;
    protected int livello;
    protected float stipendio;

    public Lavoratore(String nome, int livello){
        this.nome = nome;
        this.livello = (livello>-1 && livello<9)? livello : 0;
    }

    public String stampaStipendio(){
        String s;
        s = "Lo stipendio è " + stipendio;
        return s;
    }

    public void setStipendio(float num){
        stipendio = (num > 0)? num : 0;
    }

    public void setLevel(int num){
        livello = (num>-1 && num<9)? num : 0;
    }

    public float getStipendio(){ return stipendio; }
    public String getNome(){ return nome; }
    public int getLivello(){ return livello; }


}
