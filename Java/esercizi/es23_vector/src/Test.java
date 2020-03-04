public class Test {
    public static void main(String[] args) {
        Carburante benzinaio = new Carburante();
        benzinaio.addElement(4.7);
        benzinaio.addElement(5.3);
        benzinaio.addElement(5.0);
        System.out.println(benzinaio.getMedia() + " " + benzinaio.getMax() + " " + benzinaio.getMin() + " .");
    }
}
