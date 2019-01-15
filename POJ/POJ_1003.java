import java.util.Scanner;

public class POJ_1003 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

	while(true) {
	    double r = scan.nextDouble();

	    if (r == 0.00) break;
	    double l = 0;
	    int u = 1;

	    while (true) {
	        l = l + (1.0 / (u + 1));
		if (l >= r) break;	
		u++;
	    }

	    System.out.println(u + " card(s)");
	}
    }
}
