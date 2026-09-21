class Solution {
public:

   int firstPosition(vector<int>& nums ,int target){  // Find the first (leftmost) position of target

        int n =nums.size();
        int st = 0 ,end = n-1;
        int ans = -1;

        while(st <= end){
         int mid = st + (end -st) / 2;

         if(nums[mid] == target){
            ans = mid;
            end = mid -1;  // Target found, but search further on the left
         }else if(target < nums[mid]){
            end = mid -1;
         }else{
            st = mid+1;
         }
    }
return ans;

}

   int lastPosition(vector<int>& nums ,int target){     // Find the last (rightmost) position of target

        int n =nums.size();
        int st = 0 ,end = n-1;
        int ans = -1;

        while(st<=end){
            int mid =st +(end-st) /2 ;

            if(target == nums[mid]){
                ans = mid;
                st = mid +1; // Target found, but search further on the right
            }else if(target < nums[mid]){
                end = mid -1 ;

            }else{
                st =mid+1;

            }
        }
    return ans;
   }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = firstPosition(nums, target);
        int last = lastPosition(nums, target);

        return {first,last};
       
       
    }
};