/******************************************************************************
File: file.cpp
Description This programs answers questions from lauders assignment 4 - array and shows how i solved them
History: <Chris Walker> May 3
Functions: <main> - main functions/menu
        question2() return void - functions arranges array(present or chosen of 8 numbers) then displays it
        question3() return void - function stores values of x^2 to(present or chosen number) then displays array
        question4() return void - function stores fibonacci numbers of a number of terms(present or chosen number ) then displays
*******************************************************************************/

#include <iostream>
using namespace std;


// functions
void question2();

void question3();

void question4();

int main() {

    // uninitialized variable
    int choice;

    // runs while loop at least once
    do {

        // question/ option menu
        cout << "Enter 1 to exit, 2 for question 2(array), 3 for question 3 (x^2), 4 for question 4(fibonacci) or 5 for reflection" << endl;
        cin >> choice;

        if (cin.fail()) {// check if fail
            cin.clear(); // reset
            cin.ignore(80, '\n');
        }

        // their choice from their number redirect to the function/ what they want
        if (choice == 2) {
            question2();
        }

        if (choice == 3) {
            question3();

        }

        if (choice == 4) {
            question4();
        }

        if (choice == 5) {
            cout << "I started with flowchart, then coding, then commenting, then writing the algorithm on the code, then writing this" << endl;
            cout << "the most difficult thing was the math to make sure the for loop math works" << endl;
            cout << "I wrote out the math on paper to make sure it worked";
        }

        // resets screen after pressing a key
        system("pause");
        system("cls");
    } while (choice != 1); // end the program if player enters 1 for choice

    return 0;
}


// array sorting function
void question2() {
    // preset array(it can be changed)
    int arrange[8] = { 3,7,8,2,4,9,5,5 };

    // variables
    int a;
    char choice;

    // explaining what it does
    cout << "This program takes an array of 8 numbers, displays them then displays the sorted version!" << endl;

    // asking if the user would like to use the preset array or not

    cout << "Would you like to choose your numbers [y/n]: ";
    cin >> choice;
    if (cin.fail() || (choice != 'Y') || (choice != 'y') || (choice != 'N') || (choice != 'n')) {// check if fail
        cin.clear(); // reset
        cin.ignore(80, '\n');
    }

    // if they don't enter y then they automatic No


// if they said yes
// asks for numbers
    if (choice == 'Y' || choice == 'y') {

        for (int i = 0; i < 8; i++) { // runs 8 times(array length)

            cout << "Enter a number for term " << i << " : ";
            cin >> arrange[i];

            if (cin.fail()) {// check if fail
                cin.clear(); // reset
                cin.ignore(80, '\n');
                i--;
            }

            cout << '\n';
        }
    }

    system("cls");

    // displays arrays and some text to explain what each array is

    cout << "Before arrangement: " << endl;

    // displays the array
    for (int i = 0; i < 8; i++) {
        cout << arrange[i] << ", ";
    }

    cout << '\n';

    // arranges array
    for (int i = 0; i < 8; i++) { // goes through the array 8 times for 8 numbers
        for (int j = 0; j < 8; j++) {

            // if the number before is larger then it is replaced
            if (arrange[i] < arrange[j]) {

                // replacement
                a = arrange[i];
                arrange[i] = arrange[j];
                arrange[j] = a;

            }
        }
    }


    cout << "After arrangement: " << endl;

    // prints organized array
    for (int i = 0; i < 8; i++) {
        cout << arrange[i] << ", ";
    }

    cout << "\nThe way this works for arrangement is insertion sorting. \nWhat happened is if the number before is larger then the number after they replace it.\n" << endl;
    cout << "1. Start\n2.int a, arrange[8] = { 3,7,8,2,4,9,5,5 }, int i = 0, int j = 0\n3. if arrange[i] < arrange[j], then a = arrange[i], arrange[i] = arrange[j], arrange[j] = a, j++\n";
    cout << "4. while j < 8 repeat step 3\n5. if j >= 8 then i += 1 and j = 0 and repeat steps 3-5\n6. if i >= 8, i = 0\n7. while i < 8, print arrange[i]\n8. stop\n while adding some text inside\n";
}


// squared numbers
void question3() {
    // array for upto 20 numbers
    int numbers[20];

    cout << "This prints all squared numbers up to 20" << endl;

    // places all the squared numbers be zero and twenty in a array using i as the array placement and the squared numbers
    for (int i = 0; i < 20; i++) {
        numbers[i] = i * i; // i*i = i^2
    }

    // prints everything in the array in a table
    cout << "y     x^2" << endl;
    for (int i = 0; i < 20; i++) {
        cout << i << "     " << numbers[i] << '\n';
    }

    //resets screen when done looking
    system("pause");
    system("cls");
    cout << '\n';

    cout << "This shows a table for all the numbers between 0-20 squared.\n square the number then add it to an array.\n After I print this array." << endl;
    cout << "1. Start\n2.int numbers[20], int i= 0\n3.numbers[i] = i * i, i++\n4. while i < 20, repeat step 3\n5. if i >= 20, i = 0;\n6. print y and x^2\n7. print i and numbers[i], i++ \n7. while i < 20, repeat step 7\n";
    cout << "8. Stop\n add some text throughout\n";
}

// fibonacci
void question4() {
    // array with first two fibonacci numbers
    int numbers[20] = { 1, 1 };

    cout << "This program stores the first twenty fibonacc numbers then displays them" << endl;

    // math
    for (int i = 2; i < 20; i++) {// note i starts at two not 0
        // number behind plus second number behind added together
        numbers[i] = numbers[i - 1] + numbers[i - 2]; // uses i for math
    }

    for (int i = 0; i < 20; i++) { // prints numbers
        cout << numbers[i] << ", ";
    }

    cout << '\n';

    cout << "\nI add the numbers of the two numbers before to get the next number then display" << endl;
    cout << "1. Start\n2.int numbers[20] ={1,1} (I have the first two numbers to use to find the others), int i = 2\n3.numbers[i] = numbers[i - 1] + numbers[i - 2], i++\n4. while i < 20, repeat step 3\n5. if i >= 20, i = 0;\n6.";
    cout << "print i and numbers[i], i++ \n7. while i < 20, repeat step 6\n8. Stop\n add some text throughout\n";
}







