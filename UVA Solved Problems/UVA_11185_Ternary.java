package ternary_11185;

import java.util.Scanner;

public class Main {

	public static Scanner scan = new Scanner(System.in);

	public static void main(String[] args) {
		long N;
		long A[] = new long[1000];
		long B[] = new long[1000];
		while (scan.hasNext()) {
			N = scan.nextInt();
			if(N>=0) {
				int count = 0;
				for (int i = 0; N / 3 != 0; i++) {
					A[i] = (N % 3);
					N = N / 3;
					count++;
				}
				A[count] = N;
				for (int j = count, k = 0; j >= 0; j--, k++) {
					B[k] = A[j];
					System.out.print(B[k]);
				}
				System.out.println("");
			}
		}
	}
}
