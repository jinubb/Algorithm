package boj_1012;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	private static int caseNum,height,width,bugNum;
	private static Scanner sc = new Scanner(System.in);
	private static Queue<Pair<Integer>> queue = new LinkedList<>();
	public static void main(String[] args) {
		caseNum = sc.nextInt();
		while(caseNum-- != 0) {
			width = sc.nextInt();
			height = sc.nextInt();
			bugNum = sc.nextInt();
			
			int[][] array = new int[height+1][width+1];
			boolean[][] visit = new boolean[height+1][width+1];
			for(int i=0;i<=height;i++) {
				for(int j=0;j<=width;j++) {
					visit[i][j] = false;
				}
			}
			
			for(int i=1;i<=bugNum;i++) {
				int tempWidth = sc.nextInt();
				int tempHeight = sc.nextInt();
				array[tempHeight][tempWidth] = 1;
			}
			
			System.out.println(bfs(array, visit));
		}
		
	}
	private static int bfs(int[][] array, boolean[][] visit) {
		queue.clear();
		int answer = 0;
		for(int i=0;i<height;i++) {
			for(int j=0;j<width;j++) {
				if(!visit[i][j] && array[i][j] == 1) {
					answer++;
					Pair<Integer> start = new Pair<>(i,j);
					queue.offer(start);
					visit[i][j] = true;
					
					while(!queue.isEmpty()) {
						Pair<Integer> temp = queue.poll();
						search(array, visit, temp);
						visit[temp.first()][temp.second()] = true;
					}
				}
			}
		}
		return answer;
	}
	
	private static void search(int[][] array, boolean[][] visit, Pair<Integer> temp) {
		int tempHeight = temp.first();
		int tempWidth = temp.second();
		
		if(tempHeight-1 >= 0 && array[tempHeight-1][tempWidth] == 1 && !visit[tempHeight-1][tempWidth]) { // À§ÂÊ Å½»ö
			visit[tempHeight-1][tempWidth] =  true;
			queue.offer(new Pair<Integer>(tempHeight-1,tempWidth));
		}
		if(tempHeight+1 < height && array[tempHeight+1][tempWidth] == 1 && !visit[tempHeight+1][tempWidth]) { // ¾Æ·¡ÂÊ Å½»ö
			visit[tempHeight+1][tempWidth] =  true;
			queue.offer(new Pair<Integer>(tempHeight+1,tempWidth));
		}
		if(tempWidth-1 >= 0 && array[tempHeight][tempWidth-1] == 1 && !visit[tempHeight][tempWidth-1]) { // ¿ÞÂÊ Å½»ö
			visit[tempHeight][tempWidth-1] =  true;
			queue.offer(new Pair<Integer>(tempHeight,tempWidth-1));
		}
		if(tempWidth+1 < width && array[tempHeight][tempWidth+1] == 1 && !visit[tempHeight][tempWidth+1]) { // ¿À¸¥ÂÊ Å½»ö
			visit[tempHeight][tempWidth+1] =  true;
			queue.offer(new Pair<Integer>(tempHeight,tempWidth+1));
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
