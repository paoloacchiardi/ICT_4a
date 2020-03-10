import java.util.Vector;

public class MalattiaInfettiva {
    private String nome;
    private double tempo;
    protected Vector <Focolaio> focolai;

    public MalattiaInfettiva(String nome, double tempo){
        this.nome = nome;
        this.tempo = (tempo > 0) ? tempo : 1;
        focolai = new Vector <Focolaio>();
    }

    public void addFocolaio(Focolaio luogo){
        focolai.addElement(luogo);
    }

    public boolean removeFocolaio(Focolaio luogo){
        if(focolai.removeElement(luogo) == true){ return true; }
        else{ return false; }
    }

    public String getNome(){
        return nome;
    }

    public double getTempo(){
        return tempo;
    }

    public String toString(){
        String s;
        s = "Nome: "+nome+"\tTempo di raddoppio dei contagiati: "+tempo;
        for(int k=0;k<focolai.size();k++){
            s+="\n"+focolai.elementAt(k).toString();
        }
        return s;
    }
}
