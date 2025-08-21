import java.util.Scanner;
public class hello {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		String name = "";
		System.out.println("What is your name?");
		name = input.nextLine();
		System.out.println("Hi, " + name + "! Nice to meet you!");
	}
}
