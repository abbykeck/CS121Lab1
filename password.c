#include <stdio.h>

int main() {
	// set password and store in pass
	char pass[20] = "CS121";
	// prompt user to enter a guess for a password and store it in try1
	printf("Enter the password (you have 3 more tries): \n");
	char try1[20];
	scanf("%s", try1);
	// compare try1 to pass
	if (strcmp(pass, try1) == 0) {
		// if try1 matches pass, then print congrats message
		printf("Congrats, you got the password right! You win a cookie. \n");
	} else {
		// if try1 does not match, prompt user to try again and enter another password stored in try2
		printf("Incorrect. Enter the password (you have 2 more tries): \n");
		char try2[20];
		scanf("%s", try2);
		// compare try2 to pass
		if (strcmp(pass, try2) == 0) {
			//if try2 matches pass, print congrats message
			printf("Congrats, you got the password right! You win a cookie. \n");
		} else {
			// if try2 doesn't match, prompt user to try one more time and enter another guess stored in try3
			printf("Incorrect. Enter the password (you have 1 more try): \n");
			char try3[20];
			scanf("%s", try3);
			// compare try3 to pass
			if (strcmp(pass, try3) == 0) {
				// if try3 matches pass, print congrats message
				printf("Congrats, you got the password right! You win a cookie. \n");
			} else {
				// if try3 does not match, print failure message
				printf("Sorry, you used all three tries. No cookies for you! \n");
			} // end try3 comparison
		} // end try2 comparison
	} // end try3 comparison	
	return 0;
} // end main
