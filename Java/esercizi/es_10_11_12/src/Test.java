import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Test {
    public static void main(String[] args) {
        double raggio = 0;
        double base = 0;
        double altezza = 0;
        boolean err = false;

        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);
        //raggio
        do {
            System.out.println("Inserisci il raggio del cerchio: ");
            try {
                raggio = Double.parseDouble(tastiera.readLine());
                err = false;
            } catch (IOException e) {
                System.out.println("Errore di Input/Output. ");
                err = true;
            } catch (NumberFormatException e) { //altro errore
                System.out.println("Non hai inserito un numero. ");
                err = true;
            }
        }while(err);
        //base del rettangolo
        do {
            System.out.println("Inserisci la base del rettangolo: ");
            try {
                base = Double.parseDouble(tastiera.readLine());
                err = false;
            } catch (IOException e) {
                System.out.println("Errore di Input/Output. ");
                err = true;
            } catch (NumberFormatException e) { //altro errore
                System.out.println("Non hai inserito un numero. ");
                err = true;
            }
        }while(err);
        //altezza del rettangolo
        do {
            System.out.println("Inserisci l'altezza del rettangolo: ");
            try {
                altezza = Double.parseDouble(tastiera.readLine());
                err = false;
            } catch (IOException e) {
                System.out.println("Errore di Input/Output. ");
                err = true;
            } catch (NumberFormatException e) { //altro errore
                System.out.println("Non hai inserito un numero. ");
                err = true;
            }
        }while(err);

        Circle Cerchio = new Circle(raggio);
        Rectangle Rettangolo = new Rectangle(base, altezza);

        if(Cerchio.getArea() == Rettangolo.getArea()){
            System.out.println("Il cerchio e il rettangolo hanno la stessa area, " + Cerchio.getArea() + " .");
        }
        else{
            System.out.println("Il cerchio e il rettangolo non hanno la stessa area.");
        }
    }
}
