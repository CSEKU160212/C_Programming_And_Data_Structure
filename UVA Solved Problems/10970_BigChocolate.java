import java.util.Scanner;
public class Main {

	public static Scanner s=new Scanner(System.in);
	public static void main(String[] args) {

		long M, N, totalCut;
		while(s.hasNext()){
			M=s.nextLong();
			N=s.nextLong();
			
			totalCut=(M*N)-1;
			System.out.println(totalCut);
		}
	}

}
