/*
https://leetcode.com/problems/interval-list-intersections/
*/

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& num1, vector<vector<int>>& num2) {
        int left{0}, right{0};
        vector<vector<int>> res;
        while(left < num1.size() and right < num2.size())
        {
            if(num1[left][0] > num2[right][1])
            {
                right++;
            }
            else if(num1[left][1] < num2[right][0])
            {
               left++;
            }
            else 
            {
                res.push_back({max(num2[right][0],num1[left][0]) , min(num1[left][1], num2[right][1])});
                if(num1[left][1] < num2[right][1])
                {
                    left++;
                }
                else
                {
                    right++;
                }
            }
        }
        return res;
    }
};
