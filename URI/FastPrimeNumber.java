import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Main {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		int n, i, m;
		n = sc.nextInt();
		while(n-->0){
			m = sc.nextInt();
			BigInteger b = BigInteger.valueOf(m);
			if(b.isProbablePrime(10)){
				System.out.println("Prime");
			} else {
				System.out.println("Not Prime");
			}
		}
	}
}
