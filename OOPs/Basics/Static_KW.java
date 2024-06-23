class Student {
    public int id;
    public String name;
    public static String college = "IIT";

    public Student() {}
    public Student(int id, String name) {
        this.id = id;
        this.name = name;
    }

    static void display() {
        System.out.println("College: " + college);
    }
}


public class Static_KW {
    public static void main(String[] args) {
        // Student s = new Student();

        System.out.println(Student.college);
        // System.out.println(s.college);
    }
}
