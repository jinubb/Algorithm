package boj_2606;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	private static int v;
	private static int e;
	private static Scanner input = new Scanner(System.in);
	private static int[][] graph;
	private static boolean[] visit;
	
	public static void main(String[] args) {
		// input
		v = input.nextInt();
		e = input.nextInt();
		
		init();
		
		for(int i=1;i<=e;i++) {
			int j = input.nextInt();
			int k = input.nextInt();
			graph[j][k] = 1;
			graph[k][j] = 1;
		}
		System.out.println(bfs(1));
		
	}

	private static void init() {
		graph = new int[v+1][v+1];
		visit = new boolean[v+1];
	}

	private static int bfs(int start) {
		Queue<Integer> queue = new LinkedList<>();
		visit[start] = true;
		queue.offer(start);
		int answer = 0;
		while(!queue.isEmpty()) {
			int temp = queue.poll();
			for(int i=1;i<=v;i++) {
				if(graph[temp][i] == 1 && !visit[i]) {
					visit[i] = true;
					queue.offer(i);
					answer++;
				}
			}
		}
		return answer;
	}

}
