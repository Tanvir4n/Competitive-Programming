#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define pi acos(-1)
#define pb push_back
#define endl "\n"
#define nl "\n"

void ISO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    
    int n;
    cin>>n;
    vector<int>v;
    int arr[n+10][n+10];
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            v.pb(arr[i][j]);

            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    cout<<sum<<endl;
 
}
 
signed main(){
 
    ISO();
    solution();
 	


    return 0;
}

/*
3
1 2 3 
4 5 6
7 8 9

sum=15
*/
