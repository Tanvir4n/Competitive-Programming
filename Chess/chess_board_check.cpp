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

void solution(int n){
    int chess_board[n][n];

    // Traversing each cell of the chess board.
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>chess_board[i][j];
        }   
    }
    // Check for adjacent cells
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            // Check adjacent cells: up, down, left, right
            if (i > 0 && chess_board[i][j] == chess_board[i-1][j]){
                cout<<"Not valid"<<nl;
                return;
            }
            if (i < n-1 && chess_board[i][j] == chess_board[i+1][j]){
                cout<<"Not valid"<<nl;
                return;
            }
            if (j > 0 && chess_board[i][j] == chess_board[i][j-1]){
                cout<<"Not valid"<<nl;
                return;
            }
            if (j < n-1 && chess_board[i][j] == chess_board[i][j+1]){
                cout<<"Not valid"<<nl;
                return;
            }
        }
    }
    // If no invalid adjacent cells are found, print "Valid"
    cout<<"Valid"<<nl;
}

signed main(){
   
    ISO();
 
    int n;
    cin>>n;
    solution(n);
 
    return 0;
}
