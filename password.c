/*
Algorithm for password.c

1. Set password to "CS121" and store it in a character array called correct
2. Create an int variable to track the number of tries and set it to 0
3. Create a character array called guess
4. Create an int variable to act as a boolean to tell the loop to keep going and set it to 1 (true)
5. While keepGoing == 1
	i. Print a formatted line asking the user to enter the password including how many tries they have left
	ii. Scan the input and put it into guess
	iii. If strcmp(correct, guess) == 0
		a. set keepGoing to 0 (false)
		b. print formatted line congratulating the user
	iv. Else
		a. print formatted line telling the user they got it wrong
		b. increase tries by 1
	v. If tries == 2
		a. set keepGoing to 0 (false)
		b. print line saying the user failed
6. End loop
7. End program
*/

#include <stdio.h>
#include <string.h>

int main() {
	char correct[10] = "CS121";
	int tries = 0;
	char guess[10];
	int keepGoing = 1;
	while (keepGoing == 1) {
		printf("Enter the password (you have %d more tries): ", (3 - tries));
		scanf("%s", guess);
		if (strcmp(correct, guess) == 0) {
			keepGoing = 0;
			printf("Congrats, you got the password right! Here's a cookie :D \n");
		} else {
			printf("Incorrect. \n");
			tries++;
		} // end if
		if (tries == 3) {
			keepGoing = 0;
			printf("Three failed attempts. No cookie for you \n");
		} // end if
	} // end while
	return 0;
} // end main
