package boj_11403;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	private static int n;
	private static Scanner input = new Scanner(System.in);
	private static int[][] graph;
	private static boolean[] visit;
	private static int[][] answer;
	
	public static void main(String[] args) {
		n = input.nextInt();
		graph = new int[n+1][n+1];
		visit = new boolean[n+1];
		answer = new int[n+1][n+1];
		
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				graph[i][j] = input.nextInt();
			}
		}
		
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				answer[i][j] = bfs(i,j);
				System.out.print(answer[i][j]+" ");
			}
			System.out.println();
		}
	}
	
	private static int bfs(int start, int end) {
		Queue<Integer> queue = new LinkedList<>();
		initVisit();
		queue.offer(start);
		
		while(!queue.isEmpty() && !visit[end]) {
			int temp = queue.poll();
			for(int i=1;i<=n;i++) {
				if(graph[temp][i] == 1 && !visit[i]) {
					visit[i] = true;
					queue.offer(i);
				}
			}
		}
		
		if(visit[end]) {
			return 1;
		}
		return 0;
	}
	
	private static void initVisit() {
		for(int i=1;i<=n;i++) {
			visit[i] = false;
		}
	}

}
