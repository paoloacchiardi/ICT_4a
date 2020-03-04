public class Test {
    public static void main(String[] args) {

        VettoriInteri vi = new VettoriInteri("1|2|3 |4| 5");

        try {
            vi.remove(2);
            vi.remove(3);
            vi.remove(12);
        } catch (ErroreElementoInesistente e) { System.out.println(e); }

        System.out.println(vi);

        try { System.out.println("Min: " + vi.min()); }
        catch (ErroreVettoreVuoto e) { System.out.println(e); }

    }
}

