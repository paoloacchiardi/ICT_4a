import java.util.Date;

public class Main {
    public static void main(String[] args) {
        Cliente Paolo = new Cliente("Paolo", "Acchiardi", "Date data = new Date(2002,1,3)" , "Via Madonna Del Colletto, 31");
        Numero primoNum = new Numero("3378392647");
        Contratto contrattoPaolo = new Contratto("3396159692","31/03/2020","EVO",Paolo);
        System.out.println(Paolo.toString());
    }
}
