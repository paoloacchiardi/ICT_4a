import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.nio.Buffer;

public class Test {
    public static void main(String[] args) {

        //PROVE MIE
        Porto Savona = new Porto(2000);
        Barca Titanic = new Barca(45, 40.5, 2002);
        Affitto aff_Titanic = new Affitto("Acchiardi", 3,1,2019,7,1,2019,45);
        System.out.println("Titanic: " + aff_Titanic.getNome_cliente());
        Savona.addAffitto(aff_Titanic);
        Savona.addBarca(Titanic);
        System.out.println(Savona.toString());

        //ES INFORMATICA
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader tastiera = new BufferedReader(input);

        boolean err = false;
        int num_barca = 0;
        int num_posto_barca = 0;

        do { //numero barca
            System.out.println("Inserisci il numero della barca: ");
            try {
                num_barca = Integer.parseInt(tastiera.readLine());
                err = false;
            } catch(Exception e) {
                err = true;
            }
        }while(err);
        System.out.println(Savona.nomeAffittuario(num_barca));

        Posto venti = new Posto(20, 30.25);
        Savona.addPosto(venti);
        do{
            System.out.println("Inserisci un posto barca: ");
            try{
                num_posto_barca = Integer.parseInt(tastiera.readLine());
                err = false;
            }
            catch(Exception e){
                err = true;
            }
        }while(err);

        System.out.println(Savona.getPrezzo(num_posto_barca)); //controllo il prezzo del posto per la barca

        do{
            System.out.println("Inserisci un posto barca: ");
            try{
                num_posto_barca = Integer.parseInt(tastiera.readLine());
                err = false;
            }
            catch(Exception e){
                err = true;
            }
        }while(err || num_posto_barca>100 || num_posto_barca<1);

        System.out.println(Savona.controlla(num_posto_barca)); //Controllo se il posto per la barca è libero

        do{
            System.out.println("Inserisci un posto barca: ");
            try{
                num_posto_barca = Integer.parseInt(tastiera.readLine());
                err = false;
            }
            catch(Exception e){
                err = true;
            }
        }while(err || num_posto_barca>100 ||j num_posto_barca<1);

        if(!Savona.affittaPosto(num_posto_barca,"Giacomo",7,3,2019,8,3,2019,Titanic)){ //affittare un posto
            System.out.println("Posto affittato da lei.");
        }
        else{
            System.out.println("Posto già affittato.");
        }
    }
}
