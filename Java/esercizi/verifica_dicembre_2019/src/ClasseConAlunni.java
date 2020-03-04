public class ClasseConAlunni extends Classe{
    private int numeroAlunni;

    public ClasseConAlunni(int num, char sez, int numAlunni){
        super(num,sez);
        numeroAlunni = (numAlunni > 0) ? numAlunni : 0;
    }

    public void setNumeroAlunni(int numAlunni){
        numeroAlunni = (numAlunni > 0) ? numAlunni : 0;
    }

    public int getNumeroAlunni(){ return numeroAlunni; }

    public String toString() {
        return super.toString() + " Numero alunni: " + numeroAlunni;
    }
}
