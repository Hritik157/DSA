class Solution {
public:
    
    vector<string> generateParenthesis(int n) {
        vector<string> res = {""};
        vector<string> tmp ;
        vector<int> c1 = {0} , tmpc1;
        vector<int> c2 = {0} , tmpc2;

        
        for( int i = 0 ; i < n*2 ; i++ ){
            tmp.clear();
            tmpc1.clear();
            tmpc2.clear();
            for( int j =0 ; j < res.size() ; j++ ){
                //cout << c1[j] << " " << c2[j] << endl;
                if( c1[j]+1 <= n ){
                    
                    tmp.push_back( res[j] + "(" ); 
                    tmpc1.push_back( c1[j]+1);
                    tmpc2.push_back( c2[j] );
                }
                if( c2[j]+1 <= c1[j] ){
                    tmp.push_back( res[j] + ")" ); 
                    tmpc1.push_back( c1[j]);
                    tmpc2.push_back( c2[j]+1 );
                }
                
            }
            res.clear();
            c1.clear();
            c2.clear();
            res = tmp;
            c1 = tmpc1;
            c2 = tmpc2;
        }
        
    
        return res;
    }
};
