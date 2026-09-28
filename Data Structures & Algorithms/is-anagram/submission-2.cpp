class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        unordered_map<char , int>mp1 ;
        unordered_map<char , int>mp2;

        if(n!=m){
            return false ;
        }

        for(int i = 0 ; i<n ; i++){
            mp1[s[i]]++;
        }
        for(int i = 0 ; i<m ; i++){
            mp2[t[i]]++;
        }
        
        
        for(int i = 0 ; i<n ; i++){
            char c = s[i];
            if(mp1[c]!=mp2[c]){
                return false ;
            }
        }
        return true ; 
        
        
    }
};
