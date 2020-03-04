import utility.tastiera;

public class Main {
    public static void main(String[] args) {
        Noleggio n = new Noleggio("fra", "ggg", "horror", "si",
                2020, 3, 1, 5f);
        Noleggio n1 = new Noleggio("fra", "ggg", "horror", "si",
                2020, 3, 1, 5f);
        Noleggio n2 = new Noleggio("fra", "ggg", "horror", "si",
                2020, 3, 1, 5f);
        ListaFilm l = new ListaFilm();
        l.addNoleggio(n);
        l.addNoleggio(n1);
        l.addNoleggio(n2);
        System.out.println(n.reso(2020, 3, 5));
        System.out.println(n1.reso(2020, 3, 5));
        System.out.println(n2.reso(2020, 3, 5));
        System.out.println(l.visualizza());
        System.out.println(l.getFilmNoleggiati("fra"));
    }
}