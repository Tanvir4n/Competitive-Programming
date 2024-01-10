#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define pi acos(-1)
#define pb push_back
#define nl "\n"

void ISO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Function to print the chessboard matrix
void printboard(const vector<vector<char>>& board){
    for(const auto& row : board){
        for(char cell : row){
            cout<<cell<<" ";
        }
        cout<<endl;
    }
}

void trapKing(vector<vector<char>>& board, int king_row, int king_col) {
    // Set 1: Queen
    // for all dark green
    if (king_row == 1 && king_col == 1) {
        board[king_row + 1][king_col + 2] = 'Q';
    }
    else if (king_row == 1 && king_col == 8) {
        board[king_row + 1][king_col - 2] = 'Q';
    }
    else if (king_row == 8 && king_col == 1) {
        board[king_row - 1][king_col + 2] = 'Q';
    }
    else if (king_row == 8 && king_col == 8) {
        board[king_row - 1][king_col - 2] = 'Q';
    }

    // For all Orange colored Squares
    else if (king_col == 1) {
        board[king_row - 1][3] = 'Q';
        board[king_row + 1][3] = 'R';
    }
    else if (king_row == 1) {
        board[3][king_col - 1] = 'Q';
        board[3][king_col + 1] = 'R';
    }
    else if (king_col == 8) {
        board[king_row - 1][6] = 'Q';
        board[king_row + 1][6] = 'R';
    }
    else if (king_row == 8) {
        board[6][king_col - 1] = 'Q';
        board[6][king_col + 1] = 'R';
    }

    // For all Sky Blue colored Squares
    else if (king_row == 2 && king_col == 2) {
        board[1][4] = 'Q';
        board[3][4] = 'R';
        board[4][3] = 'B';
    }
    else if (king_row == 2 && king_col == 7) {
        board[1][5] = 'Q';
        board[3][5] = 'R';
        board[4][6] = 'B';
    }
    else if (king_row == 7 && king_col == 2) {
        board[8][4] = 'Q';
        board[6][4] = 'R';
        board[5][3] = 'B';
    }
    else if (king_row == 7 && king_col == 7) {
        board[8][5] = 'Q';
        board[6][5] = 'R';
        board[5][6] = 'B';
    }

    // For all light Green colored Squares
    // You need to replace 'a' with 'king_row' and 'b' with 'king_col' in the conditions
    else if (king_row == 2 || king_row == 7 || king_col == 2 || king_col == 7) {
        if (king_row == 2) {
            board[king_row - 1][king_col + 2] = 'Q';
            board[king_row + 2][king_col - 1] = 'R';
            board[king_row + 2][king_col] = 'B';
        }
        else if (king_row == 7) {
            board[king_row + 1][king_col + 2] = 'Q';
            board[king_row - 2][king_col - 1] = 'R';
            board[king_row - 2][king_col] = 'B';
        }
        else if (king_col == 2) {
            board[king_row - 1][king_col + 2] = 'Q';
            board[king_row + 1][king_col + 2] = 'R';
            board[king_row + 2][king_col + 1] = 'B';
        }
        else {
            board[king_row - 1][king_col - 2] = 'Q';
            board[king_row + 1][king_col - 2] = 'R';
            board[king_row + 2][king_col - 1] = 'B';
        }
    }

    // For all Brown colored Squares
    else {
        board[king_row - 1][king_col + 2] = 'Q';
        board[king_row + 1][king_col - 2] = 'R';
        board[king_row + 2][king_col + 1] = 'B';
    }
}
void solution(){
    

    
}
 
signed main(){
    
    int board_size;
    cin>>board_size;

    int king_row,king_col;
    cin>>king_row>>king_col;
    king_row--;
    king_col--;

    vector<vector<char>>board(board_size, vector<char>(board_size, '*'));
    board[king_row][king_col] = 'K';
    // To print the board
    // for(int i=0; i<board_size; i++){
    // // for(int i=board_size-1; i>=0; i--){
    //     for(int j=0; j<board_size; j++){
    //         cout<<board[i][j]<<" ";
    //     }
    //     cout<<nl;
    // }
    // To print the board
    //printboard(board);

    //trapKing();
    ISO();
 
    solution();
 
    return 0;
}
