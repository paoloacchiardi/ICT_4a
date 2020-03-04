/* 23.Dichiarare una classe di nome carburante che ha come attributo un vettore di tipo float (contenente i vari prezzi benzina)
 e 3 metodi di nome media, max e min, che restituiscono il prezzo medio, massimo e minimo. */
import java.util.Vector;

public class Carburante {
    private Vector <Double> prezzi_benza;
    private int dim;

    public Carburante(){
        prezzi_benza = new Vector<Double>();
    }

    public Double getMedia() throws EmptyVector{
        if(prezzi_benza.size()<=0) throw new EmptyVector();
        Double somma = 0.0;
        for(int k = 0; k< prezzi_benza.capacity(); k++){ somma+= prezzi_benza.elementAt(k); } //autoboxing
        return somma/prezzi_benza.size();
    }

    public Double getMax() throws EmptyVector{
        if(prezzi_benza.size()<=0) throw new EmptyVector();
        Double max = prezzi_benza.elementAt(0);
        for(int k = 1; k< prezzi_benza.capacity() - 1; k++){ if(prezzi_benza.elementAt(k)>max) max = prezzi_benza.elementAt(k); }
        return max;
    }

    public Double getMin() throws EmptyVector{
        if(prezzi_benza.size()<=0) throw new EmptyVector();
        Double min = prezzi_benza.elementAt(0);
        for(int k = 1; k< prezzi_benza.capacity() - 1; k++){ if(prezzi_benza.elementAt(k)<min) min = prezzi_benza.elementAt(k); }
        return min;
    }

    public void addElement(Double number){ prezzi_benza.addElement(number); }
}