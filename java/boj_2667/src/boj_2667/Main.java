package boj_2667;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	private static Scanner sc = new Scanner(System.in);
	private static int n;
	private static int[][] array;
	private static boolean[][] visit;
	private static Queue<Pair<Integer>> queue = new LinkedList<>();
	public static void main(String[] args) {
		n = sc.nextInt();
		array = new int[n+1][n+1]; 
		visit = new boolean[n+1][n+1];
		
		for(int i=1;i<=n;i++) {
			String inputString = sc.next();
			
			for(int j=1;j<=n;j++) {
				array[i][j] = Integer.valueOf(inputString.charAt(j-1)-48);
			}
		}
		
		List<Integer> listHouse = new ArrayList<>();
		listHouse = bfs();
		
		System.out.println(listHouse.size());
		listHouse.sort(null);
		for(int i=0;i<listHouse.size();i++) {
			System.out.println(listHouse.get(i));
		}
	}
	
	private static List<Integer> bfs() {
		List<Integer> list = new ArrayList<>();
		init(); // 큐, 방문기록 초기화
		
		int num;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				if(!visit[i][j] && array[i][j] == 1) {
					num = 1;
					Pair<Integer> start = new Pair<>();
					start.makePair(i, j);
					visit[i][j] = true;
					queue.offer(start);
					
					while(!queue.isEmpty()) {
						Pair<Integer> temp = queue.poll();
						num = search(temp, num);
					}
					list.add(num);
				}
			}
		}
		return list;
	}
	
	private static int search(Pair<Integer> temp, int num) {
		
		int x = temp.first();
		int y = temp.second();
		
		if(x-1 > 0 && array[x-1][y] == 1 && !visit[x-1][y]) { // 위쪽 탐색
			visit[x-1][y] =  true;
			queue.offer(new Pair<Integer>(x-1,y));
			num++;
		}
		if(x+1 <= n && array[x+1][y] == 1 && !visit[x+1][y]) { // 아래쪽 탐색
			visit[x+1][y] =  true;
			queue.offer(new Pair<Integer>(x+1,y));
			num++;
		}
		if(y-1 > 0 && array[x][y-1] == 1 && !visit[x][y-1]) { // 왼쪽 탐색
			visit[x][y-1] =  true;
			queue.offer(new Pair<Integer>(x,y-1));
			num++;
		}
		if(y+1 <= n && array[x][y+1] == 1 && !visit[x][y+1]) { // 오른쪽 탐색
			visit[x][y+1] =  true;
			queue.offer(new Pair<Integer>(x,y+1));
			num++;
		}
		return num;
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
