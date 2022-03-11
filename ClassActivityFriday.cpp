// ClassActivityFriday.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Karena Qian
CSC 1230
Maira Ribas Monteiro
10/17/2021 (completion)
In-Class Activity (Loop)
*/

#include <iostream>
using namespace std;

int main()
{
    //Exercise 1
    int low;
    int high;
    int x;
    int multiples = 0;

    //Exercise 2
    int integer;
    int largest = 0;

    //Exercise 3
    int n;
    int counter = 0;

    //Exercise 1
    cout << "Exercise 1\n\n";

    //get low num
    cout << "Please enter three numbers: \n";
    cout << "One starting number: ";
    cin >> low;
    cout << endl;

    //get high num (error if smaller than low)
    do {
        cout << "One ending number: ";
        cin >> high;
        if (high < low) {
            cout << "Error. Try again.";
        }
        cout << endl;
    } while (high < low);

    //get x num
    cout << "One last number: ";
    cin >> x;
    cout << endl;

    //gets num of multiples of x between low and high
    for (int i = low; i <= high; i++) {
        if (i % x == 0) {
            multiples++;
        }
    }

    cout << "Multiples of " << x << " from " << low << " to " << high << ": " << multiples << endl;

    //Exercise 2
    cout << "\nExercise 2\n\n";

    //gets user input
    cout << "Please enter an integer ";
    cin >> integer;
    cout << endl;

    //get user inputs and stops when user inputs a negative num
    while (integer > -1) {
        //keeps track of largest num
        if (integer > largest) {
            largest = integer;
        }

        cout << "Please enter another integer (type a negative num to quit) ";
        cin >> integer;
        cout << endl;
    }

    cout << "The largest integer you entered is: " << largest << endl;

    //Exercise 3
    cout << "\nExercise 3\n\n";
    
    //gets user input (error if input is negative)
    do {
        cout << "Please enter a positive integer ";
        cin >> n;
        if (n < 0) {
            cout << "Error. Try again.";
        }
        cout << endl;
    } while (n < 0);
    
    //prints hailstone sequence
    while (n > 1) {
        //for output formatting
        counter++;
        if (counter == 10) {
            cout << n << endl;
            counter = 0;
        }
        else {
            cout << n << "\t";
        }

        //for next num in hailstone sequence
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = (n * 3) + 1;
        }
    }
    
    //for last num in sequence
    //(doesn't print otherwise and while(n >= 1) gives infinite loop)
    cout << n << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
