import java.util.Scanner;

class Employee {
    private int empId;
    private String name;
    private double salary;
    
    void scanDetails() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter empId: ");
        empId = sc.nextInt();

        sc.nextLine();  //to clear the buffer
        System.out.print("Enter name: ");
        name = sc.nextLine();

        System.out.print("Enter salary: ");
        salary = sc.nextDouble();

        sc.close();
    }

    void printDetails() {
        System.out.println("Employee ID: " + empId);
        System.out.println("Name: " + name);
        // System.out.println("Salary: " + salary);
        System.out.printf("Salary: %.4f", salary);
    }
}

public class Basic {
    public static void main(String[] args) {
        Employee e = new Employee();

        e.scanDetails();
        e.printDetails();
    }
}