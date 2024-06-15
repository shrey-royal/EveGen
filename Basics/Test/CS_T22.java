import java.util.Scanner;

public class CS_T22 {
	public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		
		System.out.print("Input number of rows : ");
		int n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
			for(int k=0; k<n-i; k++) {
				System.out.print(" ");
			}
			
			int value = 1;
			for(int j=0; j<=i; j++) {
				System.out.print(value + " ");
				value = value * (i - j) / (j + 1);
			}
			System.out.println();
		}
	}
}