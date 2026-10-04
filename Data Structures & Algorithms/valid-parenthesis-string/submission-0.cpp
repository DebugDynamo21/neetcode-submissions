class Solution {
public:
    vector<vector<int>> dp;
    
    bool isValid(string& s, int idx, int bal){
        if(bal < 0){
            return false;
        }

        if(idx == s.size()){
            return bal == 0;
        }

        if(dp[idx][bal] != -1){
            return dp[idx][bal];
        }

        char ch = s[idx];

        if(ch == '('){
            return dp[idx][bal] = isValid(s, idx + 1, bal + 1);
        }

        if(ch == ')'){
            return dp[idx][bal] = isValid(s, idx + 1, bal - 1);
        }

        return dp[idx][bal] = 
            isValid(s, idx + 1, bal + 1) ||
            isValid(s, idx + 1, bal - 1) ||
            isValid(s, idx + 1, bal);
    }

    bool checkValidString(string s) {
        int n = s.size();
        dp.assign(n, vector<int>(n+1, -1));

        return isValid(s, 0, 0);
    }
};
