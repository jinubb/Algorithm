package boj_5338;

public class Main {

	public static void main(String[] args) {
		String[] logo = {
				"       _.-;;-._", 
				"'-..-'|   ||   |", 
				"'-..-'|_.-;;-._|", 
				"'-..-'|   ||   |", 
				"'-..-'|_.-''-._|"
				};
		
		printArray(logo);
	}

	private static void printArray(String[] logo) {
		for(String str : logo) {
			System.out.println(str);
		}		
	}
}
