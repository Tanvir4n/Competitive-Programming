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

int solution(int knightX, int knightY, int pawnX, int pawnY){
    int dx = abs(knightX - pawnX);
    int dy = abs(knightY - pawnY);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

signed main(){
    ISO();

    int t;
    cin>>t;

    vector<vector<int>> knights;
    for(int i=0; i<t; i++){
        int x,y;
        cin>>x>>y;
        knights.push_back({x, y});
    }

    int pawnX,pawnY;
    cin>>pawnX>>pawnY;

    int count=0;
    for(auto knight : knights){
        if(solution(knight[0], knight[1], pawnX, pawnY)){
            count++;
        }
    }

    cout<<count<<nl;

    return 0;
}
