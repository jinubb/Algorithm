package boj_2167;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(); // �迭�� ����ũ��
		int m = sc.nextInt(); // �迭�� ����ũ��
		int[][] arrayInt = new int[n][m]; // 2�����迭
		
		// �迭 �Է�
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				arrayInt[i][j] = sc.nextInt();
			}
		}
		
		int k = sc.nextInt(); // �׽�Ʈ Ƚ��
		int[] answerArray = new int[k];
		int a,b,x,y;
		for(int i=0;i<k;i++) {
			a = sc.nextInt();
			b = sc.nextInt();
			x = sc.nextInt();
			y = sc.nextInt();
			answerArray[i] = arraySum(arrayInt,a-1,b-1,x-1,y-1);
		}
		
		for(int answer : answerArray) {
			System.out.println(answer);
		}
	}
	
	private static int arraySum(int[][] arrayInt,int a,int b,int x,int y) {
		int sum = 0;
		for(int i=a;i<=x;i++) {
			for(int j=b;j<=y;j++) {
				sum+=arrayInt[i][j];
			}
		}
		return sum;
	}
}
