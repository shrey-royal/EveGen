import java.util.Scanner;

public class Dec_Oct {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a decimal Number: ");
        int decimalNumber = sc.nextInt();
        sc.close();

        if(decimalNumber == 0) {
            System.out.println("Octal representation: 0");
            return;
        }

        int remainder;
        String octalNumber = "";

        while(decimalNumber > 0) {
            remainder = decimalNumber % 8;
            octalNumber = remainder + octalNumber;
            decimalNumber /= 8;
        }

        System.out.println("Octal representation: " + octalNumber);
    
    }
}
