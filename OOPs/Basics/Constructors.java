class Car {
    private String brand, model;
    private int manufacturingYear;

    public Car() {
        brand = model = null;
        manufacturingYear = 0;
    }

    public Car(String brand, String model, int manufacturingYear) {
        this.brand = brand;
        this.model = model;
        this.manufacturingYear = manufacturingYear;
    }

    void getCarDetails() {
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Manufacturing Year: " + manufacturingYear);
    }
}

public class Constructors {
    public static void main(String[] args) {
        // Car c1 = new Car();
        // Car c2 = new Car("BMW", "M5 Competetion Coupe", 2023);

        // c1.getCarDetails();
        // c2.getCarDetails();

        Car c[] = new Car[5];   //Array

        c[0] = new Car("Toyota", "Supra", 1998);   //Array[0] -> Memory

        c[0].getCarDetails();
    }
}