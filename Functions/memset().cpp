#include<bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

void FastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){

    char buffer[10];
    // for(int i=0; i<10; i++){
    //     buffer[i]='t';
    // }
    memset(buffer, 't', sizeof(buffer));

    for(int i=0; i<10; i++){
        cout<<buffer[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    FastIO();
    
    solution();

}
