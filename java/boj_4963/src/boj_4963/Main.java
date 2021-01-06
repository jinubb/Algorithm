package boj_4963;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	private static int width; // 가로길이
	private static int height; // 세로길이
	private static int map[][]; // 지도
	private static boolean[][] visit; // 방문여부
	private static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) {
		while(true) {
			// 길이 입력
			width = sc.nextInt();
			height = sc.nextInt();
			if(width == 0 && height == 0)break; // 종료 조건
		
			// 지도 입력
			map = new int[height+1][width+1];
			for(int i=1;i<=height;i++) {
				for(int j=1;j<=width;j++) {
					map[i][j] = sc.nextInt();
				}
			}
			
			// 방문기록 초기화
			visit = new boolean[height+1][width+1];
			for(int i=1;i<=height;i++) {
				for(int j=1;j<=width;j++) {
					visit[i][j] = false;
				}
			}
		
			int answer = 0; // 섬 개수
			for(int i=1;i<=height;i++) {
				for(int j=1;j<=width;j++) {
					// 땅이고 방문한 적 없으면 섬 탐색
					if(map[i][j] == 1 && !visit[i][j]) {
						searchBfs(i,j);
						answer++;
					}
				}
			}
			System.out.println(answer);
		}
	}

	private static void searchBfs(int i, int j) {
		Queue<Pair<Integer>> queue = new LinkedList<>();
		Pair<Integer> pair = new Pair<>();
		pair.makePair(i, j);
		queue.offer(pair);
		
		while(!queue.isEmpty()) {
			Pair<Integer> tempPair = queue.poll();
			visit[tempPair.first()][tempPair.second()] = true; // 방문완료
			for(int k=-1;k<=1;k++) {
				for(int l=-1;l<=1;l++) {
					int tempFirst = tempPair.first()+k;
					int tempSecond = tempPair.second()+l;
					//배열 인덱스 예외처리
					if(tempFirst == 0 || tempSecond == 0 || tempFirst > height || tempSecond > width) {
						continue;
					}else if(!visit[tempFirst][tempSecond] && map[tempFirst][tempSecond] == 1) {
						queue.offer(new Pair<Integer>(tempFirst,tempSecond));
						visit[tempFirst][tempSecond] = true;
					}
				}
			}
		}
	}
	
	public static class Pair<T> {
		private T x;
		private T y;
		
		public void makePair(T x, T y) {
			this.x = x;
			this.y = y;
		}
		
		public T first() {
			return this.x;
		}
		
		public T second() {
			return this.y;
		}

		public Pair(T x, T y) {
			super();
			this.x = x;
			this.y = y;
		}
		
		public Pair() {
		}
	}
}
