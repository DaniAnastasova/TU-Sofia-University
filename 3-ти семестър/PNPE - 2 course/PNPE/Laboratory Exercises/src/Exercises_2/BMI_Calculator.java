package Exercises_2;

import java.util.Scanner;

public class BMI_Calculator{
    public static void main(String[] args){
        int number_result = 1;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Въведете брой на хората: ");
        int count_people = scanner.nextInt();
        for(int i = 0; i < count_people; i++){
            if (i == 0){
                printIntroduction();
            }
            double bmi = getBMI(scanner);
            getStatus(bmi);
            String status = getStatus(bmi);
            reportResults(number_result, bmi, getStatus(bmi));
            number_result += 1;
        }
    }
    public static void printIntroduction(){
        System.out.println("Тази програма представлява калкулатор, който изчислява индекса на телесната маса. " + "\n" +
                "Дали килограмите са подходящи за вашата височина или не.");
        System.out.println();
    }

    public static double getBMI(Scanner scanner){
        System.out.print("Въведете теглото си: ");
        double weight_in_kilograms = scanner.nextDouble();
        double weight_in_pounds = weight_in_kilograms * 2.2046;
        System.out.print("Въведете височината си: ");
        int height_in_cm = scanner.nextInt();
        double height_in_inches = height_in_cm * 0.3937;
        return bmiFor(weight_in_pounds, height_in_inches);
    }

    public static double bmiFor(double weight, double height){
        double body_mass_index = weight * 703/ (height*height);
        return body_mass_index;
    }

    public static String getStatus(double index){
        if (index <= 18.5){
            return "underweight";
        }
        else if (index <= 25) {
            return "normal";
        }
        else if(index <= 30){
            return "overweight";
        }
        else{
            return "obese";
        }
    }

    public static void reportResults(int number_of_result, double bmi_index, String status) {
        double rounded_bmi = Math.round(bmi_index * 100.0) / 100.0;
        System.out.println("Човекът с номер - " + number_of_result + " има BMI: " + rounded_bmi +  "(" + status + ")");
        System.out.println();
    }
}
