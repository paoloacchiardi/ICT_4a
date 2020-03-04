public class test {
    public static void main(String[] args){
        Data d; //creo l'oggetto data
        d = new Data(18,10,2019);
        System.out.println(d.toString());
        System.out.println(d.getG());   //giorno
        System.out.println(d.getM());   //mese
        System.out.println(d.getA());   //anno
        d.setG(29); //modifico il giorno
        System.out.println(d.toString());
        d.setM(2);  //modifico il mese
        System.out.println(d.toString());
        d.setA(2001);   //modifico l'anno
        System.out.println(d.toString());
        Voto v; //creo l'oggetto voto
        v = new Voto(new Data(15,15,15), 3f, 5f, 's');
        System.out.println(v.toString());
        Materia m;
        m= new Materia("storia");
        m.aggiungiVoto(new Voto(new Data(25,12,2002),10,5,'s'));
        m.aggiungiVoto(new Voto(new Data(26,2,2012),7,10,'o'));
        System.out.println(m.toString());
        System.out.println(m.getNome()); //nome
        System.out.println(m.getnVoti()); //numero voti
        Pagella p; //creo l'oggetto pagella
        p = new Pagella(1);
        p.aggiungiMateria(m); //aggiungo una materia alla pagella
        p.aggiungiMateria(new Materia("italiano")); //aggiungo una nuova materia alla pagella
        System.out.println(p.toString());
        p.aggiungiVotoMateria("italiano",new Voto(new Data(26,2,2012),7,10,'o'));
        System.out.println(p.toString());
        System.out.println(p.getNMaterie()); //stampo numero di materie
        System.out.println(p.getPeriodo()); //stampo valore periodo
    }
}
<BG