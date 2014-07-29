import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n, i;
		BigInteger b;
		while(true){
			n = sc.nextInt();
			i = sc.nextInt();
			if(n == 0 && i == 0) break;
			b = BigInteger.valueOf(n).pow(i);
			System.out.println(b);
		}
	}
}

