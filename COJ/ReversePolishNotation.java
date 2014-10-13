/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main {
	public static void main (String[] args) throws java.lang.Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer strtok;
		String str; String s;
		Deque<Integer> q = new ArrayDeque<Integer>();
		Integer a, b;
		while((str = in.readLine()) != null){
			strtok = new StringTokenizer(str, " ");
			while(strtok.hasMoreElements()){
				s = strtok.nextElement().toString();
				if(isInteger(s)){
					q.push(Integer.parseInt(s));
				} else {
					char c = s.charAt(0);
					b = q.pop();
					a = q.pop();
					if(c == '+'){
						q.push(a+b);
					} else if(c == '-'){
						q.push(a-b);
					} else {
						q.push(a*b);
					}
					//out.write("| " + a.toString() + c + b.toString() + "\n");
				}
			}
			out.write(q.pop().toString() + "\n");
		}
		out.flush();
	}
	
	public static boolean isInteger(String s) {
	    try { 
	        Integer.parseInt(s); 
	    } catch(NumberFormatException e) { 
	        return false; 
	    }
	    return true;
	}
}
