#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	vector<int>ans;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>v(n);
	    for(int i=0; i<n; i++){
	    cin>>v[i];
	}
	sort(v.begin(), v.end());
	
	int chef=0;
	int son=0;
	
	    for(int i=k; i<n; i++){
	        chef += v[i];
	    }
	
	    for(int i=0; i<k; i++){
	        son += v[i];
	    }
	    int max_diff=chef-son;
    
        ans.push_back(max_diff);
    }
    for(int TK : ans){
        cout<<TK<<endl;
    }
    
}
