import java.util.Scanner;
public class Scanner{
    public static void main(String[]args){
        Scanner sc10=new Scanner(System.in);
        System.out.println("Dime tu nombre");
        String nombre=sc10.nextLine();
        System.out.println("Hola "+ nombre + " !");
    }
}