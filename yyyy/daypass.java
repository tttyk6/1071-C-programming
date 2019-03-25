package yyyy;

import java.util.Scanner;

public class daypass {

	public static void main(String[] args) {

		int month, day;
		int year;
		int days = 0;
		
		 String cont;
		
		int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		Scanner input = new Scanner(System.in);

		while (true) {
			System.out.printf("Enter year: ");
			year = input.nextInt();
			System.out.printf("Enter month and day: ");
			month = input.nextInt();
			day = input.nextInt();

			
			
			
			if (leap(year))	 m[1]++;
			for (int i = 0; i < month - 1; i++)
				days += m[i];
			
			System.out.printf("%d days passed since 1/1/%d\n", days + day, year);
			System.out.printf("Continue (Y/N)? ");
			
			cont = input.next();
			if(!cont.toUpperCase().equals("Y"))
					break;
		}
		
	}

	static boolean leap(int year) {
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			return true;
		else
			return false;
	}

}
