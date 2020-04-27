import java.util.Vector;

public class Treno {
    private String codice;
    private int portataMaxMotrice;
    private int pesoTreno = 0;
    private Vector<Vagone> vagoni = new Vector<Vagone>();

    public Treno(String codice, int portataMaxMotrice){
        this.codice = codice;
        this.portataMaxMotrice = (portataMaxMotrice>0) ? portataMaxMotrice : 1;
    }
    public void aggancia(Vagone v){
        if(v.getPesoTotale()+pesoTreno > portataMaxMotrice){
            System.out.println("Il treno non riesce a portare un peso così grosso.");
        }else {
            boolean err = false;
            for (int k = 0; k < vagoni.size(); k++) {
                if (vagoni.elementAt(k).getCodice().equals(v.getCodice())) {
                    err = true;
                    System.out.println("Questo vagone è già stato inserito.");
                    pesoTreno+=v.getPesoTotale();
                    break;
                }
            }
            if (!err) {
                vagoni.addElement(v);
            }
        }
    }
    public void sgancia(Vagone v){
        boolean tro = false;
        for(int k = 0; k< vagoni.size(); k++){
            if(vagoni.elementAt(k).getCodice().equals(v.getCodice())){
                vagoni.removeElement(v);
                pesoTreno-=v.getPesoTotale();
                tro = true;
                break;
            }
        }
        if(!tro){
            System.out.println("Il vagone non può sganciarsi siccome non fa parte del treno.");
        }
    }
    public int getPesoComplessivo(){
        return pesoTreno;
    }
    public void setPortataMaxMotrice(int portata){
        if(portata<pesoTreno) {
            System.out.println("\nLa portata della motrice non può essere inferiore al peso che il treno sta portando.");
        }else{
            portataMaxMotrice = (portata > 0) ? portata : 1;
        }
    }
    public String getCodice(){ return codice; }
    public int getPortataMaxMotrice(){ return portataMaxMotrice; }
    public int getPesoTreno(){ return pesoTreno; }
    public String getVagoni(){
        String s = "";
        if(vagoni.size() == 0){
            s = "Non ci sono vagoni.";
        }else {
            for (int k = 0; k < vagoni.size(); k++) {
                s +="\nVAGONE "+(k+1)+": "+vagoni.elementAt(k).toString();
            }
        }
        return s;
    }
    public String toString(){
        String s;
        s = "Codice treno: "+codice+"\tPortata massima della motrice: "+portataMaxMotrice+"\tPeso del treno: "+pesoTreno+getVagoni();
        return s;
    }
}