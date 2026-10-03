class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.size() - 1;

        while(st < end){
            
            // skip non-alpha-numeric chars from left
            while(st < end && !isalnum(s[st])){
                st++;
            }
            
            // skip non-aplha numeric chars from right
            while(st < end && !isalnum(s[end])){
                end--;
            }
            
            // compare chars ignoring case
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }

            st++, end--;
        }
        return true;
    }
};
