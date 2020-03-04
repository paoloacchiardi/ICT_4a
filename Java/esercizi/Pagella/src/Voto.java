public class Voto{
    private Data giorno;    //data in cui si ha preso il voto
    private float voto;
    private float peso;     //peso del voto
    private char tipo;      //tipo: Scritto/Orale/Pratico

    public Voto(Data giorno, float voto, float peso, char tipo) {
        this.giorno = giorno;
        if (voto >= 1 && voto <= 10) {  //voto valido
            this.voto = voto;
        } else {
            this.voto = 1f;
        }
        if (peso >= 0) {    //peso valido
            this.peso = peso;
        } else {
            this.peso = 1f;
        }
        if (tipo == 's' || tipo == 'o' || tipo == 'p') {    //tipo valido
            this.tipo = tipo;
        } else {
            this.tipo = 'o';
        }
    }

    public String toString() {
        return this.giorno.toString() + String.format(": %.2f (%.2f) %c", this.voto, this.peso, this.tipo); //stampo il voto
    }

    public Data getGiorno() {
        return giorno;
    }

    public float getVoto() {
        return voto;
    }

    public float getPeso() {
        return peso;
    }

    public char getTipo() {
        return tipo;
    }

    public void setGiorno(Data giorno) {
        this.giorno = giorno;
    }

    public void setVoto(float voto) {
        if (voto >= 1 && voto <= 10) {
            this.voto = voto;
        } else {
            this.voto = 1f;
        }
    }

    public void setPeso(float peso) {
        if (peso >= 0) {
            this.peso = peso;
        } else {
            this.peso = 1f;
        }
    }

    public void setTipo(char tipo) {
        if (tipo == 's' || tipo == 'o' || tipo == 'p') {
            this.tipo = tipo;
        } else {
            this.tipo = 'o';
        }
    }
}
