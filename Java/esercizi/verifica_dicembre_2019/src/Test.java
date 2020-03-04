public class Test {
    public static void main(String[] args){
        Classe c1 = new Classe(3, 'A');
        Classe c2 = new Classe(4, 'D');
        ClasseConAlunni ca1 = new ClasseConAlunni(5, 'D', 21);
        ClasseConAlunni ca2 = new ClasseConAlunni(4, 'C', 19);
        Scuola s = new Scuola("ITIS Mario Delpozzo CN");
        if(ca1.stessaSezione(ca2)){
            System.out.println("La " + ca1.getAnno() + ca1.getSezione() + " ha la stessa sezione della " + ca2.getAnno() + ca2.getSezione() + ".");
        }
        else{
            System.out.println("La " + ca1.getAnno() + ca1.getSezione() + " non ha la stessa sezione della " + ca2.getAnno() + ca2.getSezione() + ".");
        }
    }
}
