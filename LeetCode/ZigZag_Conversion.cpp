/*
https://leetcode.com/problems/zigzag-conversion/
*/

class Solution {
public:
   string convert(string s, int numRows) {
        
        if(numRows==1){
            return s;

        }
        int len= s.length();
        string a[numRows];
        int rows =0;
        bool down;
        for(int i=0;i<len;i++){
            a[rows].push_back(s[i]);
            if(rows==numRows-1){
                down=false;
            }
            else if(rows==0){
                down=true;
               
            }  
             (down)? (rows++): (rows--);
        }
       string ret="";
    
    for(int i=0;i<numRows;i++){
        ret+=a[i];
    }
    
     return ret;}
};
