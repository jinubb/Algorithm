package boj_2953;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		// 변수 선언
		Scanner sc = new Scanner(System.in);
		int[] scoreSum = new int[5]; // 1~5번 요리사의 점수 합
		int scoreNum = 4; // 받을 점수의 숫자
		
		// 점수 입력
		for(int i=0;i<scoreSum.length;i++) {
			for(int j=0;j<scoreNum;j++) {
				scoreSum[i]+=sc.nextInt();
			}
		}
		printWinner(scoreSum);
	}

	private static void printWinner(int[] scoreSum) {
		Winner winner = new Winner();
		for(int i=0;i<scoreSum.length;i++) {
			if(winner.getScore() < scoreSum[i] || winner.getClass() == null) {
				winner.setNo(i);
				winner.setScore(scoreSum[i]);
			}
		}
		System.out.format("%s %s\n", winner.getNo()+1, winner.getScore());
	}
	
	public static class Winner {
		private int no;
		private int score;
		
		public int getNo() {
			return no;
		}
		public void setNo(int no) {
			this.no = no;
		}
		public int getScore() {
			return score;
		}
		public void setScore(int score) {
			this.score = score;
		}
	}

}
