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

void trapKing(vector<vector<char>>& board, int king_row, int king_col){
    // Set 1: 1 Queen
    // for all dark green squares
    if(king_row == 0 && king_col == 0){
        board[king_row + 1][king_col + 2] = 'Q';
    }
    else if(king_row == 0 && king_col == 7){
        board[king_row + 1][king_col - 2] = 'Q';
    }
    else if(king_row == 7 && king_col == 0){
        board[king_row - 1][king_col + 2] = 'Q';
    }
    else if(king_row == 7 && king_col == 7){
        board[king_row - 1][king_col - 2] = 'Q';
    }

    // set 2: 1 Queen, 1 Rook
    // For all Orange colored Squares
    else if(king_col == 0){
        board[king_row - 1][3] = 'Q';
        board[king_row + 1][3] = 'R';
    }
    else if(king_row == 0){
        board[3][king_col - 1] = 'Q';
        board[3][king_col + 1] = 'R';
    }
    
    else if(king_col == 7){
        board[king_row - 1][6] = 'Q';
        board[king_row + 1][6] = 'R';
    }
    else if(king_row == 7){
        board[6][king_col - 1] = 'Q';
        board[6][king_col + 1] = 'R';
    }

    // Set 3: 1 Queen, 1 Rook, 1 Bishop
    // For all Sky Blue colored Squares
    else if(king_row == 1 && king_col == 1){
        board[0][3] = 'Q';
        board[2][3] = 'R';
        board[3][2] = 'B';
    }
    else if(king_row == 1 && king_col == 6){
        board[0][4] = 'Q';
        board[2][4] = 'R';
        board[3][5] = 'B';
    }
    else if(king_row == 6 && king_col == 1){
        board[7][3] = 'Q';
        board[5][3] = 'R';
        board[4][2] = 'B';
    }
    else if(king_row == 6 && king_col == 6){
        board[7][4] = 'Q';
        board[5][4] = 'R';
        board[4][5] = 'B';
    }

    // For all light Green colored Squares
    else if(king_row == 1 || king_row == 6 || king_col == 1 || king_col == 6){
        if(king_row == 1){
            board[king_row - 1][king_col + 2] = 'Q';
            board[king_row + 2][king_col - 1] = 'R';
            board[king_row + 2][king_col] = 'B';
        }
        else if(king_row == 6){
            board[king_row + 1][king_col + 2] = 'Q';
            board[king_row - 2][king_col - 1] = 'R';
            board[king_row - 2][king_col] = 'B';
        }
        else if(king_col == 1){
            board[king_row - 1][king_col + 2] = 'Q';
            board[king_row + 1][king_col + 2] = 'R';
            board[king_row + 2][king_col + 1] = 'B';
        }
        else{
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

    trapKing(board, king_row, king_col);

    printboard(board);

    ISO();

    return 0;
}
