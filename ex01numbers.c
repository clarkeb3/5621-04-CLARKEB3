#include <stdio.h>	// Including library required to run the code.
#include <math.h>	// Including library required to run the code.

int main()	// Setting up main function of the script.
{

// Lines 9-10 enable user of script to enter integer of their choice interactively upon running the excutable file. 

int number;
printf("Enter your input integer: ");
scanf("%d",&number);

// Setting up integer array with an amount of elements equal to the chosen integer.

int array[number];

// The for loop from lines 19-22 creates an incremental array from 1-[Number]. 

for(int i = 0; i < number; i++) 
{
  array[i] = i+1;
}

for(int i = 0; i < number; i++) // Setting up loop for checking if number is square.
{
	//Setting up test number to check if input integer is square number.

	int test_number; 

	test_number = sqrt(array[i]);
	if(test_number*test_number == array[i]) printf( "%d is a square number. \n", array[i]);

	// Below is double loop used for testing if numbers are triangular.

	int test_numbers2[number];
	for(int i = 0; i < number; i++)
	{
  		test_numbers2[i] = i+1;

	}
	for(int j = 0; j < number; j++) 
	{
		
		// Here are the conditional statements that print out notifications when partivular numbers are square and/or triangular.

		if(array[i] == (test_numbers2[j]*( test_numbers2[j]+1) ) / (2) ) printf("%d is a triangular number. \n", array[i]);
		if(test_number*test_number == array[i] && array[i] == (test_numbers2[j]*( test_numbers2[j]+1) ) / (2) ) printf("%d is a triangular and a square number. \n", array[i]);

}

}
// This line tells the users that the integers not included in the output up to [number] are not square or trinagular numbers. 

printf("Numbers not listed are neither square nor triangular. \n");
}

