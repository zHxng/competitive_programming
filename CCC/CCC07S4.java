import java.util.Scanner;

import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.ArrayList;
import java.util.PriorityQueue;


public class CCC07S4 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

	int points = scan.nextInt();
	int[] paths = new int[points];
	Map<Integer, ArrayList<Integer>> adjList = new HashMap<Integer, ArrayList<Integer>>();
	boolean[] visited = new boolean[points];
															
	for(int i = 0; i < points; i++) 
	    adjList.put(i, new ArrayList<Integer>());
																	
	paths[0] = 1;
																			
	while(true) {
	    int a = scan.nextInt() - 1;
	    int b = scan.nextInt() - 1;	
	  
	    if(a == - 1 && b == -1) break;		
	    
	    adjList.get(a).add(b);
	}
																					
	PriorityQueue<Integer> bfs = new PriorityQueue<Integer>();

	bfs.add(0);
																									
	while(!bfs.isEmpty()) {
	    int node = bfs.remove();				

	    if(visited[node]) continue;

	    visited[node] = true;																							
	    
	    for(int i = 0; i < adjList.get(node).size(); i++) {		
		    int target = adjList.get(node).get(i);

		    if(!visited[target]){
			    bfs.add(target);				
			    paths[target] += paths[node];								
		    }	
	    }			
	}			

	System.out.println(paths[points - 1]);		
    }
}
