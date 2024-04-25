#include <iostream>
#include <vector>

using namespace std;

void ISO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    int n;
    cin >> n;
    int arr[n][n]; // Declare n x n matrix

    // Input matrix elements
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate sum of main diagonal and secondary diagonal
    for(int i = 0; i < n; i++){
        mainDiagonalSum += arr[i][i]; // Sum of main diagonal elements
        secondaryDiagonalSum += arr[i][n-1-i]; // Sum of secondary diagonal elements
    }

    // Output sums
    cout << "Sum of main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;
}

int main(){
    ISO();
    solution();
    return 0;
}