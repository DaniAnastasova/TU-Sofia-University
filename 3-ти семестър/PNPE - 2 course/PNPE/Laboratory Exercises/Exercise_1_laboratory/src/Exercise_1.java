import java.util.Scanner;

public class Exercise_1 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Name: ");
        String name = scanner.nextLine();
        System.out.print("Age: ");
        int age = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Birthday date: ");
        String birthday_date = scanner.nextLine();

        System.out.println("Name is: " + name + "; Age: "+ age + "; Birthday date: "+ birthday_date);

    }
}