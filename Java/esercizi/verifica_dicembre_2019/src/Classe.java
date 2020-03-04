public class Classe {
    public int anno;
    public char sezione;
    private static final int ANNOMIN = 1;
    private static final int ANNOMAX = 5;

    public Classe(int num, char sez){
        anno = (num >= ANNOMIN && num <= ANNOMAX) ? num : ANNOMIN;
        sezione = sez;
    }
    public void setAnno(int num){
        anno = (num >= ANNOMIN && num <= ANNOMAX) ? num : ANNOMIN;
    }
    public void setSezione(char sez){
        sezione = sez;
    }
    public int getAnno(){ return anno; }
    public char getSezione(){ return sezione; }
    public boolean stessaSezione(Classe classe2){
        boolean value;
        value = (classe2.getSezione() == this.sezione) ? true : false;
        return value;
    }
    public String toString(){
        String s;
        s = "Anno: " + anno + " Sezione: " + sezione;
        return s;
    }
}
