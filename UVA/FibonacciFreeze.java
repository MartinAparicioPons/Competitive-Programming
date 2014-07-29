import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n, i;
		BigInteger[] f = new BigInteger[5011];
		f[0] = BigInteger.ZERO;
		f[1] = BigInteger.ONE;
		f[2] = BigInteger.ONE;
		for(i = 3; i < 5011; i++){
			f[i] = f[i-1].add(f[i-2]);
		}
		while(sc.hasNextInt()){
			n = sc.nextInt();
			System.out.println("The Fibonacci number for "+n+" is "+f[n]);
		}
	}
}

