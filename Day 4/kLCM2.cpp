#include<bits/stdc++.h>

using namespace std;

void klcm1(int n){
    if(n%2!=0){
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
    }else{
        if(n%4==0){
            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        }else{
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        while(k!=3){
            cout<<1<<" ";
            k--;
            n--;
        }
        klcm1(n);
    }
    return  0;
}