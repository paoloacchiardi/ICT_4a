public class Velocita {
    private float speed;

    public Velocita() {
        speed = 0f;
    }

    public void setVelKmH(float speed) {
        this.speed = speed;
    }

    public float getVelKmH() {
        return speed;
    }

    public void setVelmtS(float speed) {
        this.speed = (float) (speed * 3.6);
    }

    public float getVelmtS() {
        return (float) (speed/3.6);
    }
}
