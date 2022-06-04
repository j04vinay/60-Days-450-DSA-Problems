#include<bits/stdc++.h>

using namespace std;
long long int m,n;

void solve(int n){
    //initialising list from 0 to n
    // and assuming that all numbers are prime initially 
    bool primeList[n+1];
    memset(primeList,true,sizeof(primeList));

    for(int i=2;i*i<=n;i++){
        if(primeList[i]){
            for(int j=i*i;j<=n;j+=i)
                primeList[j]=false;
        }
    }
    for(int i=m;i<=n;i++){
        if(primeList[i] && i>1)
            cout<<i<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        solve(n);
        cout<<"\n";
    }
}