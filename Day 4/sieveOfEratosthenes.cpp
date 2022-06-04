#include<bits/stdc++.h>

using namespace std;

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
    for(int i=2;i<=n;i++){
        if(primeList[i])
            cout<<i<<" ";
    }
}

// Driver Code
int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    solve(n);
    return 0;
}