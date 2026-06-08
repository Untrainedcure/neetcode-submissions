class Solution {
public:
    bool reverseStr(string& sol,int i) {
        int n = sol.size();
        if(i>=n/2) return true;
        if(sol[i]!=sol[n-i-1]) return false;
        return reverseStr(sol,i+1);
    }
    bool isPalindrome(string s) {
        int n = s.size();
        string sol;
        for(int i=0;i<n;i++) {
            if(s[i]>='A' && s[i]<='Z') {
                sol.push_back(tolower(s[i]));
            }
            else if(s[i]>='a'&&s[i]<='z' || s[i]>='0' && s[i]<='9') {
                sol.push_back(s[i]);
            }
        }
        return reverseStr(sol,0);
        
    }
};
