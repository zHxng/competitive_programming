import java.util.*;

public class POJ_2487 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int x = scan.nextInt();
    	int[] ans = new int[x];
	
        for(int i = 0; i < x; i++) {
	    int n = scan.nextInt();				
            int f = scan.nextInt();
            int[] l = new int[f];
            
            for(int j = 0; j < f; j++) {
                l[j] = scan.nextInt();
            }
            
            ans[i] = find(l, n);
        }
        
        for(int i = 0; i < x; i++) {
            System.out.println("Scenario #" + (i + 1) + ":");
            if(ans[i] == -1) {
                System.out.println("impossible");
            } else {
                System.out.println(ans[i]);
            }
            
            System.out.println();
        }
    }
	      
    public static int find(int[] x, int n) {
        int s = 0;
	
        for(int i = 0; i < x.length; i++) {
            s = s + x[i];
        }
        
        if(s < n) {
            return -1;  
        }
        
        s = 0;
        Arrays.sort(x);
        int c = 0;
        
        for(int i = 1; s < n; i++) {
            s = s + x[x.length-i];
            c = i;
        }
        
        return c;
    }
}
