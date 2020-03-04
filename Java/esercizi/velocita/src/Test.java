/*
    Dichiarare una classe di nome “velocita” che ha come attributo la velocità in km/h (vel). Possiede solo il
    costruttore senza parametri che inizializza la velocità a 0. Definire i 4 metodi get e set che
    restituiscono/impostano la velocità in Km/h o in m/s.
*/

public class Test {
    public static void main(String[] args) {
        Velocita vel = new Velocita();
        vel.setVelKmH(35);
        System.out.println(vel.getVelKmH()+ " km/h");
        vel.setVelMS(23);
        System.out.println(vel.getVelKmH()+ " km/h");
        System.out.println(vel.getVelMS()+ " m/s");
    }
}
