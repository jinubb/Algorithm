package boj_2902;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.next();
		
		System.out.println(convertKmp(input));
	}

	private static String convertKmp(String input) {
		String[] arrayInput = input.split("-");
		String kmp ="";
		for(String str : arrayInput) {
			kmp += str.charAt(0);
		}
		return kmp;
	}
}
