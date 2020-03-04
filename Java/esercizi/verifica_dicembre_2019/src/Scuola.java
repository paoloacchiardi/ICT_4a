public class Scuola {
    private String nome;
    private ClasseConAlunni[] classi;
    private static final int CLASSI_MAX = 50;
    private int indice;

    public Scuola(String nome) {
        this.nome = nome;
        classi = new ClasseConAlunni[CLASSI_MAX];
        indice = 0;
    }
    public String getNome(){ return nome; }
    public int getIndice(){ return indice; }
    public void addClasse(ClasseConAlunni c){
        if(indice<50){
            classi[indice] = c;
            indice++;
        }
    }
    public float getMediaAlunniPerClasse(){
        float somma = 0;
        int k;
        for(k=0;k<indice;k++){
            somma += classi[k].getNumeroAlunni();
        }
        if(indice!=0){
            return (somma/indice);
        }else {
            return 0;
        }
    }
    public String toString(){
        String s;
        int k;
        s = "Nome: " + nome + "\nClassi:\n";
        for(k=0;k<indice;k++){
            s += classi[k].toString() + "\n";
        }
        return s;
    }
}
