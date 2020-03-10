public class Focolaio {
    private String nome;
    private int infetti;
    private int tempo_inizio;

    public Focolaio(String nome, int infetti, int inizio){
        this.nome = nome;
        this.infetti = (infetti > 0) ? infetti : 0;
        tempo_inizio = (inizio > 0) ? inizio : 0;
    }

    public void addInfetti(int infetti){
        infetti = (infetti > 0) ? infetti : 0;
        this.infetti += infetti;
    }

    public void removeInfetti(int guariti){
        guariti = (guariti > 0) ? guariti : 0;
        infetti -= guariti;
    }

    public void setInfetti(int infetti){
        this.infetti = (infetti >= 0) ? infetti : this.infetti;
    }

    public String getNome(){
        return nome;
    }

    public int getInfetti(){
        return infetti;
    }

    public int getTempoInizio(){
        return tempo_inizio;
    }

    public String toString(){
        String s;
        s = "Nome: "+nome+"\tInfetti: "+infetti+"\tTempo d'inizio: "+tempo_inizio;
        return s;
    }
}
