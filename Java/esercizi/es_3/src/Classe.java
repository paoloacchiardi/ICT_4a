public class Main{
    public static void main(String[] args){
        int[] numClassi;
        int min = 0;
        int max = 20;
        float media;
        int totAlunni = 0;
        int nClassi = (int) ((Math.random()*10)+1);
        numClassi = new int[nClassi];

        for(int i=0 ; i<nClassi; i++){
            numClassi[i] = (int) ((Math.random()*10)+1);
        }

        for(int i=0; i<nClassi; i++){
            totAlunni = totAlunni + numClassi[i];
        }

        for(int i=0; i<nClassi; i++){
            if(numClassi[i]<min){
                min = numClassi[i];
            }
        }

        for(int i=0; i<nClassi; i++){
            if(numClassi[i]>max){
                max = numClassi[i];
            }
        }

        media = (float) totAlunni / nClassi;

        System.out.println("Numero di classi: " + nClassi +
                            "\nAlunni massimi in una classe: " + max +
                            "\nAlunni minimi in una classe: " + min +
                            "\nTotale Studenti: " + totAlunni +
                            "\nMedia alunni per classe: " + media);
    }
        }
