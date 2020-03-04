import java.awt.*;

public class Cerchio extends Figura {
    private double dim;
    private static final double DIM_DEFAULT = 25;

    public Cerchio(double coordX, double coordY, double dim, Color colore, Color bordo){
        super(coordX,coordY,colore,bordo);
        this.dim = (dim>0) ? dim : DIM_DEFAULT;
    }

    public void setCoordX(double coordX) {
        this.coordX = coordX;
    }
    public void setCoordY(double coordY) {
        this.coordY = coordY;
    }
    public void setColore(Color colore) {
        this.colore = colore;
    }
    public void setBordo(Color bordo) {
        this.bordo = bordo;
    }
    public void setDim(double dim){
        this.dim = (dim > 0) ? dim : DIM_DEFAULT;
    }
    public double getCoordX(){ return coordX; }
    public double getCoordY(){ return coordY; }
    public Color getColore(){ return colore; }
    public Color getBordo(){ return bordo; }
    public double getDim(){ return dim; }
}
