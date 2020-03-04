public class giocatore{

    private String nome;
    private double punteggio;
    private int eta;
    private String ruolo;

    public giocatore(String nome, int eta, String ruolo){
        this.nome = nome;
        if(eta>0 && eta<100){
            this.eta = eta;
        }
        else{
            this.eta = 18; //default
        }
        this.ruolo = ruolo;
    }

    public giocatore(String nome, int eta, double punteggio, String ruolo){
        this.nome = nome;
        if(eta>0 && eta<100){
            this.eta = eta;
        }
        else {
            this.eta = 18; //default
        }
        this.punteggio = punteggio;
        this.ruolo = ruolo;
    }

    public String getNome(){ return nome; }

    public double getPunteggio(){ return punteggio; }

    public int getEta(){ return eta; }

    public void setPunteggio(double nuovoPunteggio){
        this.punteggio = nuovoPunteggio;
    }

    public String toString(){
        String s;
        s = "nome: " + nome + "\npunteggio: " + punteggio + "\netà: " + eta + "\n";
        return s;
    }



}
