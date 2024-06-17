import java.util.Scanner;

public class OneArray {
	public static void main(String[] args) {
		/*
		// int arr[] = new int[10];
		//Declaration of array
		int arr[];
		//Instantiation of array
		arr = new int[10];
		/ *
		int []a1[] = new int[3][3];
		int[] []a1;
		int a1[][];
		int[][] a1;
		int [][]a1;
		* /
		
		Scanner sc = new Scanner(System.in);
		
		for(int i=0; i<arr.length; i++) {
			System.out.print("Enter arr[" + i + "]: ");
			arr[i] = sc.nextInt();
		}
		
		for(int i=0; i<arr.length; i++) {
			System.out.print(arr[i] + ", ");
		}
		*/
		/*
		int []a1[] = new int[3][3];
		
		//System.out.println(Math.random());
		
		for(int i=0; i<a1.length; i++) {
			for(int j=0; j<a1[0].length; j++) {
				a1[i][j] = (int)(Math.random() * 100);
			}
		}
		
		for(int i=0; i<a1.length; i++) {
			for(int j=0; j<a1[0].length; j++) {
				System.out.print(a1[i][j] + ", ");
				//System.out.printf("%2d, ", a1[i][j]);
			}
			System.out.println("\b\b ");
		}
		*/
		
		String[] arr = {"Element 1", "Element 2", "Element 3"};
		
		/*
		Scanner sc = new Scanner(System.in);
		for(int i=0; i<arr.length; i++) {
			System.out.print("Enter a string: ");
			arr[i] = sc.nextLine();
		}
		*/
		
		for(int i=0; i<arr.length; i++) {
			System.out.print(arr[i] + ", ");
		}
		
	}
}