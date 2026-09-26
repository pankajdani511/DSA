class Solution {
public:

    void getallSubsets(vector<int>& nums ,vector<vector<int>>& allSubsets ,vector<int> &ans ,int i){
        if(i==nums.size()){
            allSubsets.push_back(ans);

            return;
        }
        //include
        ans.push_back(nums[i]);
        getallSubsets(nums, allSubsets, ans, i+1);

        ans.pop_back();//backtrack krta hai last element ko pop krke 

        //exclude

        getallSubsets(nums, allSubsets, ans, i+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubsets;
    vector<int>ans;

    getallSubsets(nums, allSubsets, ans, 0);

    return allSubsets;    
       
    }
};