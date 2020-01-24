import java.util.Scanner;
import java.util.Random;

//Plays Rock Paper Scissors
public class RPC {

	public static void main(String[] args) {
	double choice = 0;
	double cchoice;
	int wins = 0;
	int losses = 0;
	int ties = 0;
	int totals = 0;
	int play = 0;
	
	System.out.println("Would you like to play? (1 = Yes | 0 = No)");
	Scanner in = new Scanner(System.in);
	play = in.nextInt();
	in.close();
	
	if(play == 1) {
		System.out.println("Rock, Paper, Scissors? (1,2,3)");
		choice = in.nextDouble();
		in.close();
		if(choice == 0) {
			play = 0;
		}
		cchoice = Math.random() * 3.0 + 1.0;
		
		if(cchoice == 1.0) {
			if(choice == 1.0) {
				System.out.println("You tied! Try again!(0 to quit)");
				ties++;
				totals++;
			}
			if(choice == 2.0) {
				System.out.println("You Win!!! Play again!(0 to quit)");
				wins++;
				totals++;
			}
			if(choice == 3.0) {
				System.out.println("You Lose. Play again!(0 to quit)");
				losses++;
				totals++;
			}
			
			}
		if(cchoice == 2.0) {
			if(choice == 2.0) {
				System.out.println("You tied! Try again!(0 to quit)");
				ties++;
				totals++;
			}
			if(choice == 3.0) {
				System.out.println("You Win!!! Play again!(0 to quit)");
				wins++;
				totals++;
			}
			if(choice == 1.0) {
				System.out.println("You Lose. Play again!(0 to quit)");
				losses++;
				totals++;
			}
			
			}
		if(cchoice == 3.0) {
			if(choice == 3.0) {
				System.out.println("You tied! Try again!(0 to quit)");
				ties++;
				totals++;
			}
			if(choice == 1.0) {
				System.out.println("You Win!!! Play again!(0 to quit)");
				wins++;
				totals++;
			}
			if(choice == 2.0) {
				System.out.println("You Lose. Play again!(0 to quit)");
				losses++;
				totals++;
			}}
			
			}
	System.out.println("You Won " + wins + " Games.");
	System.out.println("You lost " + losses + " Games.");
	System.out.println("You tied " + ties + " Games.");
	System.out.println("You played " + totals + " Games.");
	System.out.println("Thanks for Playing!");
		

	}

}
