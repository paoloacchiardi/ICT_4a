public class Circle {
    private double raggio;
    private static final double RAGGIO_DEFAULT = 10;

    public Circle(){
        raggio = RAGGIO_DEFAULT;
    }

    public Circle(double num){
        raggio = (num>0)? num : RAGGIO_DEFAULT;
    }

    public void setRaggio(double num){
        raggio = (num>0)? num : RAGGIO_DEFAULT;
    }

    public double getRaggio(){
        return raggio;
    }

    public double getArea(){
        return Math.pow(raggio,2) * (3.14);
    }

    public double getCirconferenza(){
        return (2 * 3.14 * raggio);
    }
}
