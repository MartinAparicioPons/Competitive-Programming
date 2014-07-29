import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()){
			int a = sc.nextInt(),
				b = sc.nextInt(),
				c = sc.nextInt();
			if(a == 1 || b%c != 0 || (b-c)*Math.log10(a) > 99){
				System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) is not an integer with less than 100 digits.");
			} else {
				if(b == c){
					System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) 1");
				} else {
					BigInteger  x = BigInteger.valueOf(a),
								y = BigInteger.valueOf(a);
					x = x.pow(b);
					y = y.pow(c);
					x = x.subtract(BigInteger.ONE);
					y = y.subtract(BigInteger.ONE);
					if(y.compareTo(BigInteger.ZERO) == 0){
						System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) is not an integer with less than 100 digits.");
					}
					BigInteger xx = x.divide(y);
					System.out.println("("+a+"^"+b+"-1)/("+a+"^"+c+"-1) " + xx);
				}
			}
		}
	}
}

