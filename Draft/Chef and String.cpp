#include <bits/stdc++.h>

using namespace std;

void solution(){
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int x=0,y=0,pairs=0;
        for(char c : s){
            if(c == 'x'){
                x++;
            }
            else if(c == 'y'){
                y++;
            }
            
        }
        pairs=min(x,y);

        cout<<pairs<<endl;
    }

}

int main(){
	
    solution();


    return 0;
}
