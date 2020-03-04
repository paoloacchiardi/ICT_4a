package utility;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class tastiera {
    private static InputStreamReader input = new InputStreamReader(System.in);
    private static BufferedReader keyboard = new BufferedReader(input);
   1
    public static int readInteger(){
        boolean err = false;
        int number = 0;
        do{
            System.out.println("Integer: ");
            try {
                number = Integer.parseInt(keyboard.readLine());
                err = true;
            } catch (IOException e) {
                System.out.println("IO error    ");
                //e.printStackTrace();
            } catch (NumberFormatException e) {
                System.out.println("Invalid integer");
            }
        }while(!err);
        return number;
    }

    public static float readFloat(){
        boolean err = false;
        float number = 0;
        do{
            System.out.println("Float: ");
            try {
                number = Float.parseFloat(keyboard.readLine());
                err = true;
            } catch (IOException e) {
                System.out.println("IO error");
                //e.printStackTrace();
            } catch (NumberFormatException e) {
                System.out.println("Invalid float");
            }
        }while(!err);
        return number;
    }

    public static String readString(){
        boolean err = false;
        String out = "";
        do{
            System.out.println("String: ");
            try {
                out = keyboard.readLine();
                err = true;
            } catch (IOException e) {
                System.out.println("IO error");
                //e.printStackTrace();
            } catch (NumberFormatException e) {
                System.out.println("Invalid String");
            }
        }while(!err);
        return out;
    }

    public static char readChar(){
        boolean err = false;
        char letter = ' ';
        do{
            System.out.println("Char: ");
            try{
                letter = (char) keyboard.read();
                err = true;
            }catch (IOException e){
                System.out.println("IO error");
            }catch (NumberFormatException e){
                System.out.println("Invalid char");
            }
        }while(!err);
        return letter;
    }

    public static double readDouble(){
        boolean err = false;
        double number = 0.0;
        do{
            System.out.println("Double: ");
            try{
                number = Double.parseDouble(keyboard.readLine());
                err = true;
            }catch (IOException e){
                System.out.println("IO error");
            }catch (NumberFormatException e){
                System.out.println("Invalid char");
            }
        }while(!err);
        return number;
    }

    public static int readInteger(String message){
        boolean err = false;
        int number = 0;
        do{
            System.out.println(message);
            try {
                number = Integer.parseInt(keyboard.readLine());
                err = true;
            } catch (IOException e) {
                System.out.println("IO error    ");
                //e.printStackTrace();
            } catch (NumberFormatException e) {
                System.out.println("Invalid integer");
            }
        }while(!err);
        return number;
    }

    public static float readFloat(String message){
        boolean err = false;
        float number = 0;
        do{
            System.out.println(message);
            try {
                number = Float.parseFloat(keyboard.readLine());
                err = true;
            } catch (IOException e) {
                System.out.println("IO error");
                //e.printStackTrace();
            } catch (NumberFormatException e) {
                System.out.println("Invalid float");
            }
        }while(!err);
        return number;
    }

    public static String readString(String message){
        boolean err = false;
        String out = "";
        do{
            System.out.println(message);
            try {
                out = keyboard.readLine();
                err = true;
            } catch (IOException e) {
                System.out.println("IO error");
                //e.printStackTrace();
            } catch (NumberFormatException e) {
                System.out.println("Invalid String");
            }
        }while(!err);
        return out;
    }

    public static char readChar(String message){
        boolean err = false;
        char letter = ' ';
        do{
            System.out.println(message);
            try{
                letter = (char) (keyboard.read());
                err = true;
            }catch (IOException e){
                System.out.println("IO error");
            }catch (NumberFormatException e){
                System.out.println("Invalid char");
            }
        }while(!err);
        return letter;
    }

    public static double readDouble(String message){
        boolean err = false;
        double number = 0.0;
        do{
            System.out.println(message);
            try{
                number = Double.parseDouble(keyboard.readLine());
                err = true;
            }catch (IOException e){
                System.out.println("IO error");
            }catch (NumberFormatException e){
                System.out.println("Invalid char");
            }
        }while(!err);
        return number;
    }
    
}