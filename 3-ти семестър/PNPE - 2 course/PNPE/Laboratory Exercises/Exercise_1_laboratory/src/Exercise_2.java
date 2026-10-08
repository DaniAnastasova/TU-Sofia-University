import java.util.Scanner;

public class Exercise_2 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Въведете страната а на правоъгълника: ");
        int a = scanner.nextInt();
        System.out.println("Въведете страната b на правоъгълника: ");
        int b = scanner.nextInt();

        int result = a * b;

        System.out.println("Лицето на правоъгълника е: "+ result);


    }
}
