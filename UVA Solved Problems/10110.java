package Light_more_light_p10110;

import java.util.Scanner;

public class Main {


	public static void main(String[] args) {
		 Scanner s=new Scanner(System.in);
		long N, square, number;
		while(true) {
			N=s.nextLong();
			if (N==0)
				break;
			
			square=(long) Math.sqrt(N);
			
			
			
			number=square*square;
			
			if(N==number) {
				System.out.println("yes");
			}
			else
				System.out.println("no");
			
		}
	}

}
