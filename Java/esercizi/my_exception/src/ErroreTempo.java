public class ErroreTempo extends RuntimeException{
    public ErroreTempo(String s){
        super(s);
    }
    public ErroreTempo(){
        super("Errore tempo non controllato");
    }
}
