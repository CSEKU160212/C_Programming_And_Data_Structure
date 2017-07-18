package Car_11715;

import java.util.Scanner;

public class Main {

	public static Scanner scan = new Scanner(System.in);

	public static void main(String[] args) {

		double u, v, a, t, s;
		int n;
		while (scan.hasNext()) {
			for(int T=1; T!=0; T++){
			n = scan.nextInt();
			if (n == 0)
				break;

			else {
				switch (n) {
				case 1:
					u = scan.nextDouble();
					v = scan.nextDouble();
					t = scan.nextDouble();
					s = 0.5 * (u + v) * t;
					a = (v - u) / t;
					System.out.printf("Case %d: %.3f %.3f\n", T, s, a);
					break;

				case 2:
					u = scan.nextDouble();
					v = scan.nextDouble();
					a = scan.nextDouble();
					s = ((v * v) - (u * u)) / (2 * a);
					t = (v - u) / a;
					System.out.printf("Case %d: %.3f %.3f\n", T, s, t);
					break;

				case 3:
					u = scan.nextDouble();
					a = scan.nextDouble();
					s = scan.nextDouble();
					double x = (u * u) + (2 * a * s);
					v = Math.sqrt(x);
					t = (v - u) / a;
					System.out.printf("Case %d: %.3f %.3f\n", T, v, t);
					break;

				case 4:
					v = scan.nextDouble();
					a = scan.nextDouble();
					s = scan.nextDouble();
					double z = (v * v) - (2 * a * s);
					u = Math.sqrt(z);
					t = (v - u) / a;
					System.out.printf("Case %d: %.3f %.3f\n", T, u, t);
					break;
				}
			}

			}
		}

	}

}
