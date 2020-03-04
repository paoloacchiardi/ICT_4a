public class LavoratoreConStraordinariPagati extends Lavoratore{
    public int oreStraordinario;
    public static final int retribuzioneOraria = 10;

    public LavoratoreConStraordinariPagati(String nome, int livello, int ore){
        super(nome, livello);
        this.nome = nome;
        this.livello = (livello>-1 && livello<9)? livello : 0;
        oreStraordinario = (ore>=0)? ore : 0;
    }

    public String stampaStraordinari(){
        String s;
        s = "Le ore di straordinari sono " + oreStraordinario;
        return s;
    }

    public String stampaStipendio(){
        String s;
        s = "Lo stipendio totale vale " + (getStipendio() + (oreStraordinario * retribuzioneOraria));
        return s;
    }

    public void setOreStraordinario(int num){
        oreStraordinario = (num >= 0)? num : 0;
    }

    public int getOreStraordinario(){ return oreStraordinario; }

    public float getStipendioConStraordinari(){
        return (getStipendio() + (oreStraordinario * retribuzioneOraria));
    }
}
