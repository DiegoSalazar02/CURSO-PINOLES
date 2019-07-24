import java.util.Scanner;
public class Formulario{
    public static void main (String[]args){
        int x=0;
        Scanner sc=new Scanner(System.in);
        while(x==0){
            System.out.println("¿Cuantos anos tiene el Diego?");
            String edad = sc.nextLine();
            if(!edad.equals("17")){
                System.out.println("Jajaja no");
            }
            else{
                x++;
            }
        }
        while(x==1){
            System.out.println("Agua pasa por mi casa, cate de mi corazon");
            Scanner sc2=new Scanner(System.in);
            String aguacate=sc2.nextLine();
            if(!aguacate.equals("aguacate")){
                System.out.println("Jajaj que meco");
            }
            else{
                x++;
            }
        }
        while(x==2){
            System.out.println("Escribe nada");
            Scanner sc3=new Scanner(System.in);
            String nada=sc3.nextLine();
            if(!nada.equals("nada")){
                System.out.println("Jajaja que manco");
            }
            else{
                x++;
            }
        }
        while(x==3){
            System.out.println("¿Erick me pela la verga?");
            Scanner sc4=new Scanner(System.in);
            String alv=sc4.nextLine();
            if(!alv.equals("si")){
                System.out.println("Concentrate crack, por favor");
            }
            else{
                x++;
            }
        }
        while(x==4){
            System.out.println("2+2=¿");
            Scanner sc5=new Scanner(System.in);
            String cuatro=sc5.nextLine();
            if(!cuatro.equals("4")){
                System.out.println("Ya dejame acabar joto");
            }
            else{
                x++;
            }
        }
    }
}