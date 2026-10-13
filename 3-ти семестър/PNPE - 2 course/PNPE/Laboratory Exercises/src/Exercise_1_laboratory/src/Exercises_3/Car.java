package Exercises_3;
import java.util.Objects;

public class Car {
    private String brand;
    private String model;
    private String color;
    private int horsepower;
    private String type_engine;
    private String type_gearbox;
    private String creation_data;

    public Car() {
        this.brand = "";
        this.model = "";
        this.color = "";
        this.horsepower = 0;
        this.type_engine = "";
        this.type_gearbox = "";
        this.creation_data = "";
    }

    public Car(String brand, String model, String color, int horsepower, String type_engine, String type_gearbox, String creation_data) {
        this.brand = brand;
        this.model = model;
        this.color = color;
        this.horsepower = horsepower;
        this.type_engine = type_engine;
        this.type_gearbox = type_gearbox;
        this.creation_data = creation_data;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public int getHorsepower() {
        return horsepower;
    }

    public void setHorsepower(int horsepower) {
        this.horsepower = horsepower;
    }

    public String getType_engine() {
        return type_engine;
    }

    public void setType_engine(String type_engine) {
        this.type_engine = type_engine;
    }

    public String getType_gearbox() {
        return type_gearbox;
    }

    public void setType_gearbox(String type_gearbox) {
        this.type_gearbox = type_gearbox;
    }

    public String getCreation_data() {
        return creation_data;
    }

    public void setCreation_data(String creation_data) {
        this.creation_data = creation_data;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Car car = (Car) o;
        return horsepower == car.horsepower &&
                Objects.equals(brand, car.brand) &&
                Objects.equals(model, car.model) &&
                Objects.equals(color, car.color) &&
                Objects.equals(type_engine, car.type_engine) &&
                Objects.equals(type_gearbox, car.type_gearbox) &&
                Objects.equals(creation_data, car.creation_data);
    }

    @Override
    public int hashCode() {
        return Objects.hash(brand, model, color, horsepower, type_engine, type_gearbox, creation_data);
    }
}
