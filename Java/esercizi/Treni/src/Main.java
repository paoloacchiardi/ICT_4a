public class Main {
    public static void main(String[] args) {
        Treno PolarExpress = new Treno("TRNPLACHH",12350);
        VagonePasseggeri vgPg_uno = new VagonePasseggeri("PDFJ",250,"Trenitalia",2003,1,45,17);
        vgPg_uno.salgono(11);
        VagoneMerci vgMc = new VagoneMerci("CNK",100,"Frecciarossa",2007,220,950);
        vgMc.carica(567);
        PolarExpress.aggancia(vgMc);
        PolarExpress.aggancia(vgPg_uno);
        PolarExpress.aggancia(vgPg_uno);
        System.out.println(PolarExpress.toString());
        PolarExpress.setPortataMaxMotrice(25);
    }
}