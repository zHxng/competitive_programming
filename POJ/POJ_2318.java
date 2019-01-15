import java.util.*;

public class POJ_2318 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        while (true) {
            int partionCases = scan.nextInt();
                
            if (partionCases == 0) break;
                            
            int toyCases = scan.nextInt();                              
            int x1 = scan.nextInt();                            
            int y1 = scan.nextInt();                        
            int x2 = scan.nextInt();                        
            int y2 = scan.nextInt();

                                    
            int[] vecStart = new int[partionCases];
            int[] vecEnd = new int[partionCases];
            int[] toyX = new int[toyCases];                                     
            int[] toyY = new int[toyCases];
                                                                                
            for(int i = 0; i < partionCases; i++) {                                 
                vecStart[i] = scan.nextInt();                                    
                vecEnd[i] = scan.nextInt();                                 
            }
                               
            for(int i = 0; i < toyCases; i++) {                                                                                                                                                                                           
                toyX[i] = scan.nextInt();                                
                toyY[i] = scan.nextInt();  
            }
                                                                      
            int[] answers = new int[partionCases + 1];

            for(int i = 0; i < toyCases; i++) {
                for(int j = 0; j < partionCases + 1; j++) {
                    if(j == partionCases) {
                        answers[j]++;
                        break;    
                    }
                               
                    if(ifLeft(vecStart[j], vecEnd[j], toyX[i], toyY[i], y1, y2)) {
                        answers[j]++;
                        break;
                    }     
                }
            }

            for(int i = 0; i < partionCases + 1; i++) {
                System.out.println(i + ": " + answers[i]);
            }           
                        
            System.out.println("");                   
        }                                                  
    }
    
    public static boolean ifLeft(int vStart, int vEnd, int pointX, int pointY, int y1, int y2) {
        return ((vEnd - vStart) * (pointY - y1) - (y2 - y1) * (pointX - vStart)) < 0;
    }                                                                                     
}
