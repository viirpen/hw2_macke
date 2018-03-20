#include <stdio.h>

int main(void)
{
	
	int num1;
	int counter = 0;
	int sum = 0;
	int largest = 0;
	int smallest = 0;

	float average;

	printf("Enter a number (terminate by entering ""0""): ");
	scanf_s("%d", &num1);

	while (num1 != 0) { /* Get the average of numbers inputted*/
		sum += num1;
		counter += 1;

		if (num1 > largest) { largest = num1; }
		if (num1 < smallest) { smallest = num1; }
		if (num1 == 0) { sum = sum;
		counter = counter;
		}
		/* new number from user*/
		printf("Enter a number(terminate by entering ""0"": ");
		scanf_s("%d", &num1);
	}

	printf("User typed the numbers between %d and %d\n", smallest, largest);

	if (counter != 0) { /* Check for division by 0 */
		average = (float)sum / counter;
		printf("The average of input numbers is %.2f\n", average);
	}
	else { printf("No number was entered.\n");
	}

	return 0;
}

/* Pseudocode:

initialize

sentinel repeating
while (num1 != 0) {
Sum += num1
counter += 1}

Float to average average = (float) sum/counter;

print largest and smallest number. ("User typed the numbers between X and Y")
print float average with 2 decimals
printf ("%.2f", average);

*/