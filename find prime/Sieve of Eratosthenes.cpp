#include <bits/stdc++.h>

using namespace std;

void sieveOfEratosthenes(int n){
    
    vector<int>prime(n + 1, 0);

    for(int i=2; i<=n; i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i)
                prime[j] = 1;
        }
    }

    // Print all prime numbers
    cout<<"Prime numbers up to "<<n<<" are: ";
    for(int i=2; i<=n; i++){
        if(prime[i] == 0)
            cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter the limit: ";
    cin>>n;

    sieveOfEratosthenes(n);

    return 0;
}
