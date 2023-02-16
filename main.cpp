#include <iostream>
#include <string>
using namespace std;

void draw_board(char array[3][3]) {
    cout << "\n";
    cout << "PLAYER 1 - [X]\t\t PLAYER 2 - [0]\n\n";
    cout << "\t      |     |     \n";
    cout << "\t   " << array[0][0] << "  |  " << array[0][1] << "  |  " << array[0][2] << "  \n";
    cout << "\t______|_____|_____\n";
    cout << "\t   " << array[1][0] << "  |  " << array[1][1] << "  |  " << array[1][2] << "  \n";
    cout << "\t______|_____|_____\n";
    cout << "\t   " << array[2][0] << "  |  " << array[2][1] << "  |  " << array[2][2] << "  \n";
    cout << "\t      |     |     \n";
}

void player_turn(char *turn, char array[3][3]) {
    switch (*turn) {
        case 'X': cout << "\nPlayer - 1 [X] turn: "; break;
        default: cout << "\nPlayer - 2 [O] turn: "; break;
    }
    int choice_cell, row, col;
    cin >> choice_cell;

    switch (choice_cell) { // в этом свиче мы выбираем куда ставить крестик или нолик
        case 1: row = 0; col = 0; break;
        case 2: row = 0; col = 1; break;
        case 3: row = 0; col = 2; break;
        case 4: row = 1; col = 0; break;
        case 5: row = 1; col = 1; break;
        case 6: row = 1; col = 2; break;
        case 7: row = 2; col = 0; break;
        case 8: row = 2; col = 1; break;
        case 9: row = 2; col = 2; break;
        default: cout << "Invalid move\n";
    }

    // корректность ввода
    if (*turn == 'X' && array[row][col] != 'X' && array[row][col] != 'O') {
        array[row][col] = 'X';
        *turn = 'O';
    } else if (*turn == 'O' && array[row][col] != 'X' && array[row][col] != 'O') {
        array[row][col] = 'O';
        *turn = 'X';
    } else {
        cout << "Cell is already filled! Choose another!\n\n";
        player_turn(turn, array);
    }
    draw_board(array);
}

int main() {
    // массив для игровой доски
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    // массив для игры
    char turn = 'X';
    bool draw = false;

    draw_board(board);
    return 0;
}
