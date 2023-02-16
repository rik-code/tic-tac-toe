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

int main() {
    // массив для игровой доски
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    // массив для игры
    char turn = 'X';
    bool draw = false;

    draw_board(board);
    return 0;
}
