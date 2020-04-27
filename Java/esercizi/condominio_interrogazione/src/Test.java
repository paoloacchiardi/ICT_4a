public class Test {
    public static void main(String[] args) {
        Condominio Edelweiss = new Condominio("Edelweiss","Piave","Cuneo");
        Proprietario Paolo = new Proprietario("Paolo", "Acchiardi"); //ancora da implementare
        Edelweiss.addAppartamento(25,7,Paolo);
        Edelweiss.Appartamento Stanza1 = new Edelweiss.Appartamento(17,4,Paolo);
    }
}
