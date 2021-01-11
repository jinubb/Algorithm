package boj_10026;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	private static Scanner sc = new Scanner(System.in);
	private static int n;
	private static String[][] arrayNormal;
	private static String[][] arrayWeakness;
	private static boolean[][] visit;
	private static Queue<Pair<Integer>> queue = new LinkedList<>();
	public static void main(String[] args) {
		n = sc.nextInt();
		arrayNormal = new String[n+1][n+1]; // 비색약
		arrayWeakness = new String[n+1][n+1]; // 적록색약
		visit = new boolean[n+1][n+1];
		
		for(int i=1;i<=n;i++) {
			String inputString = sc.next();
			String replaceString = inputString.replaceAll("R", "G");
			
			for(int j=1;j<=n;j++) {
				arrayNormal[i][j] = String.valueOf(inputString.charAt(j-1));
				arrayWeakness[i][j] = String.valueOf(replaceString.charAt(j-1));
			}
		}
		
		System.out.println(bfs(false) + " " + bfs(true));
	}
	
	private static int bfs(boolean weakness) {
		
		init(); // 큐, 방문기록 초기화
		
		int answer = 0;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				if(!visit[i][j]) {
					answer++;
					Pair<Integer> start = new Pair<>();
					start.makePair(i, j);
					visit[i][j] = true;
					queue.offer(start);
					
					while(!queue.isEmpty()) {
						Pair<Integer> temp = queue.poll();
						if(weakness) {
							search(temp, arrayWeakness);
						}else {
							search(temp, arrayNormal);
						}
						
					}
				}
			}
		}
		return answer;
	}
	
	private static void search(Pair<Integer> temp, String[][] array) {
		
		int x = temp.first();
		int y = temp.second();
		String stateColor = array[x][y];
		
		if(x-1 > 0 && array[x-1][y].equals(stateColor) && !visit[x-1][y]) { // 위쪽 탐색
			visit[x-1][y] =  true;
			queue.offer(new Pair<Integer>(x-1,y));
		}
		if(x+1 <= n && array[x+1][y].equals(stateColor) && !visit[x+1][y]) { // 아래쪽 탐색
			visit[x+1][y] =  true;
			queue.offer(new Pair<Integer>(x+1,y));
		}
		if(y-1 > 0 && array[x][y-1].equals(stateColor) && !visit[x][y-1]) { // 왼쪽 탐색
			visit[x][y-1] =  true;
			queue.offer(new Pair<Integer>(x,y-1));
		}
		if(y+1 <= n && array[x][y+1].equals(stateColor) && !visit[x][y+1]) { // 오른쪽 탐색
			visit[x][y+1] =  true;
			queue.offer(new Pair<Integer>(x,y+1));
		}
	}
	
	public static class Pair<T>{
		private T x;
		private T y;
		public T first() {
			return x;
		}
		
		public T second() {
			return y;
		}
		
		public void makePair(T x, T y) {
			this.x = x;
			this.y = y;
		}
		
		public Pair(){

		}
		
		public Pair(T x, T y) {
			this.x = x;
			this.y = y;
		}

	}
	
	public static void init() {
		queue.clear();
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				visit[i][j] = false;
			}
		}
	}
	

}
