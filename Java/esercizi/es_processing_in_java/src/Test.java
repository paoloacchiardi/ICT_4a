import processing.core.PApplet;
import java.awt.*;
import java.util.Random;

public class Test extends PApplet{
        private Circle cerchio;
        private int DIM_X = 854;
        private int DIM_Y = 480;
        public static void main(String args[]){
            PApplet.main("Inizio");
        }

        public void settings(){
            size(DIM_X,DIM_Y);
        }

        public void setup(){
            background(255,255,255);
            cerchio = new Circle(this); //this indica processing, il PApplet
        }

        public void draw(){
            Random number = new Random();
            cerchio.setCordX(random(DIM_X));
            cerchio.setCordY(random(DIM_Y));
            cerchio.setColore(new Color(number.nextFloat(), number.nextFloat(), number.nextFloat()));
            cerchio.setBordo(new Color(number.nextFloat(), number.nextFloat(), number.nextFloat()));
            delay(500);
        }
}
