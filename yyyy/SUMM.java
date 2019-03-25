package yyyy;

import java.util.Scanner;

public class SUMM {

	public static void main(String[] args) {
		int n1, n2;
		int total;

		Scanner input = new Scanner(System.in);

		System.out.printf("Enter n1 n2: ");
		n1 = input.nextInt();
		n2 = input.nextInt();

		while (n1 > 0 && n2 > 0) {

			total = (sum(n1, n2));

			System.out.printf("sum(%d,%d) = %d \n", n1, n2, total);

			System.out.printf("Enter n1 n2 :  ");
			n1 = input.nextInt();
			n2 = input.nextInt();

		}
	}

	private static int sum(int n1, int n2) {
		int total = 0;
		for (int i = n1; i <= n2; i++) {
			total  += i;
		}
		return total;
	}

}
