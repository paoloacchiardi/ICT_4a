import java.awt.*;
import processing.core.PApplet;
public class Circle {
    private PApplet processing; //finestra
    private float dim;
    private float cordX;
    private float cordY;
    private Color colore;
    private Color bordo;
    private static final int DIM_DEFAULT = 10;

    public Circle(PApplet processing){
        this.processing = processing;
        cordX = processing.width / 2;
        cordX = processing.height / 2;
        colore = new Color(255,255,255);
        bordo = new Color(0,0,0);
        dim = DIM_DEFAULT;
    }

    public void show(){
        processing.fill(colore.getRGB()); //bisogna fare getRGB() sennò ci sono errori di tipo (int/float)
        processing.stroke(bordo.getRGB());
        processing.circle(cordX,cordY,dim);
    }

    public void setCordX(float num){
        cordX = num;
    }

    public void setCordY(float num){
        cordY = num;
    }

    public void setColore(Color colore){
        this.colore = colore;
    }

    public void setBordo(Color colore){
        bordo = colore;
    }

    public void setDim(float num){
        dim = (num > 0)? num : DIM_DEFAULT;
    }

    public float getCordX(){
        return cordX;
    }

    public float getCordY(){
        return cordY;
    }

    public Color getColore(){
        return colore;
    }

    public Color getBordo(){
        return bordo;
    }

    public float getDim(){
        return dim;
    }
}
