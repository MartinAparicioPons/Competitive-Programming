import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		BigInteger X, Y, N;
		while(T--> 0){
			X = BigInteger.valueOf(sc.nextInt());
			Y = BigInteger.valueOf(sc.nextInt());
			N = BigInteger.valueOf(sc.nextInt());
			System.out.println(X.modPow(Y, N));
		}
		int n = sc.nextInt();
	}
}

