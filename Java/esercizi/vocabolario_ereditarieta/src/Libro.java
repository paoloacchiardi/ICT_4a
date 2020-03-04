public class Libro {
    //attributi
    protected int numPagine;
    public static final int NUMPAGINE_DEFAULT = 100;

    public Libro(){
        numPagine = NUMPAGINE_DEFAULT;
    }

    public void setNumPagine(int num){
        numPagine = (num>0) ? num : NUMPAGINE_DEFAULT;
    }

    public int getNumPagine(){
        return numPagine;
    }
}
