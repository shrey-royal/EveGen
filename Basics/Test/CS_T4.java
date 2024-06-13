/*
4. Write a Java program that reads a floating-point number and prints "zero" if the number is zero. Otherwise, print "positive" or "negative". Add "small" if the absolute value of the number is less than 1, or "large" if it exceeds 1,000,000.

Test Data
Input a number: 25
Expected Output :
Input value: 25
Positive number
*/

import java.util.Scanner;

public class CS_T4 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter a number: ");
		double n = sc.nextDouble();
		
		if(n > 0) {
			if(n < 1) {
				System.out.println("Positive Small Number");
			} else if(n > 1000000) {
				System.out.println("Positive Large Number");
			} else {
				System.out.println("Positive Number");
			}
		} else if(n < 0) {
			if(Math.abs(n) < 1) {
				System.out.println("Negative Small Number: " + Math.abs(n));
			} else if(Math.abs(n) > 1000000) {
				System.out.println("Negative Large Number: " + Math.abs(n));
			} else {
				System.out.println("Negative Number");
			}
		} else {
			System.out.println("Zero");
		}
	}
}