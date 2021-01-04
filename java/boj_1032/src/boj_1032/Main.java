package boj_1032;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		String[] arrayStr = new String[num];
		for(int i=0;i<num;i++) {
			arrayStr[i] = sc.next();
		}
		
		String answer = "";
		int strLength = arrayStr[0].length();
		for(int i=0;i<strLength;i++) {
			answer+=arrayStr[0].charAt(i);
			for(int j=0;j<num;j++) {
				if(answer.charAt(i) == arrayStr[j].charAt(i)) {
					continue;
				}else {
					answer = changeLastIndex(answer, '?');
					break;
				}
			}
		}
		System.out.println(answer);
	}

	private static String changeLastIndex(String answer, char c) {
		answer = answer.substring(0, answer.length()-1);
		answer+=c;
		return answer;
	}
}
