public class ErroreTempoControllato extends Exception{
    public ErroreTempoControllato(String s){
        super(s);
    }
    public ErroreTempoControllato(){
        super("Errore tempo controllato");
    }
}
