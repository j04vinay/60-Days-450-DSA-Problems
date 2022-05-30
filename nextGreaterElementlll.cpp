class Solution {
public:
    int nextGreaterElement(int n) { 
        // change int to string 
        string s = to_string(n);
        int len = s.size();
        int i=len-1;
        while(i>0){
            if(s[i]>s[i-1]) break;
            i--;
        }
        // if digits of number is in decreasing order then return -1 
        if(i==0){return -1;}
        reverse(s.begin()+i, s.end());
        //cout<<s<<endl;
        int j = i-1;
        // swap 
        while(i<len){
            if(s[j] < s[i]){
                swap(s[j], s[i]);
                break;
            }
            i++;
        }
        double ans = stod(s);
        if(ans > INT_MAX) return -1;
        return (int)ans;
    }
};