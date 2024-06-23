class Student {
    public int id;
    public String name;
    public static int counter=0;
    public final String college = "IIT";

    public Student() {
        counter++;
    }
    public Student(int id, String name) {
        this.id = id;
        this.name = name;
        counter++;
    }
}

public class Final_KW {
    public static void main(String[] args) {
        Student s = new Student();

        Student s1[] = new Student[10];
        for (int i = 0; i < s1.length; i++) {
                s1[i] = new Student();
        }

        s.college = "abcd";

        System.out.println(Student.counter);
    }
}
