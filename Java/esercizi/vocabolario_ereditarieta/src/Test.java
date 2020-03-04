public class Test {
    public static void main(String[] args) {
        Libro PeterPan = new Libro();
        Vocabolario Italiano = new Vocabolario();
        PeterPan.setNumPagine(57);
        System.out.println(PeterPan.getNumPagine());
        Italiano.setDefinizioni(3490);
        Italiano.setNumPagine(804);
        System.out.println(Italiano.definitionMessage());
    }
}
