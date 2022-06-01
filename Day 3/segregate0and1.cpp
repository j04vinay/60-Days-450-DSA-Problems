#include<bits/stdc++.h>

using namespace std;

void segregate(vector<int> nums){
    int n = nums.size(), count = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)
            count++;
    }
    for(int i=0;i<n;i++){
        if(i<count)
            nums[i]=0;
        else
            nums[i]=1;
    }
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    //way 1
    segregate(nums);
    cout<<endl;
    //way 2
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    return 0;
}