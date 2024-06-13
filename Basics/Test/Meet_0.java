import java.util.Scanner;

public class Meet_0 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a, b, c: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        boolean abc = false;
        if(b > a) {
            if(c > b) {
                abc = true;
            }
        }

        System.out.println("The result is " + abc);
        sc.close();
    }
}

/*
Write a Java program that accepts three integers from the user. It returns true if the second number is higher than the first number and the third number is larger than the second number. If "abc" is true, the second number does not need to be larger than the first number.
Sample Output:

Input the first number : 5                                             
Input the second number: 10                                            
Input the third number : 15                                            
The result is: true
*/