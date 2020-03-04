import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Test {
    public static void main(String[] args) {
        String nome = null; //paolo
        int livello = 0;
        float stipendio = 0;
        boolean err = true;
        String nome2 = null; //momo
        int livello2 = 0;
        int ore = 0;
        Azienda Ferrero;
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);
        //Input paolo
        System.out.println("Inserisci il nome: ");
        try {
            nome = tastiera.readLine();
            err = false;
        } //readline() riceve una stringa
        catch (IOException e) { //gestisco l'eccezione di IOException
            System.out.println("Errore di Input/Output.");
            //e.printStackTrace();
        }
        do {
            System.out.println("Inserisci un livello: ");
            try {
                livello = Integer.parseInt(tastiera.readLine());
                err = false;
            } //casting string - int
            catch (IOException e) { //gestisco l'eccezione di IOException
                System.out.println("Errore di Input/Output.");
                err = true;
                //e.printStackTrace(); stampa il codice di errore
            } catch (NumberFormatException e) { //altro errore
                System.out.println("Non hai inserito un numero. ");
                err = true;
            }
        } while (err);
        do {
            System.out.println("Inserisci uno stipendio: ");
            try {
                stipendio = Float.parseFloat(tastiera.readLine());
                err = false;
            } //stipendio è un float
            catch (IOException e) {
                System.out.println("Errore di Input/Output. ");
                err = true;
            } catch (NumberFormatException e) { //altro errore
                System.out.println("Non hai inserito un numero. ");
                err = true;
            }
        } while (err);


        //Input momo
        System.out.println("Inserisci il nome: ");
        try {
            nome2 = tastiera.readLine();
        } //readline() riceve una stringa
        catch (IOException e) { //gestisco l'eccezione di IOException
            System.out.println("Errore di Input/Output.");
            //e.printStackTrace();
        }
        do {
            System.out.println("Inserisci un livello: ");
        try {
            livello2 = Integer.parseInt(tastiera.readLine());
            err = false;
        } //casting string - int
        catch (IOException e) { //gestisco l'eccezione di IOException
            System.out.println("Errore di Input/Output.");
            err = true;
            //e.printStackTrace(); stampa il codice di errore
        } catch (NumberFormatException e) { //altro errore
            System.out.println("Non hai inserito un numero. ");
            err = true;
        }
    }while(err);
        do {
            System.out.println("Inserisci le ore di straordinari: ");
            try {
                ore = Integer.parseInt(tastiera.readLine());
                err = false;
            } catch (IOException e) { //gestisco l'eccezione di IOException
                System.out.println("Errore di Input/Output.");
                err = true;
                //e.printStackTrace(); stampa il codice di errore
            } catch (NumberFormatException e) { //altro errore
                System.out.println("Non hai inserito un numero. ");
                err = true;
            }
        }while (err);

        Lavoratore paolo = new Lavoratore(nome, livello); //creo il lavoratore con il nome e il livello inserito da I
        LavoratoreConStraordinariPagati momo = new LavoratoreConStraordinariPagati(nome2, livello2, ore);

        paolo.setStipendio(stipendio);
        System.out.println(paolo.getNome() + " " + paolo.getLivello() + " " + paolo.getStipendio());
        momo.setStipendio(9730);
        System.out.println(momo.getNome() + " " + momo.getLivello() + " " + momo.getStipendioConStraordinari());
        Ferrero = new Azienda("Ferrero");
        Ferrero.addDipendente(paolo);
        Ferrero.removeDipendente();
        System.out.println(Ferrero.toString());
    }
}