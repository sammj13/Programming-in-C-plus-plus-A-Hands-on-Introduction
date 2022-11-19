#include <iostream>
using namespace std;

int main() {
    
    string chessboard[8][8];
    
    int row = sizeof(chessboard) / sizeof(chessboard[0]);
    int col = sizeof(chessboard[0]) / sizeof(string);
    
    //add code below this line
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    cout << "O";
                } else {
                    cout << "X";
                }
            } else {
                if (j % 2 == 0) {
                    cout << "X";
                } else {
                    cout << "O";
                }
            }
        }
        cout << endl;
    }
    //add code above this line
  
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == col - 1) {
                cout << chessboard[i][j] << endl;
            }
            else {
                cout << chessboard[i][j];
            }
        }
    }
    
    return 0;
    
}

/* Feedback:
 * If you tried to access each row/column index, 
 * then you would need to have 64 lines of code in your program 
 * to assigned each row/column pair of indices either O or X.
 */