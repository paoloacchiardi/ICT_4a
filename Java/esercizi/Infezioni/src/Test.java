public class Test {
    public static void main(String[] args) {
        MalattiaInfettiva COVID_19 = new MalattiaInfettiva("COVID-19", 2.6);
        Focolaio Codogno = new Focolaio("Codogno", 147, 7);
        Focolaio Cuneo = new Focolaio("Cuneo", 13, 1);
        COVID_19.addFocolaio(Codogno);
        COVID_19.addFocolaio(Cuneo);
        int c = 0;
        for(int k=0;k < COVID_19.focolai.size(); k++){
            c+= COVID_19.focolai.elementAt(k).getInfetti();
        }
        double giorni = 0f;
        for(int contagi = c; contagi < 4356406; contagi*=2){
            giorni+=COVID_19.getTempo();
        }
        System.out.println(String.format("Se non si prendono metodi di contenimento del contagio in %.2f giorni tutto il Piemonte sarà infetto.", giorni));
        double giorni_two = 0;
        for(double contagi = 1890; contagi > 1; contagi/=2){
            giorni_two+=COVID_19.getTempo();
        }
        System.out.println(String.format("Il contagio in Lombardia è partito %.2f giorni fa.", giorni_two));
    }
}
