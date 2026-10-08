import java.util.Scanner;

public class Exercise_3 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String strings = scanner.nextLine();

        String[] strings_after_split = strings.split(" ");

        for(int i = 0; i < strings_after_split.length; i++){
            System.out.println(strings_after_split[i]);
        }
    }
}
