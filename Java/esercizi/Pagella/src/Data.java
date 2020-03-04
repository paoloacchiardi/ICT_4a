public class Data{
    private int g;
    private int m;
    private int a;

    public Data(int g, int m, int a){

        int[] v={31,28,31,30,31,30,31,31,30,31,30,31};  //vettore mesi

        if(a>0) {
            this.a = a;
        }else{
            this.a=2000;
        }
        if(a%4==0){ //anno bisestile
            v[1]=29;
        }
        if (m>=1 && m<=12) {    //controllo che sia un mese
            this.m = m;
        }else {
            this.m = 1;
        }
        if (g>=1 && g<=v[this.m-1]) {    //controllo se il giorno inserito esiste
            this.g = g;
        }else {
            this.g = 1;
        }
    }

    public String toString() {
        String s;
        s = g + "/" + m + "/" + a;
        return s;
    }

    public int getG() { //restituisco il giorno
        return g;
    }

    public int getM() { //restituisco il mese
        return m;
    }

    public int getA() { //restituisco l'anno
        return a;
    }

    public void setG(int g) {
        int[] v={31,28,31,30,31,30,31,31,30,31,30,31};
        if(this.a%4==0){
            v[1]=29;
        }
        if (g>=1 && g<=v[this.m-1]) {
            this.g = g;
        }else {
            this.g = 1;
        }
    }

    public void setM(int m) {
        int[] v={31,28,31,30,31,30,31,31,30,31,30,31};
        if (m>=1 && m<=12) {
            this.m = m;
        }else{
            this.m = 1;
        }
        if(this.a%4==0){
            v[1]=29;
        }
        if (!(g>=1 && g<=v[m-1])) {
            this.g = 1;
        }
    }

    public void setA(int a) {
        if(a>0) {
            this.a = a;
        }else{
            this.a=2000;
        }
    }

}
