/* 84 (w/o whitespaces and comments).
 * 76 (w/o return statement).
 * problem: http://www.spoj.com/problems/SIZECON/
 */

x="%d";
r;			//as r is global, is an int initialiazed in 0.
main(t,n){	//w/o initialization
	for(scanf(x,&t);t--;scanf(x,&n))
		n>0?r+=n:0;
	printf(x,r);
	return 0;
}
