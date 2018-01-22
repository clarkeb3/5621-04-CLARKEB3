#include <stdio.h>	// Including library required to run the code.
#include <math.h>	// Including library required to run the code.

int main()	// Setting up main function of the script.
{

// Lines 8-10 enable user of script to enter integer of their choice interactively upon running the excutable file. 
// Added this line to implement second commit.
float number;
printf("Enter your input number: ");
scanf("%f",&number);

// Setting up long arrays that wil be used for high/low method.

float array[100000];
float square_numbers[100000];

//Setting up forloop.
for(int i = 0; i < 100000; i++) {
  array[i] = i+1;

  // Line below makes resolution of array very fine ton increase accuracy.

  array[i] = array[i]/10000;

  //Defining known square numbers.

  square_numbers[i] = array[i]*array[i];

  //Setting up conditional statemnet to find square roots via the know square numbers. 

  if(square_numbers[i] > number-0.001 &&  square_numbers[i] < number+0.001) printf( "%f is a the square root of %f \n", array[i], number);}

}
