public class Rectangle {
    private double base;
    private double altezza;
    private static final double BASE_DEFAULT = 10;
    private static final double ALTEZZA_DEFAULT = 10;

    public Rectangle(){
        base = BASE_DEFAULT;
        altezza = ALTEZZA_DEFAULT;
    }

    public Rectangle(double base, double altezza){
        this.base = (base > 0)? base : BASE_DEFAULT;
        this.altezza = (altezza > 0)? altezza : ALTEZZA_DEFAULT;
    }

    public void setAltezza(double num){
        altezza = (num > 0)? num : ALTEZZA_DEFAULT;
    }

    public void setBase(double num){
        base = (num > 0)? num : BASE_DEFAULT;
    }

    public double getAltezza(){
        return altezza;
    }

    public double getBase(){
        return base;
    }

    public double getArea(){
        return base * altezza;
    }

    public double getPerimetro(){
        return (base*2) + (altezza*2);
    }
}
