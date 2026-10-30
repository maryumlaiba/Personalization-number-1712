#include <iostream>
using namespace std;
// Personalization number: 1712
// Function prototype
void task1(); // Function declare 
void task2(); // These are function definition or function prototype
int main()
{
	task1(); // Exercise 1 is performed in this function
    task2(); // Exercise 2 is performed in this function
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

    cout << firstnum << "*" << secondnum << "=" mul << endl;
}