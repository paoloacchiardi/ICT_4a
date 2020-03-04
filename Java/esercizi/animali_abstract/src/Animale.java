public abstract class Animale {
    public String nome;
    Animale(String nome){
        this.nome = nome;
    }
    public abstract void attivita();
    public abstract void vive();
    public abstract void mangia();
    public String presentati(Animale animale){
        return "Mi chiamo " + nome + ", mi piace " + animale.attivita() + ", vivo " + animale.vive() + ", e mangio " +
                animale.mangia() + ".";
    }
}
