public class Tempo{
    public class Tempo{
        private int ora;
        private int minuto;
        private int secondo;
        private static final int TEMPO_DEFAULT = 0;

        public Tempo(){
            ora = TEMPO_DEFAULT;
            minuto = TEMPO_DEFAULT;
            secondo = TEMPO_DEFAULT;
        }

        public Tempo(int ora, int minuto) throws ErroreTempo{
            this.ora = (ora > -1 && ora < 24) ? ora : TEMPO_DEFAULT;
            this.minuto = (minuto > -1 && minuto < 60) ? minuto : TEMPO_DEFAULT;
            secondo = TEMPO_DEFAULT;
        }

        public Tempo(int ora, int minuto, int secondo) throws ErroreTempo{
            this.ora = (ora > -1 && ora < 24) ? ora : TEMPO_DEFAULT;
            this.minuto = (minuto > -1 && minuto < 60) ? minuto : TEMPO_DEFAULT;
            this.secondo = (secondo > -1 && secondo < 60) ? secondo : TEMPO_DEFAULT;
        }

        public void int setSecondo(int secondo) throws ErroreTempo{
            this.secondo = (secondo > -1 && secondo < 60) ? secondo : (throws new ErroreTempo("Errore tempo" +
                    "controllato, secondi non compresi tra 0 e 59"));
        }

        public void int setMinuto(int minuto) throws ErroreTempo{
            this.minuto = (minuto > -1 && minuto < 60) ? minuto : TEMPO_DEFAULT;
        }

        public void int setOra(int ora) throws ErroreTempo{
            this.ora = (ora > -1 && ora < 24) ? ora : TEMPO_DEFAULT;
        }

        public int getSecondo(){ return secondo; }
        public int getMinuto(){ return minuto; }
        public int getOra(){ return ora; }
    }
}