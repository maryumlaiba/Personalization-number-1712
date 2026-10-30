#include <iostream>
using namespace std;
// Personalization number: 1712
// Function prototype
void task1(); // Function declare 
int main()
{
	task1(); // Exercise 1 is performed in this function
    return 0;
}
    
// Task 1: Variables and Output
int task1()
{
    cout << "Personalization number is 1712" << endl;
    cout << "\nExercise 1: Variables and Output" << endl;

    // Second digit is 7 and last digit is 2
    int first = 7;
    int second = 2;
    int sum = first * second;

    cout << "First number is: " << first << endl
        cout << "Second number is: " << second << endl;
    cout << "Sum is: " << sum << endl;
}