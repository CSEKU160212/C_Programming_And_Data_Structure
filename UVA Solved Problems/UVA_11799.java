package HorrorDash_p11799;

import java.util.Scanner;

public class Main {

	public static Scanner s= new Scanner(System.in);
	public static void main(String[] args) {
		
		int N, T, max;
		while(s.hasNext()){
			T=s.nextInt();
			for(int i=1; i<=T; i++){
				
				N=s.nextInt();
				int A[]=new int[N+1];
				for(int j=0; j<N; j++){
					A[j]=s.nextInt();
				}
				if(N==1)
					max=A[0];
				else
				{
					max=A[0];
					for(int k=0; k<N; k++){
						if(A[k]>=max){
							max=A[k];
						}
					}
				}
				
				System.out.println("Case "+i+": "+max);
			}
			
		}
		
	}

}
