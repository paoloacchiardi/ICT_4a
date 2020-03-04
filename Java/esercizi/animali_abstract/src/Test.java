public class Test {
    public static void main(String[] args){
        Animale[] animali = new Animale[3];
        Scoiattolo scoiattolo = new Scoiattolo("scoiattolo");
        Leone leone = new Leone("Simba");
        Scoiattolo pupi = new Scoiattolo("pupi");
        for(int k=0;k<3;k++){
            animali[k].presentati();
        }
    }
}
