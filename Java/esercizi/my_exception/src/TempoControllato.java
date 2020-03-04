public class TempoControllato extends Tempo {
    public class TempoControllato{
        private int ora;
        private int minuto;
        private int secondo;
        private static final int TEMPO_DEFAULT = 0;

        public TempoControllato(){
            ora = TEMPO_DEFAULT;
            minuto = TEMPO_DEFAULT;
            secondo = TEMPO_DEFAULT;
        }

        public TempoControllato(int ora, int minuto){
            this.ora = (ora > -1 && ora < 24) ? ora : TEMPO_DEFAULT;
            this.minuto = (minuto > -1 && minuto < 60) ? minuto : TEMPO_DEFAULT;
            secondo = TEMPO_DEFAULT;
        }

        public TempoControllato(int ora, int minuto, int secondo){
            this.ora = (ora > -1 && ora < 24) ? ora : TEMPO_DEFAULT;
            this.minuto = (minuto > -1 && minuto < 60) ? minuto : TEMPO_DEFAULT;
            this.secondo = (secondo > -1 && secondo < 60) ? secondo : TEMPO_DEFAULT;
        }

        public void int setSecondo(int secondo){
            this.secondo = (secondo > -1 && secondo < 60) ? secondo : TEMPO_DEFAULT;
        }

        public void int setMinuto(int minuto){
            this.minuto = (minuto > -1 && minuto < 60) ? minuto : TEMPO_DEFAULT;
        }

        public void int setOra(int ora){
            this.ora = (ora > -1 && ora < 24) ? ora : TEMPO_DEFAULT;
        }

        public int getSecondo(){ return secondo; }
        public int getMinuto(){ return minuto; }
        public int getOra(){ return ora; }
    }

}
