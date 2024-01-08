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

void solution(){

    int current_row, current_col;
    int destination_row, destination_col;

    cin>>current_row>>current_col;
    cin>>destination_row>>destination_col;

    if(current_row == destination_row)
        cout<<"POSSIBLE"<<nl;
    else if(current_col == destination_col)
        cout<<"POSSIBLE"<<nl;
    else
        cout<<"NOT POSSIBLE"<<nl;
    
}
 
signed main(){
    
    ISO();
 
    solution();
 
    return 0;
}
