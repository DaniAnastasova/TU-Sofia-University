package Exercises_3;

import java.util.HashSet;

public class Test{
    public static void main(String[] args){
        Car[] cars = {
                new Car("BMW", "320", "Black", 184, "Diesel", "Automatic", "2018"),
                new Car("Audi", "A4", "Gray", 150, "Petrol", "Manual", "2017"),
                new Car("BMW", "320", "Black", 184, "Diesel", "Automatic", "2018"),
                new Car("Mercedes", "C220", "White", 170, "Diesel", "Automatic", "2019"),
                new Car("Alfa Romeo", "Giulia", "Red", 200, "Petrol", "Automatic", "2020"),
                new Car("Audi", "A6", "Black", 204, "Diesel", "Automatic", "2021")
        };

        //Задача 2
        Car[] filtered_list = return_list(cars, 'A');
        for (int i = 0; i < filtered_list.length; i++){
            System.out.println(filtered_list[i].getBrand()+ " "+ filtered_list[i].getModel()+" "+
                            filtered_list[i].getColor()+" "+ filtered_list[i].getHorsepower() + " "+
                            filtered_list[i].getType_engine()+ " "+ filtered_list[i].getType_gearbox() + " "+
                            filtered_list[i].getCreation_data());
        }
        System.out.println();

        //Задача 3 - по азбучен ред да се подредят
        Car[] sorted_list = return_sorted_list(cars);
        for (int i = 0; i < cars.length; i++){
            System.out.println(sorted_list[i].getBrand()+ " "+ sorted_list[i].getModel()+" "+
                    sorted_list[i].getColor()+" "+ sorted_list[i].getHorsepower() + " "+
                    sorted_list[i].getType_engine()+ " "+ sorted_list[i].getType_gearbox() + " "+
                    sorted_list[i].getCreation_data());
        }
        System.out.println();

        //задача 4
        Car[] clear_list = clear_list(cars);
        for(int i = 0; i < clear_list.length; i++){
            System.out.println(clear_list[i].getBrand()+ " "+ clear_list[i].getModel()+" "+
                    clear_list[i].getColor()+" "+ clear_list[i].getHorsepower() + " "+
                    clear_list[i].getType_engine()+ " "+ clear_list[i].getType_gearbox() + " "+
                    clear_list[i].getCreation_data());
        }
    }

    // задача 2
    public static Car[] return_list(Car[] cars, char letter) {
        int count_current_car = 0;
        for (Car car : cars) {
            if (car.getBrand().charAt(0) == letter) {
                count_current_car++;
            }
        }
        Car[] new_cars_list = new Car[count_current_car];
        int index = 0;
        for (Car car : cars) {
            if (car.getBrand().charAt(0) == letter) {
                new_cars_list[index] = car;
                index++;
            }
        }
        return new_cars_list;
    }

    // задача 3 - по азбучен ред да се подредят
    public static Car[] return_sorted_list(Car[] cars){
        for(int i = 0; i < cars.length -1; i++){
            for(int j = 0; j < cars.length-i -1; j++){
                String brand_1 = cars[j].getBrand();
                String brand_2 = cars[j+1].getBrand();

                if((brand_1.compareTo(brand_2)) > 0 ){
                    Car temp = cars[j];
                    cars[j] = cars[j+1];
                    cars[j+1] = temp;
                }
            }
        }
        return cars;
    }

    // задача 4
    public static Car[] clear_list(Car[] cars) {
        HashSet<Car> car_clear_list = new HashSet<>();
        for(Car car: cars){
            car_clear_list.add(car);
        }
        return car_clear_list.toArray(new Car[0]);
    }
}
