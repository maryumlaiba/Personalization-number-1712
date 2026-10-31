#include <iostream>
using namespace std;
// Personalization number: 1712
// Function prototype
void task1(); // Function declare 
void task2(); // These are function definition or function prototype
void task3(); // void tells function will not return a value
void task4(); // all theses tasks are function names
int main()
{
	task1(); // Exercise 1 is performed in this function
    task2(); // Exercise 2 is performed in this function
    task3(); // Exercise 3 is performed in this function
    task4(); // Exercise 4 is performed in this function
    return 0;
}
    
// Task 1: Variables and Output
void task1()
{
    cout << "Personalization number is 1712" << endl;
    cout << "\nExercise 1: Variables and Output" << endl;

    // Second digit is 7 and last digit is 2
    int first = 7;
    int second = 2;
    int sum = first + second;

    cout << "First number is: " << first << endl;
        cout << "Second number is: " << second << endl;
    cout << "Sum is: " << sum << endl;
}
// Task 2: Arithmetic Operations
void task2()
{
    cout << "\nExercise 2: Arthematic Operations" << endl;

    // first num is sum of digits of my personalization number 1712 = 11
    int firstnum = 11;
    int secondnum = 8;

    // multiply the two operators
    int mul = firstnum * secondnum;

    cout << firstnum << "*" << secondnum << "=" << mul << endl;
}
// Task 3: Loops and Iterations
void task3()
{
    cout << "\nExersie 3: Multiplication Table" << endl;
    cout << "Exercise 3 is done in task 3" << endl;
    cout << "Personalisation Number is 1712" << endl;

    // N is 3 because the last digit of my personalization number 1712 is 2, and 2 + 1 = 3.
    // This loop displays the multiplication table of 3 from 1 to 3.

    int personalizationnumber = 1712;
    int n = (personalizationnumber % 10) + 1;

    for (int i = 1; i <= n; i++)
    {
        // Multiply n by i and display the result
        cout << n << " * " << i << " = " << n * i << endl;
    }
}
// Task 4: If-Else Conditions
void task4()
{
	cout << "\nExercise 4: If/Else Conditions" << endl;
	// The full personalization number 1712 is tested
	// If its remainder after division by 2 is zero it is even

	int number = 1712;

	cout << "\ntask4: Even or Odd" << endl;
	// The % operator checks the remainder after division by 2

	if (number % 2 == 0) // == checks whether the remainder is equal to 0
	{
		// If the remainder is 0, the number is Even
		cout << number << " is Even" << endl;
	}
	else
	{
		// If the remainder is not 0, the number is Odd
		cout << number << " is Odd" << endl;
	}
}