//Plays Rock Paper Scissors
//Lincoln Khongmaly
//Notes:
//use rand() % 3 for the computer choice
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int choice;
	int computer;
	int wins = 0;
	int losses = 0;
	int total = 0;
	int play = 0;
	int tie = 0;
	
	printf("Would you like to Play?\n(1 for yes)(0 for no)\n");
	scanf("%d", &play);
	
	while(play != 0){
		printf("Rock(1), Paper(2), or Scissors(3)\n");
		scanf("%d", &choice);
		computer = (rand() % 3)+1;
		
		if(choice == computer){
			printf("You tied, Next turn? (0 to quit)\n");
			++tie;
			++total;
			computer = (rand() % 3)+1;
			}
		else if(choice == 1 & computer == 2){
			printf("You lost, Next turn? (0 to quit)\n");
			++losses;
			++total;
			computer = (rand() % 3)+1;
		}
		else if(choice == 1 & computer == 3){
			printf("You Won! Next turn? (0 to quit)\n");
			++wins;
			++total;
			computer = (rand() % 3)+1;
		}
		else if(choice == 2 & computer == 1){
			printf("You Won! Next turn? (0 to quit)\n");
			++wins;
			++total;
			computer = (rand() % 3)+1;
		}
		else if(choice == 2 & computer == 3){
			printf("You lost, Next turn?(0 to quit)\n");
			++losses;
			++total;
			computer = (rand() % 3)+1;
		}
		else if(choice == 3 & computer == 1){
			printf("You lost, Next turn?(0 to quit)\n");
			++losses;
			++total;
			computer = (rand() % 3)+1;
		}
		else if(choice == 3 & computer == 2){
			printf("You Won! Next turn? (0 to quit)\n");
			++wins;
			++total;
			computer = (rand() % 3)+1;
		}
		else if(choice == 0){
			play = 0;
		}
		else{
			printf("Thats not one of the choices bud\n");
		}
		
	}
	if(total > 0){
	printf("You won %d games\n", wins);
	printf("You lost %d games\n", losses);
	printf("You tied %d games\n", tie);
	printf("You played %d games total\n", total);
	printf("Thanks for playing");
	}else{
	printf("Ok... Thanks for stopping by!");}
	
	
	
	return 0;
	
	
	
	
}