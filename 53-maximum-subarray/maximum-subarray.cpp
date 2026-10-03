class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currentSum=0;

        int maxsum = INT_MIN;

        for(int i=0;i<nums.size();i++){

            currentSum =currentSum+nums[i];
            maxsum =  max(maxsum,currentSum);

            if(currentSum < 0){
                currentSum =0;
            }

        }

    return maxsum;
    }
};