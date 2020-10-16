/***********************************************************************
File:
Function:
Algorithm:
Date:
Functions:
***********************************************************************/


#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <stdio.h>    
#include <windows.h>
#include <time.h> 


using namespace std;

// defining keys
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77


void intro();

void levelOne(string name);

void levelTwo(string name);

void end(string name, int lv );

void game(string name, int done, int x, int y);

int main() {
    
    string intructions;

    int choice;
    levelTwo("HG");
    //do {

    //    system("cls");
    //    cout << "Welcome to the game\n";

    //    cout << "Enter the number of which you would like to select\n";
    //    cout << "1. Start the Game\n";
    //    cout << "2. How to play\n";
    //    cout << "3. Exit\n";

    //    cin >> choice;

    //    if (choice == 1) {
    //        intro();
    //    }

    //    if (choice == 2) {

    //        cout << intructions;
    //    }

    //}while(choice != 3);
}

void intro() {
    string name;

    system("cls");

    cout << "\a";
    cout << "Phone ring, Phone ring\n\n";

    system("pause");
    system("cls");

    cout << "Welcome to the oasis! We are very glad that you are coming to be are new sherif, if you could remind me of your name: ";
    cin >> name;

    cout << "Ok " << name << " I understand that you are a card master, interesseting.\nI will have to see that when you get here. Safe travels " << name << "\n\n";

    system("pause");
    system("cls");

    cout << "Later that day\n\n";
    cout << "\a";
    cout << "Phone ring, Phone ring\n\n";

    system("pause");
    system("cls");

    cout << "My child, I packed your cards in you bag, I gave you your three favourite cards: red, blue, and yellow.\n";
    cout << "Red gives you bonus damage\n";
    cout << "Blue heals you\n";
    cout << "Yellow stuns your enemies\n\n";
    cout << "Be safe, the oasis is a strange place\n\n";
    cout << "And remember capitals/caps lock DO NOT WORK!";

    system("pause");
    system("cls");


    game(name, 0, 5, 5);
};



//// base layout 
//string player = "U";
//string arrow = " ";
//
//int c = 0;
//
//int position[2] = { 5,5 };
//int arrowpos[2] = { 5, 5 };
//
//while (position[1] != 100) {
//
//    system("cls");
//
//    for (int i = 0; i < 40; i++) {
//        for (int k = 0; k < 60; k++) {
//            if (position[0] == i && position[1] == k) {
//                cout << player << " ";
//                k++;
//            }
//            if (arrowpos[0] == i && arrowpos[1] == k) {
//                cout << arrow;
//                k++;
//            }
//            if (i == 0 || i == 39 || k == 0 || k == 59) {
//                cout << "*";
//            }
//            else {
//                cout << " ";
//            }
//            cout << " ";
//
//        }
//        cout << "\n";
//    }
//
//    switch ((c = _getch())) { // checking for keys
//
//    case KEY_UP: // on arrow key up
//
//        arrow = "^ ";
//
//        arrowpos[0] = position[0];
//        arrowpos[1] = position[1];
//        if (arrowpos[0] > 2) { // and the position is not 0 or less
//            position[0] -= 1; // subtract one space 
//
//            arrowpos[0] -= 2;
//            // this will make it go up but not go up past a limit
//        }
//        break;
//
//    case KEY_DOWN: // on arrow key down
//        // move the object down
//        arrow = "v ";
//
//        arrowpos[0] = position[0];
//        arrowpos[1] = position[1];
//        if (arrowpos[0] < 37) {
//            arrowpos[0] += 2;
//            position[0] += 1;
//        }
//        break;
//
//
//    case KEY_LEFT: // on arrow key left
//        arrow = " <";
//
//        arrowpos[0] = position[0];
//        arrowpos[1] = position[1];
//        // move the object left if it's not touching the left wall    !this does not include if you wrap around through the right wall!
//        if (arrowpos[1] > 2) {
//
//            position[1] -= 1;
//            arrowpos[1] -= 3;
//        }
//        break;
//
//    case KEY_RIGHT:// on arrow key right
//        arrow = "> ";
//        arrowpos[0] = position[0];
//        arrowpos[1] = position[1];
//
//        // move object right
//        if (arrowpos[1] < 57) {
//            position[1] += 1;
//            arrowpos[1] += 2;
//        }
//        break;
//    }
//}
//system("pause");


void game(string name, int done, int x, int y) {
    string player = "U";
    string arrow = " ";
    string color;

    int c = 0;
    int lvDone = 0;


    int position[2] = { x, y };
    int arrowpos[2] = { 5, 5 };

    while (done != 3) {
        
        // to get to easter egg you must go through the wall to the bar/ level 2
        // you can go in the wall and walk down to get the easter egg
        if (position[0] == 37 && position[1] == 23) {
            cout << "Created by Chris Walker\n";
            cout << "Thanks for playing my game";
            break;
        }
        system("cls");
        cout << '\n';
        for (int i = 0; i < 40; i++) {
            for (int k = 0; k < 44; k++) {
                if (position[0] == i && position[1] == k) {
                    cout << player << " ";
                    k++;
                }
                if (arrowpos[0] == i && arrowpos[1] == k) {
                    cout << arrow;
                    k++;
                }

                // first line is out border 
                if (((i == 0 || i == 39) && k < 30) || k == 0 || (k == 43 && i != 0 && i != 39 && i != 10 )) {
                    cout << "*";
                    
                }


                if (i == 19 && k == 10 && done == 2) {
                    cout << "3333";
                    k += 2;
                }

                if (k == 22 && ((i > 3 && i < 8) || (i > 12 && i < 17))) {
                    cout << "DD";
                    k++;
                }

                if (i == 20 && k == 1 ) {
                    cout << "*  *  *  *  *  *  *  *  *  *  *  *  *  *  * *";
                    k += 22;
                }
                
                if ((i < 39 && i > 0 && i != 20 && (k > 22 && k < 24)) || (i == 10 && k > 22 && k < 37)){
                    cout << "*";
                }

                if (position[0] > 10 && position[1] > 23) {
                    if (i == 13 && k == 32) {
                        cout << "B a r   B a r   B a r *";
                        k+= 13;
                    }

                    if ((k == 32 || k == 33 || k == 34) && i < 39 && i > 13) {
                        cout << "* ";
                        k += 1;
                    }

                    if ((k == 36 || k == 30 || k == 24) &&( i == 15 || i == 20 || i == 25 || i == 30 || i == 35 )) {
                        cout << "P ";
                        k++;
                    }

                    if ((i == 38 || i == 37) && k > 25 && k < 28) {
                        cout << "222222";
                        k+= 3;
                    }
                }

                if (position[0] < 10 && position[1] > 23) {
                    if ((i == 3 || i == 4) && k == 28 ) {
                        cout << "deskdeskdeskdesk";
                        k += 8;
                    }

                    if ( i > 5 && i < 10 && k == 41) {
                        cout << 11;
                        k++;
                    }
                }

                if (2 == i && k == 66) {
                    k += 6;
                }

                else {
                    cout << " ";
                }
                cout << " ";
                
            }
            cout << "\n";
        }

        cout << "D stand for door and the number stands for the level";

        if ((position[0] < 40 && position[0] >= 37) && (position[1] > 25 && position[1] < 29)) {
            levelTwo(name);
            lvDone += 1;
            
        }

        if ((position[0] < 10 && position[0] > 5) && (position[1] == 41 || position[1] == 42)) {
            levelOne(name);
            lvDone += 1;
        }

        if((position[0] == 19) && (position[1] > 9 && position[1] < 13)) {
            end(name, lvDone);
            break;
        }

        switch ((c = _getch())) { // checking for keys

        case KEY_UP: // on arrow key up

            arrow = "^ ";
            
            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            if (arrowpos[0] > 2 && !(arrowpos[0] == 11 && arrowpos[1] > 22)){ // and the position is not 0 or less
                position[0] -= 1; // subtract one space 
                
                arrowpos[0] -= 2;
                // this will make it go up but not go up past a limit
            }
            break;

        case KEY_DOWN: // on arrow key down
            // move the object down
            arrow = "v ";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            if ( arrowpos[0] < 37 && !((arrowpos[0] == 9 && arrowpos[1] > 22) || (arrowpos[0] == 19 && arrowpos[1] < 22))) {
                arrowpos[0] += 2;
                position[0] += 1;
            }
            break;


        case KEY_LEFT: // on arrow key left
            arrow = " <";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            // move the object left if it's not touching the left wall    !this does not include if you wrap around through the right wall!
            if (arrowpos[1] > 2 && !(arrowpos[1] == 24 && !((arrowpos[0] < 8 && arrowpos[0] > 3) || (arrowpos[0] > 12 && arrowpos[0] < 17)))) {

                position[1] -= 1;
                arrowpos[1] -= 3;
            }
            break;

        case KEY_RIGHT:// on arrow key right
            arrow = "> ";
            arrowpos[0] = position[0];
            arrowpos[1] = position[1];

                // move object right
            if (arrowpos[1] < 42 && !(arrowpos[1] == 22 && !((arrowpos[0] < 8 && arrowpos[0] > 3 ) || ( arrowpos[0] > 12 && arrowpos[0] < 17)))) { 
                position[1] += 1;
                arrowpos[1] += 2;
            }
            break;
        }
    }
    system("pause");

    return;
};




void levelOne(string name) {
    // base layout 
    string player = "U";
    string arrow = " ";

    char card = 'b';

    bool playing = true;

    srand(time(NULL));
    int enemy[3][3] = { { 14, 20, 30 }, { floor(rand() % 25 + 5), floor(rand() % 25 + 5) , 30 }, {floor(rand() % 25 + 1), floor(rand() % 25 + 5), 30 } };
    
    int c = 0;
    
    // [0] == y, [1] == x
    // [2] == health
    // [3] == card, 0 = null, 1 == red, 2 == blue, 3 == yellow
    int position[4] = { 5,5, 50, 0 };
    int arrowpos[2] = { 5, 5 };
    
    system("cls");

    cout << "Text: to attack be in the same row or column as the enemy marked with E then you will fire in the direction the arrow is to the end of the row/coloumn\n\n";
    cout << "\nEach card does something different: red does bonus damage, blue heals you and yellow pushes the enemy backwards\n";
    cout << "\nTo attack press lowercase a switch cards press lowercase t\n";
    cout << "\nThe enemy attacks you be being on top of you, then gets push back 5 squares\n\n";

    system("pause");

    while (playing == true) {
        if (card == 'r') {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);    
            SetConsoleTextAttribute(color, 4);
        }

        if (card == 'b') {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 11);

        }

        if (card == 'y') {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 6);

        }
        system("cls");

        for (int i = 0; i < 30; i++) {
            for (int k = 0; k < 50; k++) {
                if (position[0] == i && position[1] == k) {
                    cout << player << " ";
                    k+= 2;
                }
                if (arrowpos[0] == i && arrowpos[1] == k) {
                    cout << arrow;
                    k += 2;
                }
                if (((i == 0 || i == 29) && k < 25 && k > 2) || k == 0 || k == 49) {
                    cout << "*";
                }
                if (playing == true) {
                    if (enemy[0][2] > 0) {
                        if (enemy[0][0] == i && enemy[0][1] == k) {
                            cout << "E";
                            k++;
                            position[3] == 1;
                        }
                    }

                    if (enemy[1][2] > 0 && enemy[0][2] < 1) {
                        if (enemy[1][0] == i && enemy[1][1] == k) {
                            cout << "E";
                            k++;
                            position[3] == 2;
                        }
                    }

                    if (enemy[2][2] > 0 && enemy[1][2] < 1 && enemy[0][2] < 1 ) {
                        if (enemy[2][0] == i && enemy[2][1] == k) {
                            cout << "E";
                            k++;
                            position[3] == 3;
                        }
                    }
                }
                else {
                    cout << " ";
                }
                cout << " ";
    
            }
            cout << "\n";
        }
        cout << "Your HP: " << position[2];
        for (int i = 0; i < 3; i++) {
            if (enemy[i][2] < 0) {
                enemy[i][2] = 0;
            }
            cout << "\nEnemy " << i + 1 << " Health: " << enemy[i][2];
        }
        
        if (enemy[2][2] <= 0) {
            playing = false;
        }
        switch ((c = _getch())) { // checking for keys
    
        case KEY_UP: // on arrow key up

            arrow = "^ ";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            if (arrowpos[0] > 2 ) { // and the position is not 0 or less
                position[0] -= 1; // subtract one space 

                arrowpos[0] -= 2;
                // this will make it go up but not go up past a limit
            }
            break;

        case KEY_DOWN: // on arrow key down
            // move the object down
            arrow = "v ";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            if (arrowpos[0] < 37 ) {
                arrowpos[0] += 2;
                position[0] += 1;
            }
            break;


        case KEY_LEFT: // on arrow key left
            arrow = " <";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            // move the object left if it's not touching the left wall    !this does not include if you wrap around through the right wall!
            if (arrowpos[1] > 2) {

                position[1] -= 1;
                arrowpos[1] -= 4;
            }
            break;
        
        case KEY_RIGHT:
            arrow = "> ";
            arrowpos[0] = position[0];
            arrowpos[1] = position[1];

            // move object right
            if (arrowpos[1] < 42 ) {
                position[1] += 1;
                arrowpos[1] += 3;
            }
            break;

        case 'a':

            //  on right side
            if (arrowpos[1] > position[1]) {
                for (int i = 0; i < 3; i++) {
                    if (enemy[i][0] == position[0] && position[1] < enemy[i][1]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            position[3] += 5;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            if (enemy[i][2] < 38) {
                                enemy[i][2] -= 10;
                            }
                            enemy[i][1] += 5;
                        }
                        
                    }
                }
            }

            // on left side working
            if (arrowpos[1] < position[1]) {
                for (int i = 0; i < 3; i++) {
                    if (enemy[i][0] == position[0] && position[1] > enemy[i][1]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            position[3] += 5;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            if (enemy[i][2] > 12) {
                                enemy[i][2] -= 10;
                            }
                            enemy[i][1] -= 5;
                        }
                        
                    }
                }
            }

            // on bot side
            if (arrowpos[0] > position[0]) {
                for (int i = 0; i < 3; i++) {
                    if (enemy[i][1] == position[1] && position[0] < enemy[i][0]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            if (enemy[i][2] > 12) {
                                enemy[i][2] -= 10;
                                enemy[i][0] += 5;
                            }
                        }

                    }
                }
            }

            // on top side
            if (arrowpos[0] < position[0]) {
                for (int i = 0; i < 3; i++) {
                    if (enemy[i][1] == position[1] && position[0] > enemy[i][0]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            position[3] += 5;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            
                            if (enemy[i][2] < 23) {
                                enemy[i][2] -= 10;
                                enemy[i][0] -= 5;
                            }
                        }
                    }
                }
            }
            break;

        case 't':
            if (card == 'r') {
                card = 'b';
            }
            else if (card == 'b') {
                card = 'y';
            }
            else if (card == 'y') {
                card = 'r';
            }
        }

        
        
    }
    game(name, 0, 8, 35);

}

void levelTwo(string name) {
    // base layout 
    string player = "U";
    string arrow = " ";

    char card = 'b';

    bool playing = true;

    srand(time(NULL));
    int enemy[4][3] = { { floor(rand() % 25 + 5), floor(rand() % 25 + 5) , 30 }, {floor(rand() % 25 + 1), floor(rand() % 25 + 5), 30 }, { floor(rand() % 25 + 5), floor(rand() % 25 + 5) , 30 },
                         { floor(rand() % 25 + 5), floor(rand() % 25 + 5) , 30 } };
    int c = 0;
    int win;

    // [0] == y, [1] == x
    // [2] == health
    // [3] == card, 0 = null, 1 == red, 2 == blue, 3 == yellow
    int position[4] = { 5,5, 50, 0 };
    int arrowpos[2] = { 5, 5 };

    system("cls");

    system("pause");

    while (playing == true) {
        if (card == 'r') {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 4);
        }

        if (card == 'b') {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 11);

        }

        if (card == 'y') {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 6);

        }
        system("cls");

        for (int i = 0; i < 30; i++) {
            for (int k = 0; k < 50; k++) {
                if (position[0] == i && position[1] == k) {
                    cout << player << " ";
                    k += 2;
                }
                if (arrowpos[0] == i && arrowpos[1] == k) {
                    cout << arrow;
                    k += 2;
                }
                if (((i == 0 || i == 29) && k < 25 && k > 2) || k == 0 || k == 49) {
                    cout << "*";
                }
                if (playing == true) {

                    if (enemy[0][2] > 0) {
                        if (enemy[0][0] == i && enemy[0][1] == k) {
                            cout << "E";
                            k++;
                            position[3] == 1;
                        }
                    }

                    if (enemy[1][2] > 0 && enemy[0][2] < 1) {
                        if (enemy[1][0] == i && enemy[1][1] == k) {
                            cout << "E";
                            k++;
                            position[3] == 2;
                        }
                    }

                    if (enemy[2][2] > 0 && enemy[1][2] < 1 && enemy[0][2] < 1) {
                        if (enemy[2][0] == i && enemy[2][1] == k) {
                            cout << "E";
                            k++;
                            position[3] == 3;
                        }
                    }

                    if (enemy[3][2] > 0 && enemy[1][2] < 1 && enemy[0][2] < 1 && enemy[2][2] < 1) {
                        if (enemy[3][0] == i && enemy[3][1] == k) {
                            cout << "E";
                            k++;
                            position[3] == 3;
                        }
                    }
                }
                else {
                    cout << " ";
                }
                cout << " ";

            }
            cout << "\n";
        }
        if (position[2] <= 0) {
            system("cls");
            cout << "You are too injured to continue";
            win = 1;
            break;
        }

        if ( enemy[3][2] <= 0) {
            system("cls");
            cout << "WELL DONE, YOU MUST CONTINUE TO LEVEL 3\n";
            win = 2;
            break;
        }
        cout << "Your HP: " << position[2];
        for (int i = 0; i < 4; i++) {

            if (enemy[i][2] < 0) {
                enemy[i][2] = 0;
            }

            cout << "\nEnemy " << i + 1 << " Health: " << enemy[i][2];

            if (enemy[i][2] <= 0) {
                enemy[i][0] == 0;
                enemy[i][1] == 0;
            }

            if(enemy[0][2] > 0){
                enemy[1][2] = 30;
            }

            if (enemy[1][2] > 0) {
                enemy[2][2] = 30;
            }

            if (enemy[2][2] > 0) {
                enemy[3][2] = 30;
            }

            if ((enemy[i][0] + 1 > position[0] && enemy[i][0] - 1 < position[0]) && (enemy[i][1] + 1 > position[1] && enemy[i][1] - 1 < position[1])) {
                enemy[i][0] = floor(rand() % 25 + 5);
                enemy[i][1] = floor(rand() % 25 + 5);
                position[2] -= 8;
            }

            else {

                if (enemy[i][1] != position[1] || enemy[i][1] - 1 != position[1] || enemy[i][1] + 1 != position[1]) {

                    if (enemy[i][1] < position[1]) {
                        enemy[i][1] += 1;
                    }

                    else if (enemy[i][1] > position[1]) {
                        enemy[i][1] -= 1;
                    }

                else if (enemy[i][0] != position[0] || enemy[i][0] - 1 != position[0] || enemy[i][0] + 1 != position[0]) {

                    if (enemy[i][0] < position[0]) {
                        enemy[i][0] += 1;
                    }

                    else if (enemy[i][0] > position[0]) {
                        enemy[i][0] -= 1;
                    }
                }

                
                }
            }
        }

        switch ((c = _getch())) { // checking for keys

        case KEY_UP: // on arrow key up

            arrow = "^ ";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            if (arrowpos[0] > 2) { // and the position is not 0 or less
                position[0] -= 1; // subtract one space 

                arrowpos[0] -= 2;
                // this will make it go up but not go up past a limit
            }
            break;

        case KEY_DOWN: // on arrow key down
            // move the object down
            arrow = "v ";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            if (arrowpos[0] < 37) {
                arrowpos[0] += 2;
                position[0] += 1;
            }
            break;


        case KEY_LEFT: // on arrow key left
            arrow = " <";

            arrowpos[0] = position[0];
            arrowpos[1] = position[1];
            // move the object left if it's not touching the left wall    !this does not include if you wrap around through the right wall!
            if (arrowpos[1] > 2) {

                position[1] -= 1;
                arrowpos[1] -= 4;
            }
            break;

        case KEY_RIGHT:
            arrow = "> ";
            arrowpos[0] = position[0];
            arrowpos[1] = position[1];

            // move object right
            if (arrowpos[1] < 42) {
                position[1] += 1;
                arrowpos[1] += 3;
            }
            break;

        case 'a':

            //  on right side
            if (arrowpos[1] > position[1]) {
                for (int i = 0; i < 4; i++) {
                    if (enemy[i][0] == position[0] && position[1] < enemy[i][1]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            position[3] += 5;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            enemy[i][2] -= 10;
                            if (enemy[i][2] < 38) {
                                enemy[i][1] += 5;

                            }
                        }
                        if (enemy[i][0] < 0) {
                            enemy[i][0] = 0;
                        }
                    }
                }
            }

            // on left side working
            if (arrowpos[1] < position[1]) {
                for (int i = 0; i < 4; i++) {
                    if (enemy[i][0] == position[0] && position[1] > enemy[i][1]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            position[3] += 5;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            if (enemy[i][2] > 12) {
                                enemy[i][1] -= 5;
                            }
                            enemy[i][2] -= 10;

                        }
                        if (enemy[i][0] < 0) {
                            enemy[i][0] = 0;
                        }
                    }
                }
            }

            // on bot side
            if (arrowpos[0] > position[0]) {
                for (int i = 0; i < 4; i++) {
                    if (enemy[i][1] == position[1] && position[0] < enemy[i][0]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            enemy[i][2] -= 10;

                            if (enemy[i][2] > 12) {
                                enemy[i][0] += 5;

                            }
                        }
                        if (enemy[i][0] < 0) {
                            enemy[i][0] = 0;
                        }
                    }
                }
            }

            // on top side
            if (arrowpos[0] < position[0]) {
                for (int i = 0; i < 4; i++) {
                    if (enemy[i][1] == position[1] && position[0] > enemy[i][0]) {
                        if (card == 'r') {
                            enemy[i][2] -= 15;
                        }
                        if (card == 'b') {
                            enemy[i][2] -= 10;
                            position[3] += 5;
                            if (position[2] < 45) {
                                position[2] += 5;
                            }
                        }
                        if (card == 'y') {
                            enemy[i][2] -= 10;

                            if (enemy[i][2] < 23) {
                                enemy[i][0] -= 5;
                            }
                        }
                        if (enemy[i][0] < 0) {
                            enemy[i][0] = 0;
                        }
                    }
                }
            }
            break;

        case 't':
            if (card == 'r') {
                card = 'b';
            }
            else if (card == 'b') {
                card = 'y';
            }
            else if (card == 'y') {
                card = 'r';
            }
        }



    }
    system("pause");
    game(name, win, 12, 35);
}
void end(string name, int lv) {
    //// base layout 

    if (lv != 2) {
        cout << "You must complete the other levels";

    }
    else {
        cout << "You have shown great improvement " << name << endl;
        cout << "Now you must govern the town\b";
        system("pause");
        system("cls");

        cout << "The Oasis Journey Demo";
        system("pause");
        
    }
}

