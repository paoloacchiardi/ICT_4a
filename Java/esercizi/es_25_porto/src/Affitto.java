public class Affitto {
    private String nome_cliente;
    private int giorno_inizio;
    private int mese_inizio;
    private int anno_inizio;
    private int giorno_fine;
    private int mese_fine;
    private int anno_fine;
    private int num_barca;

    public Affitto(String nome, int gi, int mi, int ai, int gf, int mf, int af, int num){
        nome_cliente = nome;
        int vett[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        anno_inizio = (ai>0)? ai : 0;
        if(anno_inizio==0 || (anno_inizio % 4) == 0){
            vett[1] = 29;
        }
        mese_inizio = (mi>0 && mi<13)? mi : 0;
        giorno_inizio = (gi>0 && gi<vett[mese_inizio-1])? gi : 0;
        anno_fine = (af>0)? af : 0;
        if(anno_fine==0 || (anno_fine % 4) == 0){
            vett[1] = 29;
        }
        mese_fine = (mf>0 && mf<13)? mf : 0;
        giorno_fine = (gf>0 && gf<vett[mese_fine-1])? gf : 0;
        num_barca = (num>0 && num<101)? num : -1;
    }

    public void setDataInizio(int g, int m, int a){
        int vett[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        anno_inizio = (a>0)? a : 0;
        if(anno_inizio==0 || (anno_inizio % 4) == 0){
            vett[1] = 29;
        }
        mese_inizio = (m>0 && m<13)? m : 0;
        giorno_inizio = (g>0 && g<vett[mese_inizio-1])? g : 0;
    }

    public void setDataFine(int g, int m, int a){
        int vett[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        anno_fine = (a>0)? a : 0;
        if(anno_fine==0 || (anno_fine % 4) == 0){
            vett[1] = 29;
        }
        mese_fine = (m>0 && m<13)? m : 0;
        giorno_fine = (g>0 && g<vett[mese_fine-1])? g : 0;
    }

    public void setNum_barca(int num){
        num_barca = (num>0 && num<101)? num : -1;
    }

    public void setNome_cliente(String nome){
        nome_cliente = nome;
    }

    public String getDataInizio(){
        return giorno_inizio + "/" + mese_inizio + "/" + anno_inizio;
    }

    public String getDataFine(){
        return giorno_fine + "/" + mese_fine + "/" + anno_fine;
    }

    public String getNome_cliente() {
        return nome_cliente;
    }

    public int getNum_barca() {
        return num_barca;
    }

    public String toString(){
        return "Nome cliente: " + nome_cliente + " Numero barca: " + num_barca + " Data inizio: " + getDataInizio() + " Data fine: " + getDataFine();
    }

}
