import java.util.Scanner;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		while(true){
			int a = sc.nextInt(), b = sc.nextInt(), i, j, n;
			if(a == 0 && b == 0) break;
			BigInteger s = BigInteger.ZERO, au = BigInteger.valueOf(a), ten = BigInteger.valueOf(10);
			for(i = 0; i < b; i++){
				s = s.add(au);
				au = au.multiply(ten);
				//System.out.println("?: " + s + " ... " + au);
			}
			s = s.pow(2);
			String st = s.toString();
			for(j = 0, i = 0, n = st.length(); i < n; i++){
				j += Character.getNumericValue(st.charAt(i));
			}
			System.out.println(j);
		}
	}
}
