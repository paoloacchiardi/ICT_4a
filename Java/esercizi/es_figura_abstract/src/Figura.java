import java.awt.*;

public abstract class Figura {
    public double coordX;
    public double coordY;
    public Color colore;
    public Color bordo;

    Figura(double coordX, double coordY, Color colore, Color bordo){
        this.coordX = coordX;
        this.coordY = coordY;
        this.colore = colore;
        this.bordo = bordo;
    }

    public abstract void setCoordX(double coordX);
    public abstract void setCoordY(double coordY);
    public abstract void setColore(Color colore);
    public abstract void setBordo(Color bordo);
    public abstract double getCoordX();
    public abstract double getCoordY();
    public abstract Color getColore();
    public abstract Color getBordo();

}
