/***********************************************************************************************
Name: Chris Walker
Date: Mar. 12, 2020
File name: Assignment 3
Description: This program will calculate the users input
Functions:
addition(double, double) subtraction(double,double) multiplication(double,double) division(double,double) - function that do basic math
drawCalculator() - draws a calculator
math(double, double, char) - use a switch statement to decide what operation to use
one()- does option one/ basic math    
two()- does option two/ functions
func(double, double) - use switch statement to decide what math is needed
menu() - displays a menu
main() - main function
***********************************************************************************************/

//components
#include <iostream>
#include <array>
#include <string>
#include <math.h>
#include <cstring>
using namespace std;

// error string
const string e = "error";

void drawCalculator() { // program to draw calculator using cout statements
// weirdly formatted in google docs should align in ide
    cout << "*************************" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*************************" << endl;
    cout << "*  end   pow  sqrt  log *" << endl;
    cout << "*  hyp   sin   cos  tan *" << endl;
    cout << "*  1     2      3   /   *" << endl;
    cout << "*  4     5      6   +   *" << endl;
    cout << "*  7     8      9   -   *" << endl;
    cout << "*  0     .      /   *   *" << endl;
    cout << "*  math  abs    -   =   *" << endl;
    cout << "*************************" << endl;
}

// math calculations

double divide(double a, double b) { // division
    return a / b; // does division that can have decimals
}

double multiply(double a, double b) {// multiplication
    return a * b; // return multiplication
}

double subtract(double a, double b) { // subtraction
    return a - b;
}

double add(double a, double b) { // addition
    return a + b;
}

double math(double a, double b, char operation) { // choosing the math function needed
    // grabs operation and places it in switch statement
    // check for addition power subtraction division and multiplication, char operation
    switch (operation) {// calls switch statement
    case '+': // addition case
        return add(a, b); // run addition function
        break;
    case '-': // subtraction case
        return subtract(a, b); // run subtraction function
        break;
    case '*': // multiplication case
        return multiply(a, b);// run multiplication function
        break;
    case '/'://division case 
        return divide(a, b);// division function
        break;
    case '^':// power case
        return pow(a, b);// returns power of the two numbers
        break;
    }
}

// choice # 1  math without bedmas
void one() {
    // variables a for first integer, b for second, awn for answer, and operation for the math 
    double a, b, awn;
    char operation;

    // question
    system("cls"); // clearing the screen
    cout << "Enter your equation using [+(addition, -(subtraction), *(multiplication) , /(division), or ^(exponent)] \n"; // telling user what he can chose
    cout << "as your operations(ex. a + b): "; // giving a example
    // get math input
    cin >> a >> operation >> b; // grabbing input with every second choice being a operation
    if (cin.fail()) {// check if fait
        cin.clear(); // reset
        cin.ignore(80, '\n');
        return;
    }
    while (true) { // while break is not being called
        // can get unlimited numbers and do math with
        cout << a << " " << operation << " " << b << " = "; // continue to get numbers
        a = math(a, b, operation);// check and does math 
        if (a == INFINITY) { // if infinity 
            // ex. 4/0 = inf
            cout << "Infinity\n"; // cout infinity
        }
        else { // else
            cout << a << '\n'; // return a 
        }
        cout << "\nTo exit type e and press enter\n"; // tell user if they type e they can end 
        cout << "\n or enter a operation\n"; // if not keep placing in numbers
        cin >> operation;
        if (cin.fail()) { // cin check if true
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }
        if (operation == 'e') { // if they type e on operation 
            cout << "\nThank you for using this!\n";
            break;// the while loop ends
        }
        else if (cin.fail() == true) { // in a error 
            cout << e;// says error
            break;// breaks
        }
        cout << "number\n";// ask for next number to add to the last operation
        cin >> b; // gets number 
        if (cin.fail()) {// checks if it is a number
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }
        if (b == 'e') { // checks to see that it is  e
            cout << "\nThank you for using this!\n";// if it is e send msg and break
            break;
        }
        else if (cin.fail() == true) {
            cout << e;
            break;
        }

        system("cls");
        // return value
    }
}

// math functions 
void func(int switchNum, double num) { // gets a number for switch and number that is needed

    // variable for hypot function if needed
    double numTwo;

    // start switch statement using switchNum that was imported 
    switch (switchNum) {
    case 0:

        // ask and get second number for hypot then displays calculation
        cout << "Other number: ";
        cin >> numTwo;
        if (cin.fail()) {// check if fait
            cin.clear(); // reset
            cin.ignore(80, '\n');
            return;
        }
        cout << "\n" << hypot(num, numTwo); 
        break;

    case 1:
        // displays abs calculation
        cout << abs(num);
        break;

    case 2:
        // displays sqrt calculation
        cout << sqrt(num);
        break;
    case 3:
        // displays cos calculation
        cout << cos(num);
        break;

    case 4:
        //displays sin calculation
        cout << sin(num);
        break;
    case 5:
        // displays tan calculation
        cout << tan(num);
        break;

    case 6:
        // displays log calculation
        cout << log(num);
        break;

    default:
        // default is error
        cout << e;
    }
}

// option two/ functions 
void two() {
    // declare variables

    // input var
    string mathFunction; 

    // return number
    double num;

    // check var
    int switchNum = -1;

    // creates array for options
    string functions[7] = { "hyp", "abs", "sqrt", "cos", "sin", "tan", "log" };

    // clears screen
    system("cls");

    //question for what they want 
    cout << "Chose what you would like to find" << endl;
    cout << "[hyp(hypotenuse), abs(absolute value), sqrt(square root), cos(cosine), sin(sine), tan(tangent), log(logarithm)]" << endl;
    // grabs input
    cin >> mathFunction;
    if (cin.fail()) {// check if fait
        cin.clear(); // reset
        cin.ignore(80, '\n');
        return;
    }

    // for loop checking is mathFunction is the same as any in the functions array 
    for (int i = 0; i < 6; i++) {
        if (mathFunction == functions[i]) {// if they are the same
            switchNum = i;// switchNum is given i
        }
    }

    if (switchNum == -1) {// if switchNum did not get a new number end program
        return;
    }

    // if switchNum got a new number ask for value
    cout << "Number: ";
    cin >> num;
    if (cin.fail()) {// check if fait
        cin.clear(); // reset
        cin.ignore(80, '\n');
        return;
    }
    func(switchNum, num);// send num and switchNum to func() to enter a switch statement to display value
    cout << '\n';

    system("pause");
}

//menu
void menu() {
    // choice variable
    int choice = 0;

    // while choice is not 4 keep running the program
    while (choice != 4) {
        
        //clear screen
        system("cls");
        
        //choices the user can choose
        cout << "1 for basic math with multiple operation(no bedmas)" << endl;
        //cout << "2 for multiple operation basic math(with bedmas)" << endl;
        cout << "2 for functions" << endl;
        cout << "3 for help" << endl;
        cout << "4 to end" << endl;
        cout << "Chose a number: \n";

        // draw calculator for fun
        drawCalculator();

        //grabs choice
        cin >> choice;
        if (cin.fail()) {// makes sure program doesn't crash
            cin.clear();
            cin.ignore(80, '\n');
            continue;
        }

        // if choice is 1 
        if (choice == 1) {
            one();// run function one
            cout << '\n';
        }
        if (choice == 2) { // if 2 run function two
            two();
            cout << '\n';
        }
        if (choice == 3) { // if 3 run help 
            cout << "Type the operation and places spaces in between your math" << endl;
            cout << "ex. 1 + 2 * 4"<< endl;
            system("pause");
        }

        // if 4 end program

    }
}

int main() {
    // call menu
    menu();
    return 0;
}





