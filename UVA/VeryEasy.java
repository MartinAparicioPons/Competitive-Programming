import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()){
			int n = sc.nextInt(), a = sc.nextInt(), i;
			BigInteger 	ba = BigInteger.valueOf(a),
						bi = ba;
			for(i = 2; i <= n; i++){
				bi = bi.add(ba.pow(i).multiply(BigInteger.valueOf(i)));
			}
			System.out.println(bi);
		}
	}
}

