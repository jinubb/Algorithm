package boj_7576;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;


public class Main {
	private static Scanner sc = new Scanner(System.in);
	private static int x,y;
	private static int[][] array;
	private static boolean[][] visit;
	private static Queue<Pair<Integer>> queue = new LinkedList<>();
	
	public static void main(String[] args) {
		x = sc.nextInt();
		y = sc.nextInt();
		array = new int[y+1][x+1];
		visit = new boolean[y+1][x+1];
		for(int i=1;i<=y;i++) {
			for(int j=1;j<=x;j++) {
				array[i][j] = sc.nextInt();
				visit[i][j] = false;
			}
		}
		
		int answer = bfs();
		if(isValidTomato()) { // 안익은 토마토가 있는지 확인
			System.out.println(answer);
		}else {
			System.out.println("-1");
		}
	}
	
	private static boolean isValidTomato() {
		for(int i=1;i<=y;i++) {
			for(int j=1;j<=x;j++) {
				if(!visit[i][j] && array[i][j] == 0) {
					return false;
				}
			}
		}
		return true;
	}

	private static int bfs() {
		for(int i=1;i<=y;i++) {
			for(int j=1;j<=x;j++) {
				if(array[i][j] == 1 && !visit[i][j]) {
					Pair<Integer> temp = new Pair<>(i,j);
					queue.offer(temp);
					visit[i][j] = true;
				}
			}
		}
		int days = -1; //마지막날 반복도는횟수 제거
		while(!queue.isEmpty()) {
			int tempQueueSize = queue.size();
			for(int i=1;i<=tempQueueSize;i++) {
				Pair<Integer> temp = queue.poll();
				search(temp);
			}days++;
		}
		return days;
	}

	private static void search(Pair<Integer> temp) {
		int tempX = temp.first();
		int tempY = temp.second();
		
		if(tempX-1 > 0 && array[tempX-1][tempY] != -1 && !visit[tempX-1][tempY]) { // 위쪽 탐색
			visit[tempX-1][tempY] =  true;
			queue.offer(new Pair<Integer>(tempX-1,tempY));
		}
		if(tempX+1 <= y && array[tempX+1][tempY] != -1 && !visit[tempX+1][tempY]) { // 아래쪽 탐색
			visit[tempX+1][tempY] =  true;
			queue.offer(new Pair<Integer>(tempX+1,tempY));
		}
		if(tempY-1 > 0 && array[tempX][tempY-1] != -1 && !visit[tempX][tempY-1]) { // 왼쪽 탐색
			visit[tempX][tempY-1] =  true;
			queue.offer(new Pair<Integer>(tempX,tempY-1));
		}
		if(tempY+1 <= x && array[tempX][tempY+1] != -1 && !visit[tempX][tempY+1]) { // 오른쪽 탐색
			visit[tempX][tempY+1] =  true;
			queue.offer(new Pair<Integer>(tempX,tempY+1));
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

}
