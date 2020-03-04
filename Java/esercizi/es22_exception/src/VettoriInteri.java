import java.io.IOException;
import java.util.Arrays;
import java.lang.System;

public class VettoriInteri {

    private int[] vet;

    public VettoriInteri(int size) throws IOException {
        if (size < 0) throw new IOException("Input size too small");
        else {
            this.vet = new int[size];
            Arrays.fill(this.vet, 0); //inizializza tutti gli elementi del vettore a 0
        };
    }

    public VettoriInteri(String origin) throws NumberFormatException {
        String[] numbers = origin.split("\\|");
        this.vet = new int[numbers.length];
        for (int index = 0; index < numbers.length; index += 1) this.vet[index] = Integer.parseInt(numbers[index].trim());
    }

    public int min() throws ErroreVettoreVuoto {
        if (this.vet.length <= 0) throw new ErroreVettoreVuoto();
        else {
            int min = this.vet[0];
            for (int index = 1; index < this.vet.length; index += 1) if (this.vet[index] < min) min = this.vet[index];
            return min;
        }
    }

    public int find(int key) throws ErroreElementoInesistente {
        for (int index = 0; index < this.vet.length; index += 1) if (this.vet[index] == key) return index;
        throw new ErroreElementoInesistente(key);
    }

    public void remove(int key) throws ErroreElementoInesistente, ErroreVettoreVuoto {
        if (this.vet.length < 1) throw new ErroreVettoreVuoto();
        int index = this.find(key);
        int[] nvet = new int[this.vet.length - 1];
        System.arraycopy(this.vet, 0, nvet, 0, index);
        System.arraycopy(this.vet, index + 1, nvet, index, this.vet.length - index - 1);
        this.vet = nvet;
    }

    @Override
    public String toString() {
        String res = "";
        for (int el : this.vet) res += el + " | ";
        return res.substring(0, res.length() - 3);
    }
}