#include <iostream>
using namespace std;
// Personalization number: 1712
// Function prototype
void task1(); // Function declare 
void task2(); // These are function definition or function prototype
void task3(); // void tells function will not return a value
void task4(); // all theses tasks are function names
void task5(); 
void task6();
void task7();
void showwelcome(string name, int marks); // helper function in task7
void task8();
void showcallcount();
// These tell the compiler about the functions in advance 
int main()
{
	task1(); // Exercise 1 is performed in this function
    task2(); // Exercise 2 is performed in this function
    task3(); // Exercise 3 is performed in this function
    task4(); // Exercise 4 is performed in this function
    task5(); // Exercise 5 is performed in this function
    task6(); // Exercise 6 is performed in this function
    task7(); // Exercise 7 is performed in this function
    task8(); // Exercise 8 is performed in this function
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
// Task 5: Switch Case
void task5()
{
    cout << "\nExercise 5:Switch Case" << endl;

    // Month = (1712 % 12) + 1

    int month = (1712 % 12) + 1;

    cout << " Month is " << month << endl;

    switch (month)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    default:
        cout << "Invalid month" << endl;
    }
}
void task6() {
	cout << "\nExercisr6: Arrays" << endl;
	int number[5] = { 12,25,2,40,55 };
	cout << "Third Number is = " << number[2] << endl; // I placed number '2' at third which satisfies both of our requirements


}
void task7() {
	cout << "\nExercise 7: Functions and Parameters" << endl;

	string studentName = "Student";
	int studentMarks = 12;

	showwelcome(studentName, studentMarks); // It takes the values stored in studentName and studentMarks and passes them to showwelcome()
}

void showwelcome(string name, int marks) // receives "Student" and 17
{
	cout << "Welcome, " << name << "!" << endl;
	cout << "Your marks are: " << marks << endl;
}
void task8() {
	cout << "\nExercise 8: Static Local Variable" << endl;

	for (int i = 1; i <= 5; i++) // loop controls how many times we calls the helper function
	{
		showcallcount();
	}
}

void showcallcount() // actual instruction
{
	static int callcount = 0; //static make variable retain its value between cells
	callcount++; //increment

	cout << "Personalization Number: 1712" << endl;
	cout << "Function Call Count: " << callcount << endl;
    
}