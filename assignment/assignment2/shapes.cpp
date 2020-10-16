/***********************************************************************
Name: Chris\
Date:  Feb. 28, 2020
File: test.cpp
Description (or Purpose): does shape stuff
Algorithm:
Functions: primary(main),  secondary(choices), tertiary(one, two, three, four), quaternary(triflip, pyramid, elgnairt, triangle)//all are part of three
***********************************************************************/
#include <iostream>
//using conio.h and define for key press
#include <conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_RIGHT 77
using namespace std;

// making global variables to use in many functions
const string line = "\n";// set inalized variable
const string spaces = " ";// set inalized variable

//option one and question one, draws rectangles
void one(char character, int height, int width) // draw a rectangle with parameters that i got
{ // question if they want the rectangle empty or filled
    string choice;// set uninitialized variable
    cout << "Diagonal filled or empty: ";
    cin >> choice;// get there option
    if (choice == "filled" || choice == "Filled" || choice == "f")  // if they want filled do the below
    { //draw the rectangle using a nested loop
        for (int i = 0; i < height; i++) //for the columns 
        {
            for (int j = 0; j < width; j++) //for the rows (the number
            {//of shapes in the row)
                cout << character << " ";// print character
            }
            cout << line;
        }//end of brute force
    }
    if (choice == "empty" || choice == "Empty" || choice == "e") // if they want empty do the below
    {
        cout << line; // give a line in between
        // draw empty  rectangle using brute force/ nested for loop
        for (int i = 1; i <= height; i++) // for the columns
        {
            for (int j = 1; j <= width; j++) // for the rows
            {
                if (i == 1 || i == height || j == 1 || j == width) // i==1 or i == height is for the top and 
                {//bottom j==1 and j == width is for the left and right edges
                    cout << character; // prints character
                }
                else
                {
                    cout << spaces;// else it prints the inside/spaces
                }
            }
            cout << line; // new line to make a start a new row
        }

        cout << line;
    }
    //if neither then go back to start
}

// option/question two draw a diagonal line
void two(char character, int height)  //diagonal with many nested if statements and nested for statements inside the if and for statements
{
    string choice; // set initialized variable  
    cout << "Diagonal left/right/cross: ";  //ask what they want 
    cin >> choice;// get value
    if (choice == "left" || choice == "Left" || choice == "l")  // if choice == left
    {
        cout << "Box y/n: "; // ask if they want a box connected to the diagonal line
        cin >> choice;// get there response
        if (choice == "y" || choice == "Y" || choice == "yes")  // if yes and left
        {
            cout << line; // new line
            for (int i = 1; i <= height; i++) // draw a square with diagonal line using height
            {
                for (int j = height; j > 0; j--)// nested for loop
                {
                    if (i == 1 || i == height || j == 1 || j == height || j == i) //if top bottom left or right side print character
                    {
                        // if j == i draw the character inside the box
                        cout << character; // print character
                    }
                    else
                        cout << spaces; // fill the rest in with blank spaces
                }
                cout << line;// create a new line
            }

        }
        if (choice == "n" || choice == "N" || choice == "no") // if no and left
        {//nested loop to draw a square "grid" with diagonal points"
            for (int i = 0; i < height; i++) //the number of rows made with the height
            {
                for (int j = height - i; j >= 0; j--) //draws the width of the row
                {
                    if (j == 0)  // if j is equal to 0 draw a character
                    {
                        cout << character;
                    }
                    if (j != 0)  // if not print out the filler/spaces
                    {
                        cout << spaces;
                    }
                }
                cout << line; // makes new row
            }
        }
    }
    else if (choice == "right" || choice == "Right" || choice == "r") // if they choose right
    {
        cout << "Box y/n: "; // ask if they want a box connected to the diagonal line
        cin >> choice;// get there response
        if (choice == "y" || choice == "Y" || choice == "yes") // if yes and right
        {// draws a diagonal going right with a box
            cout << line;// new line
            for (int i = 1; i <= height; i++) // creates the limit for rows
            {
                for (int j = height; j > 0; j--)// creates the length of the rows
                {
                    if (i == 1 || i == height || j == 1 || j == height || j == (height - i + 1)) // checks if true
                    {    // creates box on top, left, right and bottom side
                        // draw the diagonals when j == height - i + 1(shift it over one spot)
                        //it makes a connection at on place closer each time
                        cout << character;// prints character
                    }
                    else
                    {
                        cout << spaces; // prints black spaces
                    }
                }
                cout << line;//create a new row
            }

        }
        if (choice == "n" || choice == "N" || choice == "no") // if no and right
        {// draws a diagonal going right without a diagonal
            for (int i = 0; i < height; i++) //creates number of rows
            {
                for (int j = 0; j < height; j++) // say what goes in each row and how long
                {
                    if (j == i) // if row spot(j) is equal to the row number(i) 
                    {
                        cout << character; // print character
                    }
                    if (j != i) // if not equal to row number
                    {
                        cout << spaces; // return a blank space
                    }
                }
                cout << line;//create a new line
            }
        }
    }
    else if (choice == "cross" || choice == "Cross" || choice == "c")  // if choice is equal to cross
    {
        cout << "Box y/n: "; // ask if they want a box connected to the diagonal line
        cin >> choice;// get there response
        if (choice == "y" || choice == "Y" || choice == "yes")  // yes and cross
        {// draws a x/crossing diagonals with a box
            for (int i = 1; i <= height; i++)//creates number of rows
            {
                for (int j = 1; j <= height; j++) // say what goes in each row and how long 
                {
                    if (i == 1 || i == height || j == 1 || j == height || i == j || j == (height - i + 1))// creates edges and checks for intersections
                        //uses the other diagonal lines functions to figure out intersection
                        cout << character; // print character
                    else
                        cout << spaces; // print out blank spaces
                }
                cout << line; // creates a new line
            }//end of brute force
        }
        if (choice == "n" || choice == "N" || choice == "no") {// if cross and no
            for (int i = 1; i <= height; i++)//creates numbers of row based on height
            {// draws a x/crossing diagonals without a box

                for (int j = 1; j <= height; j++) // creates the length of rows
                {
                    if (i == j || j == (height - i + 1)) // checks for uses the other diagonal lines functions to figure out intersection
                    {
                        cout << character;
                    }
                    else //if nothing else is true
                    {
                        cout << spaces;// print spaces
                    }
                }
                cout << line;//create a newline
            }
        }// end of brute force/ nested for loop
    }
    //if neither then go back to start
}
//diagonal right to left

void triangle(char character, int height) { //triangle 
    string choice; //uninitialized string
    cout << "Filled or empty: ";// ask question
    cin >> choice;// get value of filled or empty
    if (choice == "empty" || choice == "Empty" || choice == "e") {// if empty
        cout << line << character << line;// create a new line print a character 
        for (int i = 0; i < height; i++) {// creates number of rows
            // draws a empty triangle
            cout << character; // prints a character
            for (int j = 0; j < height; j++) { //creates width of row
                if (j == i || i == height - 1) { // checks if values are true
                    cout << character; // print character
                }
                else {
                    cout << spaces; // else fills in with spaces
                }
            }
            cout << line; // creates a newline
        }
    }
    else if (choice == "filled" || choice == "Filled" || choice == "f") {
        //if they want filled
            // triangle filled in
            cout << line;
        for (int i = 0; i < height; i++) {// number of rows
            // draws a filled in triangle
            for (int j = 0; j < height; j++) { // size of rows
                // increase the number of characters per row
                if (j <= i) { // if j is smaller or equal then i 
                    cout << character; // prints character
                }
                if (j >= i) { //if j is larger or equal to i
                    cout << spaces; // fill in with spaces
                }
            }
            cout << line; // create a new row
        }
    }
    else {
        cout << "error"; // prints error
    }

}

void elgnairt(char character, int height) { // draws a inverted triangle
    string choice; //uninitialized string
    cout << "Filled or empty: ";// ask question
    cin >> choice;// get value of filled or empty
    if (choice == "filled" || choice == "Filled" || choice == "f") { // if they choose filled
        cout << line; // create a newline
        for (int i = height; i != 0; i--) { // creates number of rows until i == 0
            // draws a inverted filled triangle
            for (int j = 0; j < height; j++) { // create width
                if (j < i) { //if j < i
                    cout << character; // print character
                }// if not blank
            }
            cout << line; // makes a newline
        }
    }
    else if (choice == "empty" || choice == "Empty" || choice == "e") { // else if empty
        // triangle not filled in
        cout << line; // new line
        for (int i = height - 1; i != 0; i--) { // creates number of rows until i == 0
            // creates a empty inverted triangle
            for (int j = 0; j < height - 1; j++) { // draws number of rows
                if (j == i - 1 || j == 0 || i == height - 1) { // checks if values are true 
                    cout << character; // prints character
                }
                else {
                    cout << spaces; // else print blank
                }
            }
            cout << line;
        }
    }
    else {
        cout << "error";
    }
}

void pyramid(char character, int height) {
    cout << "Press right key to end, up and down key to change the pyramid"; // explain what to do
    int c = 0; // declare c to 0
    while (1) // while true
    {
        c = 0; // c is 0

        switch ((c = _getch())) { // grabs input
        case KEY_UP://when up arrow is pressed
            // run nested for loops
            // rightside up pyramid
            for (int i = 1, k = 0; i <= height; ++i, k = 0) // number of rows
            {
                for (int j = 1; j <= height - i; j++)// width of rows
                {
                    cout << spaces << spaces; //inside of rows
                }

                while (k != 2 * i - 1) // while k != 2* i -1 
                {
                    cout << character << spaces; // print character
                    ++k;
                }
                cout << line;// create a new line
            }
            break; // end choice is something else if pressed
        case KEY_DOWN:  // down key
            //upside down pyramid
            for (int i = height; i >= 1; --i) {// rows
                for (int j = 0; j < height - i; j++) { // blank inside pyramid
                    cout << "  ";
                }

                for (int k = i; k <= 2 * i - 1; k++) { // left side of the pyramid
                    cout << character << spaces;
                }
                for (int l = 0; l < i - 1; l++) { // right side of the pyramid
                    cout << character << spaces;
                }

                cout << line;
            }
            break;
        case KEY_RIGHT: // when the right arrow key is pressed
            return; // end switch statement
            break;
        default: // always says
            cout << endl << "Press right key to end, up and down key to change the pyramid" << endl;  // not arrow but always said 
            break;
        }

    }
}
//question and number three, triangles and pyramids
void three(char character, int height) { 
    string choice; //uninitialized string
    cout << "triangle or pyramid: ";// ask question
    cin >> choice;// get value of filled or empty
    if (choice == "triangle" || choice == "t" || choice == "Triangle") {// if triangle
        cout << "Inverted or upright: "; // ask inverted or upright
        cin >> choice; // grab input
        if (choice == "i" || choice == "I" || choice == "inverted" || choice == "Inverted") { //if triangle and inverted
            elgnairt(character, height); // do this function
        }
        else { // if triangle and not inverted
            triangle(character, height); // do this
        }
    }
    if (choice == "pyramid" || choice == "p" || choice == "Pyramid") { // if pyramid
        pyramid(character, height); // do this function
    }
    //if neither then go back to start
}

void four() { // armstrong number under 500, question 4 and option 4
    cout << "This shows all the armstrong numbers between 1 and 500" << line;// explain what I am doing 
    int sum, num;
    cout << "Armstrong numbers between 1 and 500: " << line;// armstrong number is when all numbers(single) to the power of 3 are equal to the number
    for (int i = 0; i < 5; i++) { // 5 for 500 hundreds digits
        for (int j = 0; j < 10; j++) {//10 for tens digits
            for (int l = 0; l < 10; l++) {
                num = i * 100 + j * 10 + l; //creating number
                sum = pow(i, 3) + pow(j, 3) + pow(l, 3); //creating powers to three and adds them
                if (num == sum) // if true return num
                    cout << num << line; // prints number the new line to make it look nice
            }
        }
    }
    //if neither then go back to start
}

//choices function to decide where you go after main/start
void choices(char choice) {
    if ('0' < choice && choice < '4') {// if 1 2 or 3
        //uninitialized variables
        char myChar; 
        int myHeight;
        int myWidth;

        cout << "Enter a single symbol, letter or number: " << line; // ask for character
        cin >> myChar; // get character

        cout << "Enter the Height: " << line;// ask for height 
        cin >> myHeight;// get height

        if (choice == '1') { // if choice is 1
            cout << "Please input the width of the shape\n"; // get them to enter width
            cin >> myWidth;// get width
            if (myWidth >= 1 && choice == '1') {//if choice is one and height is bigger than 1 
                one(myChar, myHeight, myWidth);// go to function one
            }
            else {
                "That was not a number \n";// return error msg
            }
        }
        if (choice == '2') {// if number 2
            two(myChar, myHeight);// go to function two
        }
        if (choice == '3') {// if choice 3
            three(myChar, myHeight);//got to function three
        }
    }
    if (choice == '4') {// if choice 4 
        four();// go to function four
    }
}

int main() {
    // my variables
    char choice;
    string end = "y";// set to yes so it will ask question on what they want
    string result;

    //do while statement 
    do {
        //runs at least once
        if (end == "y" || end == "Y") { // because string end is already "y" run code below or they inputted "y"
            cout << "Pick a number(1 = draw rectangle, 2 = diagonal, 3 = triangle, 4 = Armstrong): " << line;// ask for a number
            cin >> choice; // get choice to use in function and if statement
            if (choice <= '4' && choice > '0') { // if choice is possible
                choices(choice);// go to choice function with parameter of choice 
            }

        }
        cout << "Do you want to try: Y/N ";// if function is finished or choice is not proper ask
        cin >> end;//get y 
        if (end == "no" || end == "No" || end == "n" || end == "N") {//if no 
            system("pause");// pause then
            return 0;// end
        }

    } while (end != "y" || end != "Y" || end == "no" || end == "No" || end == "n" || end == "N"); // while not any of the option continue to run

}







