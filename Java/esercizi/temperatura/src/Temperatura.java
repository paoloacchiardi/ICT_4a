public class Temperatura {
    private float gradiC;

    public Temperatura(float gradiC){
        this.gradiC = gradiC;
    }

    public String toString() {
        return String.format("ci sono %.1f gradi.", this.gradiC );
    }

    public float getGradiC(){
        return this.gradiC;
    }

    public float getGradiF(){
        return this.gradiC*(9/5) + 32;
    }
    public void setGradiC(float gradiC){
        if(gradiC > -273.15){
            this.gradiC = gradiC;
        }
        else{
            this.gradiC = 1f;
        }
    }
}