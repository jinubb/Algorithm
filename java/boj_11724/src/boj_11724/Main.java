package boj_11724;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	private static int vertex,edge;
	private static Scanner sc = new Scanner(System.in);
	private static boolean visit[];
	private static int array[][];
	public static void main(String[] args) {
		vertex = sc.nextInt();
		edge = sc.nextInt();
		
		visit = new boolean[vertex+1];
		for(int i=1;i<=vertex;i++) {
			visit[i] = false;
		}
		array = new int[vertex+1][vertex+1];
		
		for(int i=1;i<=edge;i++) {
			int tempFirst = sc.nextInt();
			int tempSecond = sc.nextInt();
			array[tempFirst][tempSecond] = 1;
			array[tempSecond][tempFirst] = 1; // 양방향 그래프
		}
		
		System.out.println(bfs());

	}
	
	private static int bfs() {
		Queue<Integer> queue = new LinkedList<>();
		int answer = 0;
		for(int i=1;i<=vertex;i++) {
			if(!visit[i]) {
				answer++;
				int start = i;
				queue.offer(start);
				visit[i] = true;
				
				while(!queue.isEmpty()) {
					int temp = queue.poll();
					for(int j=1;j<=vertex;j++) {
						if(array[temp][j] == 1 && !visit[j]) {
							queue.offer(j);
							visit[j] = true;
						}
					}
				}
			}
		}
		return answer;
	}

}
