public class Vocabolario extends Libro{
    private int definizioni;
    private static final int DEFINIZIONI_DEFAULT = 2000;

    public Vocabolario(){
        super();
        numPagine = NUMPAGINE_DEFAULT;
        definizioni = DEFINIZIONI_DEFAULT;
    }

    public void setDefinizioni(int num){
        definizioni = (num>0) ? num : DEFINIZIONI_DEFAULT;
    }

    public String definitionMessage(){
         return "definizioni: " + definizioni + "\npagine: " + numPagine + "\nmedia definizioni per pagina: " + ((float)definizioni/numPagine);
    }
}
