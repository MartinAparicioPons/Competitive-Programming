import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- != 0){
			BigInteger a = sc.nextBigInteger();
			BigInteger b = sc.nextBigInteger();
			String s1 = a.toString();
			s1 = new StringBuilder(s1).reverse().toString();
			a = new BigInteger(s1);
			String s2 = b.toString();
			s2 = new StringBuilder(s2).reverse().toString();
			b = new BigInteger(s2);
			a = a.add(b);
			String s = a.toString();
			s = new StringBuilder(s).reverse().toString();
			a = new BigInteger(s);
			System.out.println(a);
		}
	}
}

