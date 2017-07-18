package UVA10523;

import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static Scanner scan = new Scanner(System.in);

	public static void main(String[] args) {
		BigInteger A, K;
		int N;
		BigInteger sum;
		while (scan.hasNext()) {
			N = scan.nextInt();
			A = scan.nextBigInteger();
			sum = new BigInteger("0");
			K = new BigInteger("0");
			for (int i = 1; i <= N; i++) {
				K = BigInteger.valueOf(0);
				K = A.pow(i);
				K = K.multiply(BigInteger.valueOf(i));
				sum = sum.add(K);
			}
			System.out.println(sum);

		}
	}
}
