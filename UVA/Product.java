import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			BigInteger  a = sc.nextBigInteger(),
						b = sc.nextBigInteger();
			System.out.println(a.multiply(b));
		}
	}
}

