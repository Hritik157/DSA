/*
https://leetcode.com/problems/find-all-anagrams-in-a-string/
*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        int len=p.length();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<len;i++){
            freq1[p[i]-'a']++;
        }
        
        int i=0 , j=0;
        int n=s.length();
        while(j<n){
            freq2[s[j]-'a']++;
            if((j-i+1)==p.length()){
                if(freq1==freq2)
                    result.push_back(i);
                freq2[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return result;
    }
};
