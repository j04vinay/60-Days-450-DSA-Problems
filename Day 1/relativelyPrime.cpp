#include<bits/stdc++.h>

using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    cout<<"YES"<<endl; 
    while(l<r){
        cout<<l<<" "<<l+1<<endl;
        l+=2;
    }
    return 0;
}