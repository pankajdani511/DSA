class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //usign XOR operator 
        int ans = 0 ;
        for(int num : nums){
            ans = ans ^ num ;

        }
return ans;
    }
};